#ifndef FAMILYOPABSTRACTVIEW_H
#define FAMILYOPABSTRACTVIEW_H

#include "Family.h"
#include "Person.h"

class FamilyOpAbstractView
{
public:
    FamilyOpAbstractView();


protected:
    void updatePossibleChildrenList(QComboBox *possible_children_combobox);
    void updatePossibleResidentList(QComboBox *possible_resident_combobox);
    void updateAddedChildrenList(QComboBox *added_children_combobox);
    void updateAddedResidentList(QComboBox *added_resident_combobox);
    void getAllPersons();
    bool isPossibleFather(QString& father_name,QString& child_name);
    void addChildPressedHandler(QComboBox *toAddedChild,
                                                      QComboBox *toDeleteChild,
                                                      QComboBox *toAddedResident,
                                                      QComboBox *toDeleteResident);
    void deleteChildPressedHandler(QComboBox *toAddedChild,
                                                         QComboBox *toDeleteChild,
                                                         QComboBox *toAddedResident,
                                                         QComboBox *toDeleteResident);
    void addResidentPressedHandler(QComboBox *toAddedChild,
                                                         QComboBox *toDeleteChild,
                                                         QComboBox *toAddedResident,
                                                         QComboBox *toDeleteResident,
                                                         QLineEdit *residentRelation);
    void deleteResidentPressedHandler(QComboBox *toAddedChild,
                                                            QComboBox *toDeleteChild,
                                                            QComboBox *toAddedResident,
                                                            QComboBox *toDeleteResident);

    Family* m_pFamily;
    Person* m_pPerson;
    QList<QPair<tPerson,bool>> m_persons;
    tFamily m_family;
    tPerson m_father;
    tPerson m_mother;
    QList<tPerson> m_possibleChildList;
    QList<tPerson> m_possibleResidentList;
    QList<tPerson> m_addedChildList;
    QList<QPair<tPerson,QString>> m_addedResidentList;


};

#endif // FAMILYOPABSTRACTVIEW_H
