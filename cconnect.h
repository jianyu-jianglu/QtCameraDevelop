/***
 * last time:2023.5.9
 * author: jianyu
 * function:负责整个项目中相机的连接和界面
 * **/
#ifndef CCONNECT_H
#define CCONNECT_H

#include <QWidget>
#include "cfactory.h"
#include "cviewmap.h"
//#include "cthread.h"
#include "cgrabthread.h"

namespace Ui {
class CConnect;
}

class CConnect : public QWidget
{
    Q_OBJECT

public:
    explicit CConnect(QString mode, QWidget *parent = nullptr);
    ~CConnect();

private:
    Ui::CConnect *ui;

    //接口类型
    QString nMode;

    //所有枚举设备
    QVector<QString> enumDevice;

    //创建工厂对象
    CFactory factory;

    //相机是否已连接标志位
    bool IsConnect;

    //相机是否实时采集
    bool isCon;

    //当前相机序列
    int CamIndex;

    //获取相机参数
    QVector<paramCont> param;

    //把对应驱动接口的相机设备加入comb
    void InsetDevice(QVector<QString> &dev);

    //线程对象创建
    //CGrabThread *mThread;

    //重新初始化相机
    void InitCam();



public slots:
    //接口协议改变槽
    void slotChangeMode(QString mode);

    void slotGetImage(QPixmap pixmap);

private slots:
    void on_pushB_Grab_clicked();
    void on_pushB_Init_clicked();
    void on_pushB_Con_clicked();

    //设置相机参数editline
    void slotSetParam(QVector<paramCont> param, int index, QString value);

    //设置相机参数combox
    void slotSetParamCom(QVector<paramCont>param, int index, QString value);

signals:
    //控制参数界面是否禁用信号
    void sigControlParam(bool isBan);

    //发送参数到显示界面的信号
    void sigCamParam(QVector<paramCont> param);
};

#endif // CCONNECT_H
