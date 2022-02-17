#pragma once
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QDebug>

class CDataBase
{
public:
	typedef	struct struSql
	{
		QString Username;
		QString Password;
	}struSqliteData;

public:
	CDataBase();
	~CDataBase();
	bool createDBConnection();
	bool createDBTable();
	bool insertValues(const struSqliteData &struSqlInfo);
	//数据库删除信息
	void deleteValues(const QString &strValues);
	//数据库替换信息
	void replaceValues(const struSqliteData &struSqlInfo);

	struSqliteData selectUserInformation(const QString &strUsername);

public:
	QSqlDatabase db;//类一个数据库
};

