#include "Person.h"
#include "db.h"

QSqlDatabase* Person::pDB = 0;
Person *Person::pPerson = 0;

Person::Person()
{

}

Person *Person::getInstance()
{
    if(pPerson == 0)
    {
        pDB = db::getInstance();
        pDB->open();

        QSqlQuery query;

        if(!query.exec("CREATE TABLE person ("
                    "person_id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
                    "name VARCHAR(20) NOT NULL,"
                    "nat_id TEXT,"
                    "birth_date DATETIME,"
                    "birth_place TEXT,"
                    "job_title TEXT,"
                    "company TEXT,"
                    "mobile_no TEXT,"
                    "is_live BOOL,"
                    "family_id INTEGER,"
                    "marriage_place TEXT,"
                    "education TEXT,"
                    "gender TEXT,"
                    "CONSTRAINT fk_family FOREIGN KEY (family_id) REFERENCES family(family_id));"))
        {
            qDebug() << "error while creating person table :" <<query.lastError() << endl;
        }

        pDB->close();
    }

    return pPerson;
}

bool Person::append(const tPerson* pP)
{
    bool ret = false;
    pDB->open();
    QSqlQuery query;

    if(query.exec("INSERT into person (name,birth_place,mobile_no,nat_id,birth_date,education,job_title,gender,company) "
                   "values ('"+pP->name+"','"+pP->birthPlace+"','"+pP->mobNo+"','"+pP->natId+"','"+pP->birthDate+"','"+pP->education+"','"+pP->jobTitle+"','"+pP->gender+"','"+pP->company+"')"))
    {
       ret = true;
    }
    else
    {
       qDebug() << "error while insertion into person :" <<query.lastError() << endl;
    }

    pDB->close();
    return ret;
}

void Person::getNamesAlikesIntoModel(QSqlQueryModel* pModel,QString name)
{
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT person_id,name from person where name LIKE :name");
    query.bindValue(":name", QString("%%1%").arg(name));

    if(!query.exec())
    {
        qDebug() << "error while getting person names alikes" <<query.lastError() << endl;
    }

    pModel->setQuery(query);
    pDB->close();
}

bool Person::get(tPerson* pPerson,unsigned int id)
{
    bool ret = false;
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * from person where person_id = :id");
    query.bindValue(":id", id);

    qDebug() << "id :" << id << endl;

    if(query.exec())
    {
        ret = true;
        query.next();
        QSqlRecord pRes = query.record();

        pPerson->id = pRes.value(pRes.indexOf("person_id")).toInt();
        pPerson->name = pRes.value(pRes.indexOf("name")).toString();
        pPerson->birthPlace = pRes.value("birth_place").toString();
        pPerson->mobNo = pRes.value("mobile_no").toString();
        pPerson->natId = pRes.value("nat_id").toString();
        pPerson->birthDate = pRes.value("birth_date").toString();
        pPerson->education = pRes.value("education").toString();
        pPerson->gender = pRes.value("gender").toString();
        pPerson->jobTitle = pRes.value("job_title").toString();
        pPerson->company = pRes.value("company").toString();
    }
    else
    {
        qDebug() << "get persons with id" <<query.lastError() << endl;
    }

    pDB->close();

    return ret;
}

bool Person::remove(unsigned int id)
{
    bool ret = false;
    pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM person where person_id = :id");
    query.bindValue(":id", id);

    if(query.exec())
    {
        ret = true;
    }
    else
    {
        qDebug() << "error while deleting person" <<query.lastError() << endl;
    }
    pDB->close();
    return ret;
}

QList<tPerson> Person::getAll(tJob j)
{
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT person_id,name from person where job_title = :j");
    query.bindValue(":j",j == JOB_PRIEST ? "كاهن" : "");

    tPerson temp_person;
    QList<tPerson> ret_list;

    if(query.exec())
    {
        while(query.next())
        {
            QSqlRecord pRes = query.record();

            temp_person.name = pRes.value(pRes.indexOf("name")).toString();
            temp_person.id = pRes.value(pRes.indexOf("person_id")).toUInt();

            ret_list.append(temp_person);
        }
    }
    else
    {
        qDebug() << "error while getting persons with a job" <<query.lastError() << endl;
    }

    pDB->close();

    return ret_list;
}

QList<tPerson> Person::getAll(tGender g)
{
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT person_id,name from person where gender = :g");
    query.bindValue(":g",g == GENDER_MALE ? "ذكر" : "انثي");

    tPerson temp_person;
    QList<tPerson> ret_list;

    if(query.exec())
    {
        while(query.next())
        {
            QSqlRecord pRes = query.record();

            temp_person.name = pRes.value(pRes.indexOf("name")).toString();
            temp_person.id = pRes.value(pRes.indexOf("person_id")).toUInt();
            temp_person.gender = g;

            ret_list.append(temp_person);
        }
    }
    else
    {
        qDebug() << "error while getting persons with gender" <<query.lastError() << endl;
    }

    pDB->close();

    return ret_list;
}


QList<tPerson> Person::getAll(void)
{
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT person_id,name,gender from person");
    tPerson temp_person;
    QList<tPerson> ret_list;

    if(query.exec())
    {
        while(query.next())
        {
            QSqlRecord pRes = query.record();

            temp_person.name = pRes.value(pRes.indexOf("name")).toString();
            temp_person.id = pRes.value(pRes.indexOf("person_id")).toUInt();

            if(pRes.value(pRes.indexOf("gender")).toString() == "ذكر")
            {
                temp_person.gender = GENDER_MALE;
            }
            else
            {
                temp_person.gender = GENDER_FEMALE;
            }

            ret_list.append(temp_person);
        }
    }
    else
    {
        qDebug() << "error while getting all persons" <<query.lastError() << endl;
    }

    pDB->close();

    return ret_list;
}

bool Person::update(tPerson *pP)
{
    bool ret = true;
    pDB->open();
    QSqlQuery query;

    query.prepare("UPDATE person set name = :n,"
                  "birth_place = :bp,"
                  "mobile_no = :mn,"
                  "nat_id = :nid,"
                  "birth_date = :bd,"
                  "education = :e,"
                  "job_title = :jt,"
                  "gender = :g,"
                  "company = :c where person_id = :id ");

    query.bindValue(":n",pP->name);
    query.bindValue(":bp",pP->birthPlace);
    query.bindValue(":mn",pP->mobNo);
    query.bindValue(":nid",pP->natId);
    query.bindValue(":bd",pP->birthDate);
    query.bindValue(":e",pP->education);
    query.bindValue(":jt",pP->jobTitle);
    query.bindValue(":g",pP->gender);
    query.bindValue(":c",pP->company);
    query.bindValue(":id",pP->id);

    if(!query.exec())
    {
        ret = false;
        qDebug() << "error while updating person" <<query.lastError() << endl;
    }

    pDB->close();

    return ret;
}



