#include "Family.h"
#include "db.h"

QSqlDatabase* Family::m_pDB = 0;
Family *Family::m_pFamily = 0;

Family::Family()
{

}

Family *Family::getInstance()
{
    if(m_pFamily == 0)
    {
        m_pDB = db::getInstance();
        m_pDB->open();

        QSqlQuery query;

        if(!query.exec("CREATE TABLE family"
                  "(family_id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
                   "father_id INTEGER NOT NULL,"
                   "mother_id INTEGER NOT NULL,"
                   "children_no INTEGER,"
                   "note TEXT,"
                   "flat_no TEXT,"
                   "building_no TEXT,"
                   "entrance_no TEXT,"
                   "block_no TEXT,"
                   "neighbourhood_no TEXT,"
                   "resiedence_type TEXT,"
                   "CONSTRAINT fk_person FOREIGN KEY (father_id,mother_id) REFERENCES person(person_id,person_id));"))
        {
            qDebug() << "error while creating family table" <<query.lastError() << endl;
        }

        if(!query.exec("CREATE TABLE family_children"
                  "(child_id INTEGER,"
                   "family_id INTEGER,"
                   "CONSTRAINT fk_person FOREIGN KEY (child_id) REFERENCES person(person_id),"
                   "CONSTRAINT fk_family FOREIGN KEY (family_id) REFERENCES family(family_id));"))
        {
            qDebug() << "error while creating family_children table" <<query.lastError() <<endl;
        }

        if(!query.exec("CREATE TABLE family_resident"
                  "(resident_id INTEGER,"
                   "family_id INTEGER,"
                   "non_child_relation TEXT,"
                   "CONSTRAINT fk_person FOREIGN KEY (resident_id) REFERENCES person(person_id),"
                   "CONSTRAINT fk_family FOREIGN KEY (family_id) REFERENCES family(family_id));"))
        {
            qDebug() << "error while creating family_resident table" <<query.lastError() <<endl;
        }

        if(!query.exec("CREATE TABLE family_parents"
                  "(father_id INTEGER,"
                   "mother_id INTEGER,"
                   "family_id INTEGER,"
                   "CONSTRAINT fk_person FOREIGN KEY (father_id) REFERENCES person(person_id),"
                   "CONSTRAINT fk_person FOREIGN KEY (mother_id) REFERENCES person(person_id),"
                   "CONSTRAINT fk_family FOREIGN KEY (family_id) REFERENCES family(family_id));"))
        {
            qDebug() << "error while creating family_resident table" <<query.lastError() <<endl;
        }

        m_pDB->close();
    }

    return m_pFamily;
}

int Family::getFamilyId(int father_id,int mother_id)
{
    int family_id = -1;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT family_id from family where father_id = :fId or mother_id = :mId");
    query.bindValue(":fId",father_id);
    query.bindValue(":mId",mother_id);

    if(query.exec())
    {
        query.next();
        QSqlRecord pRes = query.record();

        family_id = pRes.value(pRes.indexOf("family_id")).toInt();
    }
    else
    {
        qDebug() << "error while getting family id with parents id" <<query.lastError() << endl;
    }

    m_pDB->close();

    return family_id;
}

bool Family::addChildrenList(QList<int> children_list,int family_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    int i = 0;

    qDebug() << "children no:" << children_list.size();

    while(i < children_list.size())
    {
        query.prepare("INSERT into family_children(child_id,family_id) "
                      "values (:child_id,:family_id)");

        query.bindValue(":child_id",children_list[i]);
        query.bindValue(":family_id",family_id);

        if(query.exec())
        {
            ret = true;
        }
        else
        {
            qDebug() << "error while adding childrens" <<query.lastError() << endl;
            ret = false;
            break;
        }

        i++;
    }

    m_pDB->close();
    return ret;
}

bool Family::addResidentsList(QList<QPair<int,QString>> resident_list,int family_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    int i = 0;

    qDebug() << "resident no:" << resident_list.size();

    while(i < resident_list.size())
    {
        query.prepare("INSERT into family_resident(resident_id,family_id,non_child_relation) "
                      "values (:resident_id,:family_id,:non_child_relation)");

        query.bindValue(":resident_id",resident_list[i].first);
        query.bindValue(":family_id",family_id);
        query.bindValue(":non_child_relation",resident_list[i].second);

        if(query.exec())
        {
           ret = true;
        }
        else
        {
           qDebug() << "error while adding residents" <<query.lastError() << endl;
           ret = false;
           break;
        }

        i++;
    }

    m_pDB->close();
    return ret;
}

bool Family::removeAllChildren(int fam_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM family_children WHERE family_id = (:id)");
    query.bindValue(":id",fam_id);

    if(query.exec())
    {
        ret = true;
    }
    else
    {
        qDebug() << "error while deleting all childrens" <<query.lastError() << endl;
        ret = false;
    }

    m_pDB->close();
    return ret;
}

bool Family::removeAllResidents(int fam_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM family_resident WHERE family_id = (:id)");
    query.bindValue(":id",fam_id);

    if(query.exec())
    {
       ret = true;
       qDebug() << "delete all res done" << endl;
    }
    else
    {
       qDebug() << "error while deleting all residents" <<query.lastError() << endl;
       ret = false;
    }

    m_pDB->close();
    return ret;
}

bool Family::removeAllVisits(int fam_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM visits WHERE family_id = (:id)");
    query.bindValue(":id",fam_id);

    if(query.exec())
    {
        ret = true;
    }
    else
    {
        qDebug() << "error while deleting all visits" <<query.lastError() << endl;
        ret = false;
    }

    m_pDB->close();
    return ret;
}

int Family::getFamilyId(int person_id)
{
    bool isFound = false;
    int ret = -1;

    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT family_id from family where father_id = :fId or mother_id = :mId");
    query.bindValue(":fId",person_id);
    query.bindValue(":mId",person_id);

    if(query.exec())
    {
        query.next();

        QSqlRecord pRes = query.record();

        ret = pRes.value(pRes.indexOf("family_id")).toInt();

        if(ret != 0)
        {
            isFound = true;
        }
    }
    else
    {
        qDebug() << "error1" <<query.lastError() << endl;
    }

    if(!isFound)
    {
        query.prepare("SELECT family_id from family_children where child_id = :fId");
        query.bindValue(":fId",person_id);

        if(query.exec())
        {
            query.next();

            QSqlRecord pRes = query.record();

            ret = pRes.value(pRes.indexOf("family_id")).toInt();

            if(ret != 0)
            {
                isFound = true;
            }
        }
        else
        {
            qDebug() << "error1" <<query.lastError() << endl;
        }
    }

    if(!isFound)
    {
        query.prepare("SELECT family_id from family_resident where resident_id = :fId");
        query.bindValue(":fId",person_id);

        if(query.exec())
        {
            query.next();

            QSqlRecord pRes = query.record();

            ret = pRes.value(pRes.indexOf("family_id")).toInt();

            if(ret != 0)
            {
                isFound = true;
            }
        }
        else
        {
            qDebug() << "error1" <<query.lastError() << endl;
        }
    }

    m_pDB->close();

    return ret;
}

QList<int> Family::getChildrenList(int family_id)
{
    QList<int> ret;

    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * from family_children where family_id = :fId");
    query.bindValue(":fId",family_id);

    if(query.exec())
    {
        while(query.next())
        {
            QSqlRecord pRes = query.record();

            ret.append(pRes.value(pRes.indexOf("child_id")).toInt());
        }
    }
    else
    {
        qDebug() << "error while getting children" <<query.lastError() << endl;
    }

    m_pDB->close();

    return ret;
}

QList<QPair<int,QString>> Family::getResidentList(int family_id)
{
    QList<QPair<int,QString>> ret;

    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * from family_resident where family_id = :fId");
    query.bindValue(":fId",family_id);

    if(query.exec())
    {
        while(query.next())
        {
            QSqlRecord pRes = query.record();

            QPair<int,QString> temp;

            temp.first = pRes.value(pRes.indexOf("resident_id")).toInt();

            temp.second = pRes.value(pRes.indexOf("non_child_relation")).toString();

            ret.append(temp);
        }

    }
    else
    {
        qDebug() << "error while getting resident" <<query.lastError() << endl;
    }

    m_pDB->close();

    return ret;
}

tFamily Family::get(int family_id)
{
    tFamily ret = {.fatherId = -1};
    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * from family where family_id = :fId");
    query.bindValue(":fId",family_id);

    if(query.exec())
    {
        query.next();
        QSqlRecord pRes = query.record();

        ret.id = family_id;
        ret.fatherId = pRes.value(pRes.indexOf("father_id")).toInt();
        ret.motherId = pRes.value(pRes.indexOf("mother_id")).toInt();
        ret.flatNo = pRes.value(pRes.indexOf("flat_no")).toString();
        ret.blockNo = pRes.value(pRes.indexOf("block_no")).toString();
        ret.buildingNo = pRes.value(pRes.indexOf("building_no")).toString();
        ret.entranceNo = pRes.value(pRes.indexOf("entrance_no")).toString();
        ret.neighbourhoodNo = pRes.value(pRes.indexOf("neighbourhood_no")).toString();
        ret.resiedenceType = pRes.value(pRes.indexOf("resiedence_type")).toString();
        ret.note = pRes.value(pRes.indexOf("note")).toString();
        ret.addedChildrenList = getChildrenList(family_id);
        ret.addedResidentList = getResidentList(family_id);
    }
    else
    {
        qDebug() << "error while family data get" <<query.lastError() << endl;
    }

    m_pDB->close();

    return ret;
}

bool Family::append(tFamily *pF)
{
    bool ret = false;

    int existed_family_id = getFamilyId(pF->fatherId,pF->motherId);

    if(existed_family_id == -1 ||
            existed_family_id == 0)
    {
        m_pDB->open();
        QSqlQuery query;

        query.prepare("INSERT into family (father_id,mother_id,children_no,note,flat_no,building_no,entrance_no,block_no,neighbourhood_no,resiedence_type) "
                      "values (:father_id,:mother_id,:children_no,'"+pF->note+"','"+pF->flatNo+"','"+pF->buildingNo+"','"+pF->entranceNo+"','"+pF->blockNo+"','"+pF->neighbourhoodNo+"','"+pF->resiedenceType+"')");
        query.bindValue(":father_id",pF->fatherId);
        query.bindValue(":mother_id",pF->motherId);
        query.bindValue(":children_no",pF->addedChildrenList.size());

        if(query.exec())
        {
            ret = true;

            int family_id = getFamilyId(pF->fatherId,pF->motherId);

            if(family_id != -1)
            {
                if(pF->addedChildrenList.size() > 0)
                {
                   ret = addChildrenList(pF->addedChildrenList,family_id);
                }

                if(pF->addedResidentList.size() > 0)
                {
                   ret = addResidentsList(pF->addedResidentList,family_id);
                }

                ret = appendParents(pF->fatherId,pF->motherId,family_id);
            }
        }
        else
        {
            qDebug() << "error while adding family" <<query.lastError() << endl;
        }

        m_pDB->close();
    }

    return ret;
}

bool Family::remove(int fam_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    qDebug() << "family id:" << fam_id;

    query.prepare("DELETE FROM family where family_id = :id");
    query.bindValue(":id", fam_id);

    if(query.exec())
    {
        ret = true;

        removeAllChildren(fam_id);

        removeAllResidents(fam_id);

        removeAllVisits(fam_id);

        removeParents(fam_id);
    }
    else
    {
       qDebug() << "error while deleting family" <<query.lastError() << endl;
    }

    m_pDB->close();
    return ret;
}

bool Family::removeOneChild(int child_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM family_children where child_id = :id");
    query.bindValue(":id", child_id);

    if(query.exec())
    {
        ret = true;
    }
    else
    {
        qDebug() << "error while deleting child" <<query.lastError() << endl;
    }

    m_pDB->close();
    return ret;
}

bool Family::removeOneResident(int resident_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM family_resident where resident_id = :id");
    query.bindValue(":id", resident_id);

    if(query.exec())
    {
        ret = true;
    }
    else
    {
        qDebug() << "error while deleting child" <<query.lastError() << endl;
    }

    m_pDB->close();
    return ret;
}

bool Family::update(tFamily *pF)
{
    bool ret = true;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("UPDATE family SET "
                  "note = (:note),"
                  "mother_id = (:mi),"
                  "children_no = (:cno),"
                  "father_id = (:fi),"
                  "flat_no = (:flno),"
                  "building_no = (:buno),"
                  "entrance_no = (:enno),"
                  "block_no = (:blno),"
                  "neighbourhood_no = (:neno),"
                  "resiedence_type = (:rety) "
                  "WHERE family_id = (:id)");

    query.bindValue(":fi",pF->fatherId);
    query.bindValue(":mi",pF->motherId);
    query.bindValue(":cno",pF->addedChildrenList.size());
    query.bindValue(":note",pF->note);
    query.bindValue(":flno",pF->flatNo);
    query.bindValue(":buno",pF->buildingNo);
    query.bindValue(":enno",pF->entranceNo);
    query.bindValue(":blno",pF->blockNo);
    query.bindValue(":neno",pF->neighbourhoodNo);
    query.bindValue(":rety",pF->resiedenceType);
    query.bindValue(":id",pF->id);

    if(!query.exec())
    {
        ret = false;
        qDebug() << "error while updating family" <<query.lastError() << endl;
    }
    else
    {
        if(pF->addedChildrenList.size() > 0)
        {
           ret = addChildrenList(pF->addedChildrenList,pF->id);
           qDebug() << "Child list len" << pF->addedChildrenList.length();
        }

        if(pF->addedResidentList.size() > 0)
        {
           ret = addResidentsList(pF->addedResidentList,pF->id);
           qDebug() << "Res list len" << pF->addedResidentList.length();
        }
    }

    m_pDB->close();

    return ret;
}

QSqlRelationalTableModel *Family::getFamiliesByZoneIntoModel(QString neigbourhood,QString blockNo)
{
    QSqlRelationalTableModel *pModel = new QSqlRelationalTableModel;

    pModel->setTable("family");

    pModel->setRelation(1, QSqlRelation("person", "person_id", "name"));
    pModel->setRelation(2, QSqlRelation("person", "person_id", "name"));

    pModel->setHeaderData(1, Qt::Horizontal, QObject::tr("اسم الاب"));
    pModel->setHeaderData(2, Qt::Horizontal, QObject::tr("اسم الام"));
    pModel->setHeaderData(5, Qt::Horizontal, QObject::tr("شقه رقم"));
    pModel->setHeaderData(6, Qt::Horizontal, QObject::tr("عماره رقم"));
    pModel->setHeaderData(7, Qt::Horizontal, QObject::tr("قطعه رقم"));

    if(blockNo == "" && neigbourhood == "")
    {
        pModel->setFilter("");
    }
    else if(neigbourhood == "")
    {
        pModel->setFilter("block_no == " + blockNo);
    }
    else if(blockNo == "")
    {
        pModel->setFilter("neighbourhood_no == " + neigbourhood);
    }
    else
    {
        pModel->setFilter("neighbourhood_no == " + neigbourhood + " AND block_no == " + blockNo);
    }

    pModel->select();

    return pModel;
}

bool Family::isChild(int person_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * from family_children where child_id = :fId");
    query.bindValue(":fId",person_id);

    if(query.exec())
    {
        ret = query.next();
    }
    else
    {
        qDebug() << "error while family data get" <<query.lastError() << endl;
    }

    m_pDB->close();

    return ret;
}

bool Family::isResident(int resident_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * from family_resident where resident_id = :fId");
    query.bindValue(":fId",resident_id);

    if(query.exec())
    {
        ret = query.next();
    }
    else
    {
        qDebug() << "error while family data get" <<query.lastError() << endl;
    }

    m_pDB->close();

    return ret;
}

bool Family::isParent(int parent_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("SELECT * FROM family_parents WHERE father_id = (:fId) OR mother_id = (:mId)");
    query.bindValue(":fId",parent_id);
    query.bindValue(":mId",parent_id);

    if(query.exec())
    {
        if(query.next() == true)
        {
            ret = true;
        }
    }
    else
    {
        qDebug() << "error while family data get" <<query.lastError() << endl;
    }

    m_pDB->close();

    return ret;
}

bool Family::appendParents(int father_id,int mother_id,int family_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("INSERT into family_parents(father_id,mother_id,family_id) "
                  "values (:father_id,:mother_id,:family_id)");

    query.bindValue(":father_id",father_id);
    query.bindValue(":mother_id",mother_id);
    query.bindValue(":family_id",family_id);

    if(query.exec())
    {
       ret = true;
    }
    else
    {
       qDebug() << "error while adding residents" <<query.lastError() << endl;
       ret = false;
    }

    m_pDB->close();
    return ret;
}

bool Family::removeParents(int family_id)
{
    bool ret = false;
    m_pDB->open();
    QSqlQuery query;

    query.prepare("DELETE FROM family_parents WHERE family_id = (:id)");
    query.bindValue(":id",family_id);

    if(query.exec())
    {
       ret = true;
       qDebug() << "delete parents done" << endl;
    }
    else
    {
       qDebug() << "error while deleting all residents" <<query.lastError() << endl;
       ret = false;
    }

    m_pDB->close();
    return ret;
}

