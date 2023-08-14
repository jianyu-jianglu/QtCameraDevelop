#include "cviewmap.h"
#include "ui_cviewmap.h"


CViewMap::CViewMap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CViewMap)
{
    ui->setupUi(this);

    mScene = new QGraphicsScene();

    ui->graphicsView->setScene(mScene);

    this->setWindowFlags(Qt::WindowMinMaxButtonsHint);
}

CViewMap::~CViewMap()
{
    delete ui;
}


//初始化静态
CViewMap* CViewMap::pInstance = NULL;
QMutex* CViewMap::mutex = new QMutex();


//单例创建对象
CViewMap *CViewMap::GetInstance()
{
    // 注意这里一定要使用Double-Check的方式加锁，才能保证效率和线程安全
    if (nullptr == pInstance) {
        mutex->lock();
        if (nullptr == pInstance) {
            pInstance = new CViewMap();
        }
        mutex->unlock();
    }
    return pInstance;
}


int CViewMap::refrashImage(QPixmap pixmap)
{
    mScene->clear();
    pixmap = pixmap.scaled(QSize(ui->graphicsView->width(), ui->graphicsView->height()));
    mScene->addPixmap(pixmap);
    return 0;
}
