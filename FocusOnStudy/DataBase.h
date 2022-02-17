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
	//���ݿ�ɾ����Ϣ
	void deleteValues(const QString &strValues);
	//���ݿ��滻��Ϣ
	void replaceValues(const struSqliteData &struSqlInfo);

	struSqliteData selectUserInformation(const QString &strUsername);

public:
	QSqlDatabase db;//��һ�����ݿ�
};

