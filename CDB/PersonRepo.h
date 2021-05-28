#ifndef PERSONMODEL_H
#define PERSONMODEL_H

#include <QtSql>
#include <string.h>

/*person data class model*/
struct PersonModel{
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
    bool operator==(const PersonModel& other)
    {
        return name == other.name ? true : false;
    }
};

/*Provide storage operations for person data class*/
class PersonRepo
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

    bool append(const struct PersonModel* pP);
    void getNamesAlikesIntoModel(QSqlQueryModel* pModel,QString name);
    bool get(PersonModel* pPerson,unsigned int id);
    bool remove(unsigned int id);
    QList<PersonModel> getAll(tGender g);
    QList<PersonModel> getAll(tJob j);
    QList<PersonModel> getAll(void);
    bool update(PersonModel *pP);
    static PersonRepo *getInstance(void);
private:
    PersonRepo();
    static QSqlDatabase* pDB;
    static PersonRepo *m_pPerson;
};

#endif // PERSONMODEL_H
