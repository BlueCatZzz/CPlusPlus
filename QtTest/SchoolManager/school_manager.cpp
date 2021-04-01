#include "school_manager.h"
#include <QDebug>
#include <QTextCodec>
#include "ui_manager.h"

SchoolManager::SchoolManager(QObject *parent)
	: QObject(parent)
	, mutex_(NULL)
{

}

SchoolManager::~SchoolManager()
{

}

SchoolManager& SchoolManager::Instance()
{
	static SchoolManager school_manager;
	return school_manager;
}

bool SchoolManager::Init()
{
	mutex_ = ::CreateMutex(NULL, FALSE, L"SchoolManager{55F67732-CDBD-4968-9CD6-4A763691D1BF}");
	if (ERROR_ALREADY_EXISTS == GetLastError()) {
		qWarning() << "Process is exist.";
		return false;
	}

	//±àÂë
	QTextCodec* codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForLocale(codec);

	theUIManager::Instance().Init();
	return true;
}

int SchoolManager::Run(const QApplication& a)
{
	int ret = 0;
	theUIManager::Instance().ShowMainWnd();
	ret = theUIManager::Instance().MessageLoop(a);
	return ret;
}

bool SchoolManager::Uninit()
{
	return true;
}