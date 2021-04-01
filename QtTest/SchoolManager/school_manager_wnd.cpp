#include "school_manager_wnd.h"

namespace ui {
	SchoolManagerWnd::SchoolManagerWnd(QWidget *parent)
		: QMainWindow(parent)
	{
		ui.setupUi(this);

		Init();
	}

	SchoolManagerWnd::~SchoolManagerWnd()
	{

	}

	void SchoolManagerWnd::Init()
	{
		setWindowTitle(QString::fromStdWString(L"学校管理系统"));
	}
}
