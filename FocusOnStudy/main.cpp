#include "FocusOnStudy.h"
#include "StudyLogin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CStudyLogin cstudyLogin;
	CFocusOnStudy cf;
	//cf.show();
	cstudyLogin.show();
	return a.exec();
}
