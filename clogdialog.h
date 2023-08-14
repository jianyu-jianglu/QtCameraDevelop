/***
 * time:2023.4.28
 * author:jianyu
 * function:打开软件进行加载的log
 * **/

#ifndef CLOGDIALOG_H
#define CLOGDIALOG_H

#include <QDialog>

namespace Ui {
class CLogDialog;
}

class CLogDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CLogDialog(QWidget *parent = nullptr);
    ~CLogDialog();

private:
    Ui::CLogDialog *ui;


private slots:
    void slotOnTimeupDestroy();

};

#endif // CLOGDIALOG_H
