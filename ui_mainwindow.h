/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionClose;
    QAction *action1123;
    QAction *action2233;
    QAction *action3233;
    QAction *action123;
    QAction *action123_2;
    QAction *action234;
    QAction *OpenTool;
    QAction *SaveTool;
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_q;
    QMenu *menu_G;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;
    QToolBar *toolBar_5;
    QToolBar *toolBar_6;
    QToolBar *toolBar_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1010, 609);
        MainWindow->setStyleSheet(QString::fromUtf8(".QMainWindow\n"
"{\n"
"background-color: rgb(255, 170, 127);\n"
"}\n"
"\n"
".QMainWindow\n"
"{\n"
"	border:8px solid pink\n"
"}"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ICON/OpenFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        action1123 = new QAction(MainWindow);
        action1123->setObjectName(QString::fromUtf8("action1123"));
        action1123->setMenuRole(QAction::TextHeuristicRole);
        action2233 = new QAction(MainWindow);
        action2233->setObjectName(QString::fromUtf8("action2233"));
        action3233 = new QAction(MainWindow);
        action3233->setObjectName(QString::fromUtf8("action3233"));
        action123 = new QAction(MainWindow);
        action123->setObjectName(QString::fromUtf8("action123"));
        action123_2 = new QAction(MainWindow);
        action123_2->setObjectName(QString::fromUtf8("action123_2"));
        action234 = new QAction(MainWindow);
        action234->setObjectName(QString::fromUtf8("action234"));
        OpenTool = new QAction(MainWindow);
        OpenTool->setObjectName(QString::fromUtf8("OpenTool"));
        OpenTool->setIcon(icon);
        SaveTool = new QAction(MainWindow);
        SaveTool->setObjectName(QString::fromUtf8("SaveTool"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ICON/SaveFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveTool->setIcon(icon1);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ICON/code.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon2);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ICON/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon3);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ICON/grab.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon4);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ICON/continue.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon5);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ICON/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(6, 9, 1000, 520));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1010, 22));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_q = new QMenu(menubar);
        menu_q->setObjectName(QString::fromUtf8("menu_q"));
        menu_G = new QMenu(menubar);
        menu_G->setObjectName(QString::fromUtf8("menu_G"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(MainWindow);
        toolBar_4->setObjectName(QString::fromUtf8("toolBar_4"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_4);
        toolBar_5 = new QToolBar(MainWindow);
        toolBar_5->setObjectName(QString::fromUtf8("toolBar_5"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_5);
        toolBar_6 = new QToolBar(MainWindow);
        toolBar_6->setObjectName(QString::fromUtf8("toolBar_6"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_6);
        toolBar_7 = new QToolBar(MainWindow);
        toolBar_7->setObjectName(QString::fromUtf8("toolBar_7"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_7);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_q->menuAction());
        menubar->addAction(menu_G->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addSeparator();
        menu_F->addAction(actionLoad);
        menu_F->addAction(actionSave);
        menu_F->addAction(actionClose);
        menu_q->addAction(action1123);
        menu_q->addAction(action2233);
        menu_q->addAction(action3233);
        menu_G->addAction(action123);
        menu_H->addAction(action123_2);
        menu_H->addAction(action234);
        toolBar->addAction(OpenTool);
        toolBar_2->addAction(SaveTool);
        toolBar_3->addAction(action);
        toolBar_4->addAction(action_2);
        toolBar_5->addAction(action_3);
        toolBar_6->addAction(action_4);
        toolBar_7->addAction(action_5);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245\346\226\207\344\273\266\350\256\276\347\275\256(&O)", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266(&S)", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\225\214\351\235\242(&C)", nullptr));
        action1123->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        action2233->setText(QCoreApplication::translate("MainWindow", "\351\207\207\351\233\206", nullptr));
        action3233->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200", nullptr));
        action123->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\344\273\243\347\240\201", nullptr));
        action123_2->setText(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        action234->setText(QCoreApplication::translate("MainWindow", "\345\217\202\350\200\203\346\211\213\345\206\214", nullptr));
        OpenTool->setText(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        OpenTool->setToolTip(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245\346\226\207\344\273\266\350\256\276\347\275\256\357\274\210ctrl+L\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        OpenTool->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        SaveTool->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        SaveTool->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266\351\205\215\347\275\256(ctrl+S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        SaveTool->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\344\273\243\347\240\201", nullptr));
#if QT_CONFIG(tooltip)
        action->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\344\273\243\347\240\201(ctrl+I)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        action_2->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        action_2->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245(ctrl+C)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_2->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_3->setText(QCoreApplication::translate("MainWindow", "\351\207\207\351\233\206", nullptr));
#if QT_CONFIG(tooltip)
        action_3->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\207\351\233\206(ctrl+G)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_3->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        action_4->setText(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266", nullptr));
#if QT_CONFIG(tooltip)
        action_4->setToolTip(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266(ctrl+v)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_4->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_5->setText(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
#if QT_CONFIG(tooltip)
        action_5->setToolTip(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(ctrl+H)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_5->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&I)", nullptr));
        menu_q->setTitle(QCoreApplication::translate("MainWindow", "\351\207\207\351\233\206(&q)", nullptr));
        menu_G->setTitle(QCoreApplication::translate("MainWindow", "\344\273\243\347\240\201\347\224\237\346\210\220(&G)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_3", nullptr));
        toolBar_4->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_4", nullptr));
        toolBar_5->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_5", nullptr));
        toolBar_6->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_7", nullptr));
        toolBar_7->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
