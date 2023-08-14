#ifndef CMINDVISION_H
#define CMINDVISION_H

#include "ccamera.h"
#include <windows.h>
#include "Include/CameraApi.h"
#include <QPixmap>
#include <QVector>
#include <Common.h>

//lib声明
#ifdef _WIN64
#pragma comment(lib,"lib\\MindVision_X64\\MVCAMSDK_X64.lib")
#else
#pragma comment(lib,"lib\\MindVision_X86\\MVCAMSDK.lib")
#endif


class CMindVision : public CCamera
{
    Q_OBJECT
public:
    //获取唯一实体对象
    static CMindVision* GetInstance();

    //反初始化（一些数据的释放）
    void CameraUninit();

    //功能：枚举相机接口(统一)
    //参数：相机枚举信息
    //返回值：如果枚举没有相机，返回-1 ，有则返回相机数
    int CameraEnumDevice(QVector<QString> &deviceList);

    //初始化相机
    int CameraInit(int cam);

    //开始采集
    int CameraPlay(int cam);

    //暂停采集
    int CameraPause(int cam);

    //停止采集
    int CameraStop(int cam);

    //取图
    int CameraGetBuffer(QPixmap& pic);

    //回调绑定和解绑
    void CameraBindCallback(bool flag);

    //自定义sleep函数
    void MySleep(unsigned int msec);

    //获取配置参数
    void GetParam(QVector<paramCont> &param);

    //设置曝光时间
    int CameraSetExposureTime(int expTime);

    //设置曝光模式
    int CameraSetExposureMode(int mode);

    //设置对比度
    int CameraSetContrast(int contrast);

    //设置gamma
    int CameraSetGamma(int Gamma);

    //设置帧速
    int CameraSetFrameSpeed(int speed);

    //设置自动曝光模式的目标亮度值
    int CameraSetAutoExposureTarget(int target);

    //设置锐度
    int CameraSetSharpness(int sharpness);

    //设置为预设分辨率索引
    int CameraSetResolutionIndex(int index);

    //设置水平镜像使能
    int CameraSetHMirror(bool isEnable);
private:
    CMindVision();
   // CQCameradll(const CQCameradll &);
   // CQCameradll& operator=(const CQCameradll &);

    static CMindVision* pInstance;

    static Lock* mutex;

public:
    tSdkCameraDevInfo cameraDevInfo[16];

    INT camNum;

    CameraHandle hCamera;

    unsigned char           * rawBuffer=NULL;     //raw数据

    unsigned char           * rgbBuffer=NULL;     //处理后数据缓存区

    tSdkFrameHead           frameHead;       //图像帧头信息

    tSdkCameraCapbility     g_tCapability;      //设备描述信息

    int TimeOut;        //采集超时时间

signals:
    //图像信息信号
    void sigMDVSMap(QPixmap);

};

#endif // CMINDVISION_H
