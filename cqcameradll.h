/***
 * time: 2023.4.26
 * author: Jian Yu
 * Name: CQCameradll
 * 模拟插件库,需要统一的接口
 */

#ifndef CQCAMERADLL_H
#define CQCAMERADLL_H
#include <QString>
#include <QVector>
#include <QMutex>
#include <QCameraInfo>


//类和统一接口申明
class CQCameradll;
class Lock;
//CQCameradll *camInstall;        //单例对象
QString GetClassName();
void CameraCreatInstance();
void CameraUninit();
int CameraEnumDevice(QVector<QString> &DeviceList);


/*用互斥量构建一个枷锁类*/
class Lock{
private:
    QMutex mutex;
public:
    void lock(){ mutex.lock(); }
    void unlock(){ mutex.unlock(); }
};

//使用单例模式的构造函数
class CQCameradll
{
public:
    //获取唯一实体对象
    static CQCameradll* GetInstance();


    //功能：枚举相机接口(统一)
    //参数：相机枚举信息
    //返回值：如果枚举没有相机，返回-1 ，有则返回相机数
    int EnumDevice(QVector<QString> &deviceList);

private:
    CQCameradll();
   // CQCameradll(const CQCameradll &);
   // CQCameradll& operator=(const CQCameradll &);

    static CQCameradll* pInstance;
    static Lock* mutex;
};


#endif // CQCAMERADLL_H
