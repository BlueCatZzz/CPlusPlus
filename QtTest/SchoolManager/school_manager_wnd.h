#ifndef SCHOOL_MANAGER_WND_H
#define SCHOOL_MANAGER_WND_H

#include <QtWidgets/QMainWindow>
#include "ui_school_manager_wnd.h"

namespace ui {
	class SchoolManagerWnd : public QMainWindow
	{
		Q_OBJECT

	public:
		SchoolManagerWnd(QWidget *parent = 0);
		~SchoolManagerWnd();

	private:
		void Init();

	private:
		Ui::SchoolManagerWndClass ui;
	};
}

#endif // SCHOOL_MANAGER_WND_H
