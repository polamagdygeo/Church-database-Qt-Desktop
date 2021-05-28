#include "FamilyOpAbstractView.h"
#include "ui_AddFamilyView.h"

FamilyOpAbstractView::FamilyOpAbstractView()
{

}


void FamilyOpAbstractView::updatePossibleChildrenList(QComboBox *possible_children_combobox)
{
    m_possibleChildList.clear();
    possible_children_combobox->clear();

    for(auto person : m_persons)
    {
        if(person.second == false &&
                m_pFamilyRepo->isChild(person.first.id) == false &&
                isPossibleFather(m_father.name,person.first.name))
        {
           possible_children_combobox->addItem(person.first.name);

           m_possibleChildList.append(person.first);
        }
    }
}

void FamilyOpAbstractView::updatePossibleResidentList(QComboBox *possible_resident_combobox)
{
    m_possibleResidentList.clear();
    possible_resident_combobox->clear();

    for(auto person : m_persons)
    {
        if(person.second == false &&
                m_pFamilyRepo->isResident(person.first.id) == false &&
                !isPossibleFather(m_father.name,person.first.name) &&
                person.first.id != m_father.id &&
                person.first.id != m_mother.id &&
                m_pFamilyRepo->isParent(person.first.id) == false)
        {
           possible_resident_combobox->addItem(person.first.name);

           m_possibleResidentList.append(person.first);
        }
    }
}

void FamilyOpAbstractView::updateAddedChildrenList(QComboBox *added_children_combobox)
{
    added_children_combobox->clear();

    for(auto child : m_addedChildList)
    {
        added_children_combobox->addItem(child.name);
    }
}

void FamilyOpAbstractView::updateAddedResidentList(QComboBox *added_resident_combobox)
{
    added_resident_combobox->clear();

    for(auto resident : m_addedResidentList)
    {
        added_resident_combobox->addItem(resident.first.name);
    }
}


void FamilyOpAbstractView::getAllPersons()
{
    QList<PersonModel> person_list = m_pPersonRepo->getAll();

    m_persons.clear();

    int i = 0;
    for(auto person : person_list)
    {
        QPair<PersonModel,bool> temp;

        temp.first = person;
        temp.second = false;

        m_persons.append(temp);

        i++;
    }
}

bool FamilyOpAbstractView::isPossibleFather(QString& father_name,QString& child_name)
{
    bool ret = false;

    QStringList separated_father_name = father_name.split(' ');
    QStringList separated_child_name = child_name.split(' ');

    qDebug() << "size" << separated_father_name.size();

    if(separated_child_name.length() >= 3)
    {
        if(separated_child_name[1] == separated_father_name[0] &&
                separated_child_name[2] == separated_father_name[1])
        {
            ret = true;
        }
    }

    return ret;
}

void FamilyOpAbstractView::addChildPressedHandler(QComboBox *toAddedChild,
                                                  QComboBox *toDeleteChild,
                                                  QComboBox *toAddedResident,
                                                  QComboBox *toDeleteResident)
{
    int child_idx = toAddedChild->currentIndex();

    if(toAddedChild->count() > 0 &&
            m_possibleChildList[child_idx].name == toAddedChild->currentText())
    {
        if(child_idx < m_possibleChildList.size() &&
                child_idx >= 0)
        {
            m_addedChildList.append(m_possibleChildList[child_idx]);

            for(auto& person : m_persons)
            {
                if(person.first.id == m_possibleChildList[child_idx].id)
                {
                    person.second = true;
                }
            }

            updatePossibleChildrenList(toAddedChild);
            updatePossibleResidentList(toAddedResident);
            updateAddedChildrenList(toDeleteChild);
            updateAddedResidentList(toDeleteResident);
        }
    }
}

void FamilyOpAbstractView::deleteChildPressedHandler(QComboBox *toAddedChild,
                                                     QComboBox *toDeleteChild,
                                                     QComboBox *toAddedResident,
                                                     QComboBox *toDeleteResident)
{
    int child_idx = toDeleteChild->currentIndex();

    if(toDeleteChild->count() > 0 &&
            m_addedChildList[child_idx].name == toDeleteChild->currentText())
    {
        if(child_idx < m_addedChildList.size() &&
                child_idx >= 0)
        {
            for(auto& person : m_persons)
            {
                if(person.first.id == m_addedChildList[child_idx].id)
                {
                    person.second = false;
                }
            }
            m_addedChildList.removeAt(child_idx);

            updatePossibleChildrenList(toAddedChild);
            updatePossibleResidentList(toAddedResident);
            updateAddedChildrenList(toDeleteChild);
            updateAddedResidentList(toDeleteResident);
        }
    }
}

void FamilyOpAbstractView::addResidentPressedHandler(QComboBox *toAddedChild,
                                                     QComboBox *toDeleteChild,
                                                     QComboBox *toAddedResident,
                                                     QComboBox *toDeleteResident,
                                                     QLineEdit *residentRelation)
{
    int resident_idx = toAddedResident->currentIndex();

    if(toAddedResident->count() > 0 &&
            m_possibleResidentList[resident_idx].name == toAddedResident->currentText())
    {
        QString resident_relation = residentRelation->text();

        if(resident_idx < m_possibleResidentList.size() &&
                resident_idx >= 0)
        {
            QPair<PersonModel,QString> temp_added_resident;

            temp_added_resident.first = m_possibleResidentList[resident_idx];
            temp_added_resident.second = resident_relation;

            m_addedResidentList.append(temp_added_resident);

            for(auto& person : m_persons)
            {
                if(person.first.id == m_possibleResidentList[resident_idx].id)
                {
                    person.second = true;
                }
            }

            updatePossibleChildrenList(toAddedChild);
            updatePossibleResidentList(toAddedResident);
            updateAddedChildrenList(toDeleteChild);
            updateAddedResidentList(toDeleteResident);

            residentRelation->clear();
        }
    }
}

void FamilyOpAbstractView::deleteResidentPressedHandler(QComboBox *toAddedChild,
                                                        QComboBox *toDeleteChild,
                                                        QComboBox *toAddedResident,
                                                        QComboBox *toDeleteResident)
{
    int resident_idx = toDeleteResident->currentIndex();

    if(toDeleteResident->count() > 0 &&
            m_addedResidentList[resident_idx].first.name == toDeleteResident->currentText())
    {
        if(resident_idx < m_addedResidentList.size() &&
                resident_idx >= 0)
        {
            for(auto& person : m_persons)
            {
                if(person.first.id == m_addedResidentList[resident_idx].first.id)
                {
                    person.second = false;
                }
            }

            qDebug() << m_addedResidentList.at(resident_idx).first.id;
            m_addedResidentList.removeAt(resident_idx);

            updatePossibleChildrenList(toAddedChild);
            updatePossibleResidentList(toAddedResident);
            updateAddedChildrenList(toDeleteChild);
            updateAddedResidentList(toDeleteResident);
        }
    }
}
