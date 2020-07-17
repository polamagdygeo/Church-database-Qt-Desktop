#ifndef PERSONMODEL_H
#define PERSONMODEL_H

#include <QtSql>
#include <string.h>

struct tPerson{
    int id;
    QString name;
    QString birthPlace;
    QString mobNo;
    QString natId;
    QString birthDate;
    QString education;
    QString gender;
    QString jobTitle;
    QString company;
    bool operator==(const tPerson& other)
    {
        return name == other.name ? true : false;
    }
};

class Person
{
public:
    typedef enum{
        GENDER_MALE,
        GENDER_FEMALE
    }tGender;
    typedef enum{
        JOB_PRIEST,
        JOB_NON_PRIEST
    }tJob;

    bool append(const tPerson* pP);
    void getNamesAlikesIntoModel(QSqlQueryModel* pModel,QString name);
    bool get(tPerson* pPerson,unsigned int id);
    bool remove(unsigned int id);
    QList<tPerson> getAll(tGender g);
    QList<tPerson> getAll(tJob j);
    QList<tPerson> getAll(void);
    bool update(tPerson *pP);
    static Person *getInstance(void);
private:
    Person();
    static QSqlDatabase* pDB;
    static Person *pPerson;
};

#endif // PERSONMODEL_H
