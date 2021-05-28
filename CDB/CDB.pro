QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AddFamilyView.cpp \
    AddPersonView.cpp \
    AddVisitView.cpp \
    EditFamilyView.cpp \
    FamilyInfoView.cpp \
    FamilyOpAbstractView.cpp \
    FamilyRepo.cpp \
    PersonInfoView.cpp \
    PersonRepo.cpp \
    VisitsInfoView.cpp \
    VisitsRepo.cpp \
    db.cpp \
    editpersonview.cpp \
    main.cpp \
    MainWindowView.cpp

HEADERS += \
    AddFamilyView.h \
    AddPersonView.h \
    AddVisitView.h \
    DbInfo.h \
    EditFamilyView.h \
    FamilyInfoView.h \
    FamilyOpAbstractView.h \
    FamilyRepo.h \
    MainWindowView.h \
    PersonInfoView.h \
    PersonRepo.h \
    VisitsInfoView.h \
    VisitsRepo.h \
    db.h \
    editpersonview.h

FORMS += \
    AddFamilyView.ui \
    AddPersonView.ui \
    AddVisitView.ui \
    EditFamilyView.ui \
    FamilyInfoView.ui \
    MainWindowView.ui \
    PersonInfoView.ui \
    VisitsInfoView.ui \
    editpersonview.ui

TRANSLATIONS += \
    CDB_ar_EG.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    CDB.pro.user
