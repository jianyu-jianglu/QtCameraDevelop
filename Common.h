#ifndef COMMON_H
#define COMMON_H
//#define SAFE_RELEASE(filter) { if(NULL != filter) { filter->Release(); filter = NULL; } }
//#include "dshow.h"
//#include "atlbase.h"
//#pragma comment(lib, "./lib/strmbasd.lib")
#include <windows.h>
#include <QString>
#include <QVector>

enum Vision{
    qCameraInfo = 0,
    DirectShow = 1,
    usbvision3 = 2,
    gigevision3 = 3
};

typedef int InterFaceMode;

//控件类型
enum ControlType{
    label = 0,
    lineEdit = 1,
    ComBox = 2,
    slide = 3,
    button = 4,
    none = 5        //5代表不需要控件
};

//定义放在参数界面里面的数据结构体
typedef struct ParamContainer{
    QString apiName;            //接口名
    int value;                  //默认值
    ControlType controlTypeA;   //第一个控件
    ControlType controlTypeB;   //第二个控件
    ControlType controlTypeC;   //第三个控件
    QVector<QString> controInfo; //控件一的附带内容
}paramCont;

//控件类型
enum dialogIndex{
    resourceDlg = 0,
    connectDlg = 1,
    paramDlg = 2,
    detectDlg = 3,
    codeDlg = 4
};

//定义参数统一名
const QString grabTimeOut = "grabTimeOut";
const QString exposureTime = "exposureTime";
const QString contrast = "contrast";
const QString gamma = "gamma";
const QString exposureMode = "exposureMode";
const QString autoExposureTarget = "autoExposureTarget";
const QString frameSpeed = "frameSpeed";
const QString hMirror = "hMirror";
const QString vMirror = "vMirror";
const QString sharpness = "sharpness";
const QString noise2d = "noise2d";
const QString noise3D = "noise3D";
const QString rotate = "rotate";
const QString inverse = "inverse";
const QString resolutionIndex = "resolutionIndex";
const QString resolutionMod = "resolutionMod";
const QString offsetX = "offsetX";
const QString offsetY = "offsetY";
const QString width = "width";
const QString height = "height";
const QString mono = "mono";


#endif // COMMON_H
