#ifndef FAMILYOPABSTRACTVIEW_H
#define FAMILYOPABSTRACTVIEW_H

#include "FamilyRepo.h"
#include "PersonRepo.h"

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

    FamilyRepo* m_pFamilyRepo;
    PersonRepo* m_pPersonRepo;
    QList<QPair<PersonModel,bool>> m_persons;
    FamilyModel m_family;
    PersonModel m_father;
    PersonModel m_mother;
    QList<PersonModel> m_possibleChildList;
    QList<PersonModel> m_possibleResidentList;
    QList<PersonModel> m_addedChildList;
    QList<QPair<PersonModel,QString>> m_addedResidentList;


};

#endif // FAMILYOPABSTRACTVIEW_H
