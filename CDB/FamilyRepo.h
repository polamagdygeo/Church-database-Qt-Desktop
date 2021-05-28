#ifndef FAMILYMODEL_H
#define FAMILYMODEL_H

#include <QtSql>
#include <QDebug>
#include <list>

struct FamilyModel{
    int id;
    int fatherId;
    int motherId;
    QList<int> childrenList;
    QList<QPair<int,QString>> residentsList;
    QString note;
    QString flatNo;
    QString buildingNo;
    QString entranceNo;
    QString blockNo;
    QString neighbourhoodNo;
    QString resiedenceType;
};

/*Provide storage operations for family model*/
class FamilyRepo
{
public:
    bool append(FamilyModel *pF);
    int getFamilyId(int father_id,int mother_id);
    bool addChildrenList(QList<int> children_list,int family_id);
    bool addResidentsList(QList<QPair<int,QString>> resident_list,int family_id);
    int getFamilyId(int person_id);
    bool removeOneResident(int resident_id);
    FamilyModel get(int family_id);
    QList<int> getChildrenList(int family_id);
    QList<QPair<int,QString>> getResidentList(int family_id);
    bool remove(int family_id);
    bool removeOneChild(int child_id);
    static FamilyRepo *getInstance(void);
    bool update(FamilyModel *pF);
    QSqlRelationalTableModel *getFamiliesByZoneIntoModel(QString neigbourhood,QString blockNo);
    bool removeAllResidents(int family_id);
    bool removeAllChildren(int family_id);
    bool removeAllVisits(int fam_id);
    bool isChild(int child_id);
    bool isResident(int resident_id);
    bool isParent(int parent_id);
    bool appendParents(int father_id,int mother_id,int family_id);
    bool removeParents(int family_id);
private:
    FamilyRepo();
    static QSqlDatabase* m_pDB;
    static FamilyRepo *m_pFamily;
};

#endif // FAMILYMODEL_H
