#ifndef DBINFO_H
#define DBINFO_H

#include <QStandardPaths>

#define DB_TYPE         "QSQLITE"
#define DB_PATH         (QStandardPaths::writableLocation(QStandardPaths::HomeLocation) + "/ChurchDb/db.sqlite")

#endif // DBINFO_H
