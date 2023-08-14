#ifndef CQCAMERA_H
#define CQCAMERA_H
#include <QString>
#include <QVector>
#include <QCameraInfo>
#include <QLabel>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include "ccamera.h"


class CQCamera : public CCamera
{
public:
    //获取唯一实体对象
    static CQCamera* GetInstance();

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

    //采图
    int CameraGetBuffer(QPixmap &pic);

    //回调绑定和解绑
    void CameraBindCallback(bool flag);

    //获取参数
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

    //设置自动曝光目标值
    int CameraSetAutoExposureTarget(int target);

    //设置锐度
    int CameraSetSharpness(int sharpness);

    //设置为预设分辨率索引
    int CameraSetResolutionIndex(int index);

    //设置水平镜像使能
    int CameraSetHMirror(bool isEnable);
private:
    CQCamera();
   // CQCameradll(const CQCameradll &);
   // CQCameradll& operator=(const CQCameradll &);

    //mCamera相机管理
    QCamera* mCamera;

    //取景框类
    QCameraViewfinder* mViewFinder;

    //图像捕捉类
    //QCameraImageCapture* mImageCaputer;

    QList<QCameraInfo> cameras;

    static CQCamera* pInstance;

    static Lock* mutex;

signals:
    //图像信息信号
    //void sigMap(QPixmap);
};

#endif // CQCAMERA_H
