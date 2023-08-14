#ifndef CPARAM_H
#define CPARAM_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include "Common.h"
#include "CustomControlHead/CMyButton.h"
#include "CustomControlHead/CMyLineEdit.h"
#include "CustomControlHead/CMyComBox.h"


namespace Ui {
class CParam;
}

class CParam : public QWidget
{
    Q_OBJECT

public:
    explicit CParam(QString mode, QWidget *parent = nullptr);
    ~CParam();

private:
    Ui::CParam *ui;

    //当前的接口
    QString nMode;

    QGridLayout *gridLayout;

    //存放相机参数的数组
    QVector<paramCont> mParam;

public slots:
    //获取相机参数并显示
    void slotCamParam(QVector<paramCont> param);

    //恢复参数默认设置的槽
    void slotPushRecover(int index);

    //lineedit设置相机参数
    void slotSetCamLineEdit(int index, QString str);

    //设置MyComboBox的槽
    void slotActivated(int index, QString str);
 signals:
    void sigSetParam(QVector<paramCont> param, int i, QString value);

    void sigSetParamCom(QVector<paramCont> param, int i, QString value);

};

#endif // CPARAM_H
