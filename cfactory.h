/***
 * Name:CFactory 相机管理类（工厂）
 * Time:2023.4.29
 * author:JianYu
 ***/

#ifndef CFACTORY_H
#define CFACTORY_H
#include "CameraHead/ccamera.h"

class CFactory
{
public:
    CFactory();

    ~CFactory();

    //获取相机实例
    void GetCameraInstance(int nType);

    //相机基类
    CCamera *mCamera;
};

#endif // CFACTORY_H
