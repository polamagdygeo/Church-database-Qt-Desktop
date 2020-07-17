#ifndef DB_H
#define DB_H

#include "qsqldatabase.h"

class db
{
public:
    static QSqlDatabase *getInstance(void);
private:
    db();
    static QSqlDatabase *m_pDb;
};

#endif // DB_H
