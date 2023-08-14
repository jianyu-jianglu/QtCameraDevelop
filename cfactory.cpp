#include "cfactory.h"
#include "CameraHead/cqcamera.h"
#include "CameraHead/cmindvision.h"

CFactory::CFactory()
{

}


CFactory::~CFactory()
{
  delete mCamera;
}


void CFactory::GetCameraInstance(int nType)
{
    //这里从某个地方获取相机种类和标志位，确定是哪个相机类
    switch(nType)
    {
    case 0:
        mCamera = CQCamera::GetInstance();
        break;

    case 1:
        mCamera = CMindVision::GetInstance();
        break;

    case 2:
        break;

    default:
        break;
    }
}
