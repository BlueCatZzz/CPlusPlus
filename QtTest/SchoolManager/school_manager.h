#ifndef SCHOOL_MANAGER_H
#define SCHOOL_MANAGER_H

#include <QObject>
#include <Windows.h>

class SchoolManager : public QObject
{
	Q_OBJECT

private:
	SchoolManager(QObject *parent = nullptr);
	~SchoolManager();

public:
	static SchoolManager& Instance();
	bool Init();
	int Run(const QApplication& a);
	bool Uninit();
private:
	HANDLE mutex_;
};

#endif // SCHOOL_MANAGER_H
