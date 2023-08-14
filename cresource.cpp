#include "cresource.h"
#include "ui_cresource.h"
#include <QDebug>

CResource::CResource(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CResource)
{
    ui->setupUi(this);

    InitInterFaceUI();
}


CResource::~CResource()
{
    delete ui;
}


void CResource::InitInterFaceUI()
{
    //获取所有接口
    getInterFace(interface);

    //先让当前的接口协议等于容器第一个协议
    currentMode = interface[0];

    //根据已有的接口添加ui界面协议的种类
    for(QVector<QString>::Iterator it = interface.begin(); it != interface.end(); it++)
    {
        ui->comboB_Interface->addItem(*it);
    }
}


void CResource::getInterFace(QVector<QString> &interface)
{
    //这个地方添加从某处获得的所有接口类型，可以是文件，可以是dll，可以是数据库，也可以是网络
    //这里测试，就先直接给一个QCameraInfo吧
    interface.push_back("qCameraInfo");
    interface.push_back("DirectShow");
    interface.push_back("MindVision");
}

//public 供外部获取接口类型
QString CResource::getInterFace()
{
    return this->currentMode;
}


//自动检测按钮槽
void CResource::on_pushB_Auto_Dect_clicked()
{
    qDebug() << "功能还在测试中-----";
}

void CResource::on_pushB_Change_File_clicked()
{
    qDebug() << "功能还在测试中-----";
}

//更换协议的槽
void CResource::on_comboB_Interface_activated(int index)
{
    currentMode = interface[index];


    //emit 信号通知别的控件协议接口已经更改了
    emit sigModeChange(currentMode);
}

