#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cresource.h"
#include "cconnect.h"
#include "cparam.h"
#include "cdetect.h"
#include "ccodecreat.h"


#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //重写关闭事件
    void closeEvent(QCloseEvent *e);

private:
    Ui::MainWindow *ui;

public slots:
    //是否禁用参数界面槽
    void slotIsBan(bool isBanParam);

};
#endif // MAINWINDOW_H
