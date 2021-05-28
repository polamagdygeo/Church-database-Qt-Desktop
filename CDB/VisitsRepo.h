#ifndef VISITSMODEL_H
#define VISITSMODEL_H

#include <QtSql>

struct VisitModel{
    int visitId;
    int familyId;
    int priestId;
    QString date;
};

/*Provide storage operations for visit model*/
class VisitsRepo
{
public:
    bool append(VisitModel& visit);
    bool getForFamily(int family_id,QList<VisitModel> &visits_list);
    static VisitsRepo *getInstance(void);
    bool remove(unsigned int id);

private:
    VisitsRepo();
    static QSqlDatabase* m_pDB;
    static VisitsRepo *m_pVisits;
};

#endif // VISITSMODEL_H
