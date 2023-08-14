#include "clogdialog.h"
#include "ui_clogdialog.h"
#include <QTimer>
#include <QIcon>

CLogDialog::CLogDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CLogDialog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);

    QIcon icon(":/ICON/log.png");
    setWindowIcon(icon);

    QTimer* timer = new QTimer(this);
    timer->start(3000);//时间1.5秒
    timer->setSingleShot(true);//仅触发一次
    connect(timer, SIGNAL(timeout()), this, SLOT(slotOnTimeupDestroy()));
}

CLogDialog::~CLogDialog()
{
    delete ui;
}

void CLogDialog::slotOnTimeupDestroy()
{
    this->close();
}
