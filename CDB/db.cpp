#include "db.h"
#include "DbInfo.h"
#include <QDebug>

QSqlDatabase *db::m_pDb = 0;

db::db()
{

}

QSqlDatabase *db::getInstance(void)
{
    if(m_pDb == 0)
    {
        m_pDb = new QSqlDatabase;

        if(m_pDb != 0)
        {
            *m_pDb = QSqlDatabase::addDatabase(DB_TYPE);

            m_pDb->setDatabaseName(DB_PATH);
        }
    }

    return m_pDb;
}
