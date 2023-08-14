/***
 * Name:相机基类
 * date:2023.4.29
 * author:JianYu
 */

#ifndef CCAMERA_H
#define CCAMERA_H

#include <QString>
#include <QLabel>
#include <QMutex>
#include <QObject>
#include <QPixmap>
#include "Common.h"

/*用互斥量构建一个锁类*/
class Lock{
private:
    QMutex mutex;
public:
    void lock(){ mutex.lock(); }
    void unlock(){ mutex.unlock(); }
};

class CCamera : public QObject
{
    Q_OBJECT
public:
    CCamera();

    virtual ~CCamera();

    //反初始化（一些数据的释放）
    virtual void CameraUninit() = 0;

    //功能：枚举相机接口(统一)
    //参数：相机枚举信息
    //返回值：如果枚举没有相机，返回-1 ，有则返回相机数
    virtual int CameraEnumDevice(QVector<QString> &deviceList) = 0;

    //功能：初始化相机
    //参数：相机句柄
    //返回值：成功为0 失败为-1
    virtual int CameraInit(int cam) = 0;

    //功能：打开相机采集
    //参数：相机句柄
    //返回值：成功为0 失败为-1
    virtual int CameraPlay(int cam) = 0;

    //功能：暂停相机采集
    //参数：相机句柄
    //返回值：成功为0 失败为-1
    virtual int CameraPause(int cam) = 0;

    //功能：停止相机采集
    //参数：相机句柄
    //返回值：成功为0 失败为-1
    virtual int CameraStop(int cam) = 0;

    //功能：取一张图
    //参数：
    //返回值：成功为0 失败为-1
    virtual int CameraGetBuffer(QPixmap &pic) = 0;

    //功能：绑定和取消绑定回调函数
    //参数：true 为绑定 ，false为解除绑定
    //返回值:void
    virtual void CameraBindCallback(bool flag) = 0;

    //功能：获取配置参数
    //参数：paramA: 一般参数 paramB: 活动参数 paramC:只读参数
    //返回值:void
    virtual void GetParam(QVector<paramCont> &param)= 0;

    //功能：设置曝光时间
    //参数：paramA: 曝光时间 （单位:微妙us）
    //返回值:int 错误码
    virtual int CameraSetExposureTime(int expTime) = 0;

    //功能：设置曝光模式
    //参数：paramA: 0模式手动  1模式自动
    //返回值:成功为0 失败为-
    virtual int CameraSetExposureMode(int mode) = 0;

    //功能：设置对比度
    //参数：paramA: 对比度
    //返回值:成功为0 失败为-
    virtual int CameraSetContrast(int contrast) = 0;

    //功能：设置gamma
    //参数：paramA: 伽马值
    //返回值:成功为0 失败为-
    virtual int CameraSetGamma(int Gamma) = 0;

    //功能：设置gamma
    //参数：paramA: 伽马值
    //返回值:成功为0 失败为-
    virtual int CameraSetFrameSpeed(int speed) = 0;

    //功能：设置自动曝光亮度目标值
    //参数：paramA: 亮度目标值
    //返回值:成功为0 失败为-
    virtual int CameraSetAutoExposureTarget(int target) = 0;

    //功能：设置锐度
    //参数：paramA: 锐度值
    //返回值:成功为0 失败为-
    virtual int CameraSetSharpness(int sharpness) = 0;

    //功能：设置为预设分辨率
    //参数：paramA: 分辨率索引
    //返回值:成功为0 失败为-
    virtual int CameraSetResolutionIndex(int index) = 0;

    //功能：设置水平镜像使能
    //参数：paramA: 是否进行水平镜像
    //返回值:成功为0 失败为-
    virtual int CameraSetHMirror(bool isEnable) = 0;
//signals:
    //图像信息信号
   // void sigMap(QPixmap);

};

#endif // CCAMERA_H
