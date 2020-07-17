#ifndef VISITSMODEL_H
#define VISITSMODEL_H

#include <QtSql>

typedef struct{
    int visitId;
    int familyId;
    int priestId;
    QString date;
}tVisit;

class Visits
{
public:
    bool append(tVisit& visit);
    bool getForFamily(int family_id,QList<tVisit> &visits_list);
    static Visits *getInstance(void);
    bool remove(unsigned int id);

private:
    Visits();
    static QSqlDatabase* m_pDB;
    static Visits *m_pVisits;
};

#endif // VISITSMODEL_H
