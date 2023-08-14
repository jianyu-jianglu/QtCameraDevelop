/***
 * time:2023.5.9
 * author:jianyu
 * function: 实时显示图片(show image everytime)
 ***/
#ifndef CVIEWMAP_H
#define CVIEWMAP_H

#include "qgraphicsitem.h"
#include <QWidget>
#include <QtGui>
#include <QMutex>

namespace Ui {
class CViewMap;
}

class CViewMap : public QWidget
{
    Q_OBJECT

public:
    ~CViewMap();

    //单例创建界面管理类
    static CViewMap* GetInstance();

    //刷新显示图片
    //参数：要显示的pixmap
    int refrashImage(QPixmap pixmap);

private:
    explicit CViewMap(QWidget *parent = nullptr);

    QGraphicsScene *mScene;

    //QGraphicsPixmapItem *mItem;

    static CViewMap* pInstance;

    static QMutex* mutex;

private:
    Ui::CViewMap *ui;
};

#endif // CVIEWMAP_H
