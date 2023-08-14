#include "cqcameradll.h"


//初始化静态
CQCameradll* CQCameradll::pInstance = NULL;
Lock* CQCameradll::mutex = new Lock;

//单例创建对象
CQCameradll *CQCameradll::GetInstance()
{
    // 注意这里一定要使用Double-Check的方式加锁，才能保证效率和线程安全
    if (nullptr == pInstance) {
        mutex->lock();
        if (nullptr == pInstance) {
            pInstance = new CQCameradll();
        }
        mutex->unlock();
    }
    return pInstance;
}


CQCameradll::CQCameradll()
{

}


//如果枚举没有相机，返回-1 ，有则返回相机数
int CQCameradll::EnumDevice(QVector<QString> &deviceList)
{
    const QList<QCameraInfo> cameras = QCameraInfo::availableCameras();

    if(cameras.empty())
    {
        return -1;
    }
    for (const QCameraInfo &cameraInfo : cameras)
    {
        deviceList.push_back(cameraInfo.deviceName());
    }

    return cameras.count();
}


//名称接口（统一）
QString GetClassName()
{
    return "CQCameradll";
}


//创建本类的对象（统一）
void CameraCreatInstance()
{
    CQCameradll::GetInstance();
}


//功能：枚举相机接口(统一)
//参数：相机枚举信息
//返回值：如果枚举没有相机，返回-1 ，有则返回相机数
int CameraEnumDevice(QVector<QString> &DeviceList)
{
    if(CQCameradll::GetInstance())
    {
        return CQCameradll::GetInstance()->EnumDevice(DeviceList);
    }
    else
    {
        return -1;  //还未创建实例
    }
}


//释放单例模式new出来的空间，释放......等
void CameraUninit()
{
    delete CQCameradll::GetInstance();
}



