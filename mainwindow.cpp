#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Common.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //tab对象创建
   CResource *resource = new CResource(this);
   CConnect *connect = new CConnect(resource->getInterFace(), this);
   CParam *param = new CParam(resource->getInterFace(), this);
   CDetect *detect = new CDetect(this);
   CCodeCreat *codeCreat = new CCodeCreat(this);
   CViewMap::GetInstance()->show();

   ui->tabWidget->clear();
   ui->tabWidget->setTabPosition(QTabWidget::North);

   ui->tabWidget->addTab(resource, "资源");
   ui->tabWidget->addTab(connect, "连接");
   ui->tabWidget->addTab(param, "参数");
   ui->tabWidget->addTab(detect, "检测");
   ui->tabWidget->addTab(codeCreat, "代码生成");

   ui->tabWidget->setTabEnabled(paramDlg, false);

   //根据资源界面的模式改变的槽连接
   this->connect(resource,SIGNAL(sigModeChange(QString)), connect, SLOT(slotChangeMode(QString)));

    //连接界面的连接和断开决定参数界面是否禁用
   this->connect(connect, SIGNAL(sigControlParam(bool)), this, SLOT(slotIsBan(bool)));

   //连接参数界面设置的槽
   this->connect(connect, SIGNAL(sigCamParam(QVector<paramCont>)), param, SLOT(slotCamParam(QVector<paramCont>)));

   //连接param界面调整lineEdit参数后由于connect类进行设置
   this->connect(param, SIGNAL(sigSetParam(QVector<paramCont>, int, QString)), connect, SLOT(slotSetParam(QVector<paramCont>, int, QString)));

   //连接param界面调整ConBoBox的槽1
    this->connect(param, SIGNAL(sigSetParamCom(QVector<paramCont>, int, QString)), connect, SLOT(slotSetParamCom(QVector<paramCont>, int, QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


//关闭事件
void MainWindow::closeEvent(QCloseEvent *e)
{
   if(1)
   {
       CViewMap::GetInstance()->close();
       e->accept();
   }
   else
   {
       e->ignore();
   }
}


void MainWindow::slotIsBan(bool isBanParam)
{
    if(isBanParam)
    {
        ui->tabWidget->setTabEnabled(paramDlg, true);
    }
    else
    {
        ui->tabWidget->setTabEnabled(paramDlg, false);
    }
}


