#include "ui_manager.h"
#include <QApplication>
#include "school_manager_wnd.h"

namespace ui{
	UIManager::UIManager(QObject *parent)
		: QObject(parent)
		, main_wnd_(nullptr)
	{

	}

	UIManager::~UIManager()
	{

	}

	UIManager& UIManager::Instance()
	{
		static UIManager ui_manager;
		return ui_manager;
	}

	bool UIManager::Init()
	{
		main_wnd_ = new SchoolManagerWnd();
		return true;
	}

	int UIManager::MessageLoop(const QApplication& a)
	{
		return a.exec();
	}

	void UIManager::ShowMainWnd(bool show/* = true*/)
	{
		main_wnd_->setVisible(show);
	}
}
