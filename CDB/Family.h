#ifndef FAMILYMODEL_H
#define FAMILYMODEL_H

#include <QtSql>
#include <QDebug>
#include <list>

typedef struct{
    int fatherId;
    int motherId;
    QList<int> addedChildrenList;
    QList<QPair<int,QString>> addedResidentList;
    QString note;
    QString flatNo;
    QString buildingNo;
    QString entranceNo;
    QString blockNo;
    QString neighbourhoodNo;
    QString resiedenceType;
    int id;
}tFamily;

class Family
{
public:
    bool append(tFamily *pF);
    int getFamilyId(int father_id,int mother_id);
    bool addChildrenList(QList<int> children_list,int family_id);
    bool addResidentsList(QList<QPair<int,QString>> resident_list,int family_id);
    int getFamilyId(int person_id);
    bool removeOneResident(int resident_id);
    tFamily get(int family_id);
    QList<int> getChildrenList(int family_id);
    QList<QPair<int,QString>> getResidentList(int family_id);
    bool remove(int family_id);
    bool removeOneChild(int child_id);
    static Family *getInstance(void);
    bool update(tFamily *pF);
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
    Family();
    static QSqlDatabase* m_pDB;
    static Family *m_pFamily;
};

#endif // FAMILYMODEL_H
