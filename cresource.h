#ifndef CRESOURCE_H
#define CRESOURCE_H

#include <QWidget>
#include <QVector>
//#include "Common.h"

namespace Ui {
class CResource;
}

class CResource : public QWidget
{
    Q_OBJECT

public:
    explicit CResource(QWidget *parent = nullptr);
    ~CResource();

private slots:
    void on_pushB_Auto_Dect_clicked();

    void on_pushB_Change_File_clicked();

    void on_comboB_Interface_activated(int index);

private:
    Ui::CResource *ui;

    //接口的所有种类vector
    QVector<QString> interface;

    //当前的接口种类
    QString currentMode;

    //初始化所有接口协议
    void InitInterFaceUI();

    //获取接口协议
    void getInterFace(QVector<QString> &interface);

public:
    //获取接口协议，供外部使用
    QString getInterFace();

signals:
    //协议改变参数
    void sigModeChange(QString mode);

};

#endif // CRESOURCE_H
