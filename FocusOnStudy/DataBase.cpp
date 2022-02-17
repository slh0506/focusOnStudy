#include "DataBase.h"

CDataBase::CDataBase()
{
}


CDataBase::~CDataBase()
{
}

bool CDataBase::createDBConnection()//建立数据库连接，新建数据库
{
	db = QSqlDatabase::addDatabase("QSQLITE", "user_sqlite");
	db.setDatabaseName("userDB");
	if (!db.open())
	{
		qDebug() << QObject::tr("open failed！\n");
		return false;
	}
	return true;
	db.close();
}

bool CDataBase::createDBTable()//新建数据库表
{
	db.database("user_sqlite");
	if (!db.open())
	{
		qDebug() << QObject::tr("open failed！\n");
		return false;
	}
	else
	{
		qDebug() << QObject::tr("open success！\n");
		QSqlQuery query(db);
		bool b = query.exec("create table user(Username varchar, Password varchar, id INTEGER PRIMARY KEY AUTOINCREMENT)");
		//query.next();
		if (!b)
		{
			qDebug() << QObject::tr("table failed！\n");
			qDebug() << "query error :" << query.lastError();
		}
		else
		{
			qDebug() << QObject::tr("table success！\n");
		} 
		query.finish();	
		db.close();
		return true;
	}	
}

bool CDataBase::insertValues(const struSqliteData &struSqlInfo)//数据库插入信息
{
	db = QSqlDatabase::addDatabase("QSQLITE", "user_sqlite");
	db.setDatabaseName("userDB");
	/*db.database("device_sqlite");*/
	QSqlQuery query(db);
	if (!db.open())
	{
		qDebug() << QObject::tr("open failed！\n");
	}
	else
	{
		qDebug() << QObject::tr("open success！\n");
	}

	query.prepare("INSERT INTO user(Username, Password, id)"
		"VALUES (? ,?, NULL)");
	query.addBindValue(struSqlInfo.Username);
	query.addBindValue(struSqlInfo.Password);
	if (!query.exec())
	{
		qDebug() << "insert data failed!";
		qDebug() << "query error :" << query.lastError();
		return false;
	}
	else
	{
		qDebug() << "insert data success!";
		return true;
	}
	query.finish();
	db.close();
}

void CDataBase::replaceValues(const struSqliteData &struSqlInfo)//数据库替换信息
{
	//db = QSqlDatabase::addDatabase("QSQLITE", "user_sqlite");
	db.setDatabaseName("userDB"); 
	db.database("user_sqlite");
	QSqlQuery query(db);
	
	if (!db.open())
	{
		qDebug() << QObject::tr("open failed！\n");
	}
	else
	{
		qDebug() << QObject::tr("open success！\n");
	}
	QString strModify = QString("update user set Password = '%1' where Username='%2'")
		.arg(struSqlInfo.Password).arg(struSqlInfo.Username);
	query.prepare(strModify);
	if (!query.exec())
	{
		qDebug() << "replace data failed!";
		qDebug() << "query error :" << query.lastError();
	}
	else
	{
		qDebug() << "replace data success!";
	}
	db.close();
}

void CDataBase::deleteValues(const QString &strValues)//删除数据库信息
{
	db = QSqlDatabase::addDatabase("QSQLITE", "user_sqlite");
	db.setDatabaseName("userDB");
	QSqlQuery query(db);
	bool bok = db.open();
	if (!bok)
	{
		qDebug() << "open data failed!";
		qDebug() << "query error :" << query.lastError();
	}
	else
	{
		qDebug() << "open data success!";
	}

	QString strDelete = QString("DELETE FROM user where Username = '%1'").arg(strValues);
	query.exec(strDelete);
	query.finish();
	db.close();
}

CDataBase::struSqliteData CDataBase::selectUserInformation(const QString &strUsername)
{
	//db = QSqlDatabase::addDatabase("QSQLITE", "user_sqlite");
	db.setDatabaseName("userDB");
	db.database("user_sqlite");
	QSqlQuery query(db);
	QString strSelect = QString("SELECT * FROM user where Username = '%1'").arg(strUsername);
	query.exec(strSelect);
	struSqliteData struSQLInfo;
	while (query.next())
	{
		struSQLInfo.Username = query.value(0).toString();
		struSQLInfo.Password = query.value(1).toString();
	}
	query.finish();
	query.clear();
	db.close();
	return struSQLInfo;
}