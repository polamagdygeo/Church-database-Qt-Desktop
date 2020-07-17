#include "Visits.h"
#include "db.h"

QSqlDatabase* Visits::m_pDB = 0;
Visits *Visits::m_pVisits = 0;

Visits::Visits()
{
}

Visits *Visits::getInstance()
{
    if(m_pVisits == 0)
    {
        m_pDB = db::getInstance();
        m_pDB->open();

        QSqlQuery query;

        if(!query.exec("CREATE TABLE visits"
                  "(visit_id INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "family_id INTEGER,"
                   "priest_id INTEGER,"
                   "date DATETIME,"
                   "CONSTRAINT fk_family FOREIGN KEY (family_id) REFERENCES family(family_id),"
                   "CONSTRAINT fk_person FOREIGN KEY (priest_id) REFERENCES person(person_id));"))
        {
            qDebug() << "error while creating visists table" <<query.lastError() <<endl;
        }

        m_pDB->close();
    }

    return m_pVisits;
}

bool Visits::append(tVisit& visit)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("INSERT into visits(family_id,priest_id,date) "
                  "values (:fam_id,:pri_id,:d)");
    query.bindValue(":fam_id", visit.familyId);
    query.bindValue(":pri_id", visit.priestId);
    query.bindValue(":d", visit.date);

    if(query.exec())
    {
        ret = true;
    }
    else
    {
        qDebug() << "error while adding a visit" <<query.lastError() << endl;
    }

    m_pDB->close();
    return ret;
}

bool Visits::getForFamily(int family_id,QList<tVisit> &visits_list)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * from visits where family_id = :id");
    query.bindValue(":id", family_id);

    if(query.exec())
    {
        ret = true;

        while(query.next())
        {
              QSqlRecord pRes = query.record();

              tVisit temp;

              temp.visitId = pRes.value(pRes.indexOf("visit_id")).toInt();
              temp.priestId = pRes.value(pRes.indexOf("priest_id")).toInt();
              temp.date = pRes.value(pRes.indexOf("date")).toString();

              visits_list.append(temp);
        }
    }
    else
    {
        qDebug() << "error while getting visits of a family" <<query.lastError() << endl;
    }

    m_pDB->close();
    return ret;
}

bool Visits::remove(unsigned int id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM visits where visit_id = :id");
    query.bindValue(":id", id);

    if(query.exec())
    {
        ret = true;
    }
    else
    {
        qDebug() << "error while deleting person" <<query.lastError() << endl;
    }
    m_pDB->close();
    return ret;
}
