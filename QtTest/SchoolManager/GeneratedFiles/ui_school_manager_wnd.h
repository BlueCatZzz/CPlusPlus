/********************************************************************************
** Form generated from reading UI file 'school_manager_wnd.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHOOL_MANAGER_WND_H
#define UI_SCHOOL_MANAGER_WND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SchoolManagerWndClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QTableView *tableView;

    void setupUi(QMainWindow *SchoolManagerWndClass)
    {
        if (SchoolManagerWndClass->objectName().isEmpty())
            SchoolManagerWndClass->setObjectName(QStringLiteral("SchoolManagerWndClass"));
        SchoolManagerWndClass->resize(600, 400);
        centralWidget = new QWidget(SchoolManagerWndClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        horizontalLayout->addWidget(treeView);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        SchoolManagerWndClass->setCentralWidget(centralWidget);

        retranslateUi(SchoolManagerWndClass);

        QMetaObject::connectSlotsByName(SchoolManagerWndClass);
    } // setupUi

    void retranslateUi(QMainWindow *SchoolManagerWndClass)
    {
        SchoolManagerWndClass->setWindowTitle(QApplication::translate("SchoolManagerWndClass", "SchoolManagerWnd", 0));
    } // retranslateUi

};

namespace Ui {
    class SchoolManagerWndClass: public Ui_SchoolManagerWndClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHOOL_MANAGER_WND_H
