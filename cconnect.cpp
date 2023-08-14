#include "cconnect.h"
#include "ui_cconnect.h"
#include <QDebug>
#include <QLabel>

//#include "cqcameradll.h"


CConnect::CConnect(QString mode, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CConnect)
{
    ui->setupUi(this);

    //获取当前协议种类
    nMode = mode;
    ui->lineEdit->setText(nMode);
    ui->lineEdit ->setEnabled(false); //设置为不可编辑
    IsConnect = false; //相机未连接
    CamIndex = 0; //默认选中相机0
    isCon = false;  //默认没有实时采集

    //this->connect(mThread, SIGNAL(getImage()), this, SLOT(slotGetImage()));
    InitCam();

}

CConnect::~CConnect()
{
    factory.mCamera->CameraUninit();
    delete ui;
}

//添加设备到下拉框
void CConnect::InsetDevice(QVector<QString> &dev)
{
    ui->combDevice->clear();

    for(QVector<QString>::Iterator it = dev.begin(); it != dev.end(); it++)
    {
        ui->combDevice->addItem(*it);
    }
}


void CConnect::slotChangeMode(QString mode)
{
    if(nMode == mode)
    {
        return;
    }

    nMode = mode;

    ui->lineEdit->setText(nMode);

    InitCam();
}

//接受线程的信号槽，发送信号采集一次
void CConnect::slotGetImage(QPixmap pixmap)
{
    //如果点击了实时，就进行显示
    if(isCon)
    {
        CViewMap::GetInstance()->refrashImage(pixmap);
    }
}


//采集按钮槽
void CConnect::on_pushB_Grab_clicked()
{
    factory.mCamera->CameraPlay(CamIndex);

    QPixmap pixmap;

    factory.mCamera->CameraGetBuffer(pixmap);

    CViewMap::GetInstance()->refrashImage(pixmap);

    //pixmap.save("./testSave.png");
}


//连接断开按钮槽
void CConnect::on_pushB_Init_clicked()
{
    if(!IsConnect)
    {
        factory.GetCameraInstance(1);

        CamIndex = ui->combDevice->currentIndex();

        int ret = factory.mCamera->CameraInit(CamIndex);

        if(0 == ret   && 0 == factory.mCamera->CameraPlay(CamIndex))
        {
            ui->pushB_Init->setText("断开");

            IsConnect = true;

            emit sigControlParam(true);

            factory.mCamera->GetParam(param);
            emit sigCamParam(param);
        }
        else
        {
            qDebug() << "连接错误error_code=" << ret;
        }
    }
    else
    {
        factory.mCamera->CameraStop(CamIndex);
        factory.mCamera->CameraUninit();
        ui->pushB_Init->setText("连接");
        IsConnect = false;

        emit sigControlParam(false);
/*
        //如果线程处于运行或者暂停的状态就停止线程
        if(mThread->state() == 1 || mThread->state() == 2)
        {
            mThread->stop();
        }*/
    }
}


//实时按钮槽
void CConnect::on_pushB_Con_clicked()
{

    if(!isCon)
    {
        factory.mCamera->CameraPlay(CamIndex);
        //绑定回调
        factory.mCamera->CameraBindCallback(true);

        ui->pushB_Con->setText("停止");
        isCon = true;
    }
    else
    {
        factory.mCamera->CameraPause(CamIndex);

        //解除回调绑定
        factory.mCamera->CameraBindCallback(false);
        ui->pushB_Con->setText("实时");
        isCon = false;
    }
}


//设置相机参数的槽  lineEdit
void CConnect::slotSetParam(QVector<paramCont> param, int index, QString value)
{
    int temp = value.toInt();
    if(param[index].apiName == grabTimeOut)
    {
     //如果使用的是回调的话就没有超时时间这一说
    }
    else if(param[index].apiName == exposureTime)
    {
        factory.mCamera->CameraSetExposureTime(temp);
    }
    else if(param[index].apiName == contrast)
    {
        factory.mCamera->CameraSetContrast(temp);
    }
    else if(param[index].apiName == gamma)
    {
        factory.mCamera->CameraSetGamma(temp);
    }
    else if(param[index].apiName == exposureMode)
    {
        factory.mCamera->CameraSetExposureMode(temp);
    }
    else if(param[index].apiName == autoExposureTarget)
    {
        factory.mCamera->CameraSetAutoExposureTarget(temp);
    }
    else if(param[index].apiName == frameSpeed)
    {
        factory.mCamera->CameraSetGamma(temp);
    }
    else if(param[index].apiName == sharpness)
    {
        factory.mCamera->CameraSetSharpness(temp);
    }
    else if(param[index].apiName == resolutionIndex)
    {
         factory.mCamera->CameraSetResolutionIndex(temp);
    }
    else if(param[index].apiName == resolutionMod)
    {

    }
    else if(param[index].apiName == offsetX)
    {

    }


}


//设置相机参数combox
void CConnect::slotSetParamCom(QVector<paramCont> param, int index, QString value)
{
    if(param[index].apiName == hMirror)
    {
        if(value == "disable")
        {
            factory.mCamera->CameraSetHMirror(false);
        }
        else
        {
            factory.mCamera->CameraSetHMirror(true);
        }
    }

    else if(param[index].apiName == vMirror)
    {
        //factory.mCamera->
    }
    else if(param[index].apiName == noise2d)
    {
       // factory.mCamera->
    }
    else if(param[index].apiName == noise3D)
    {
        //factory.mCamera->
    }
    else if(param[index].apiName == rotate)
    {
       // factory.mCamera->
    }
    else if(param[index].apiName == mono)
    {
        //factory.mCamera->
    }
    else if(param[index].apiName == inverse)
    {
        //factory.mCamera->
    }
}


void CConnect::InitCam()
{
    //创建对应单例
    int type = -1;
    if(nMode == "qCameraInfo")
    {
        type = 0;
    }
    else if(nMode == "MindVision")
    {
        type = 1;
    }

    factory.GetCameraInstance(type);

    //绑定对应相机库的槽
    switch(type)
    {
        case 0:break;
        case 1:
        {
            this->connect(factory.mCamera, SIGNAL(sigMDVSMap(QPixmap)), this,SLOT(slotGetImage(QPixmap)));
            break;
        }
        default:break;
    }


    //枚举相机
    int status = factory.mCamera->CameraEnumDevice(enumDevice);
    if(-1 == status)
    {
        ui->combDevice->clear();
        qDebug() << "没有找到设备";
    }
    else
    {
        qDebug() << "找到了"  << status << "台设备" ;
        InsetDevice(enumDevice);
    }
}
