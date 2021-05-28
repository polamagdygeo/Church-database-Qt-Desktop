#include "PersonRepo.h"
#include "db.h"

QSqlDatabase* PersonRepo::pDB = 0;
PersonRepo *PersonRepo::m_pPerson = 0;

PersonRepo::PersonRepo()
{

}

PersonRepo *PersonRepo::getInstance()
{
    if(m_pPerson == 0)
    {
        m_pPerson = new PersonRepo;

        if(m_pPerson)
        {
            pDB = db::getInstance();

        //    pDB->open();

        //    QSqlQuery query;

        //    if(!query.exec("CREATE TABLE person ("
        //                "person_id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
        //                "name VARCHAR(20) NOT NULL,"
        //                "nat_id TEXT,"
        //                "birth_date DATETIME,"
        //                "birth_place TEXT,"
        //                "job_title TEXT,"
        //                "company TEXT,"
        //                "mobile_no TEXT,"
        //                "is_live BOOL,"
        //                "family_id INTEGER,"
        //                "marriage_place TEXT,"
        //                "education TEXT,"
        //                "gender TEXT,"
        //                "CONSTRAINT fk_family FOREIGN KEY (family_id) REFERENCES family(family_id));"))
        //    {
        //        qDebug() << "error while creating person table :" <<query.lastError() << endl;
        //    }

        //    pDB->close();
        }
    }

    return m_pPerson;
}

bool PersonRepo::append(const PersonModel* pP)
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

void PersonRepo::getNamesAlikesIntoModel(QSqlQueryModel* pModel,QString name)
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

bool PersonRepo::get(PersonModel* pPerson,unsigned int id)
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

bool PersonRepo::remove(unsigned int id)
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

QList<PersonModel> PersonRepo::getAll(tJob j)
{
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT person_id,name from person where job_title = :j");
    query.bindValue(":j",j == JOB_PRIEST ? "كاهن" : "");

    PersonModel temp_person;
    QList<PersonModel> ret_list;

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

QList<PersonModel> PersonRepo::getAll(tGender g)
{
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT person_id,name from person where gender = :g");
    query.bindValue(":g",g == GENDER_MALE ? "ذكر" : "انثي");

    PersonModel temp_person;
    QList<PersonModel> ret_list;

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


QList<PersonModel> PersonRepo::getAll(void)
{
    pDB->open();
    QSqlQuery query;

    query.prepare("SELECT person_id,name,gender from person");
    PersonModel temp_person;
    QList<PersonModel> ret_list;

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

bool PersonRepo::update(PersonModel *pP)
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



