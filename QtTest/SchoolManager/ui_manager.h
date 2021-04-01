#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QObject>

namespace ui {
	class SchoolManagerWnd;
	class UIManager : public QObject
	{
		Q_OBJECT

	private:
		UIManager(QObject *parent = nullptr);
		~UIManager();

	public:
		static UIManager& Instance();
		bool Init();
		int MessageLoop(const QApplication& a);
		void ShowMainWnd(bool show = true);
	private:
		SchoolManagerWnd* main_wnd_;
	};
}

typedef ui::UIManager theUIManager;

#endif // UI_MANAGER_H
