#include <QtWidgets/QApplication>
#include "school_manager.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	int ret = 0;
	if (SchoolManager::Instance().Init())
		ret = SchoolManager::Instance().Run(a);
	SchoolManager::Instance().Uninit();
	return ret;
}
