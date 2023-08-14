#include "mainwindow.h"
#include "clogdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //先加载log
    CLogDialog logDialog;
    logDialog.show();

    MainWindow w;
    QIcon icon(":/ICON/log.png");
    w.setWindowIcon(icon);
    w.setWindowTitle("JY CameraGrabber");
    w.show();
    return a.exec();
}
