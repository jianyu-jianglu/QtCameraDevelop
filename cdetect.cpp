#include "cdetect.h"
#include "ui_cdetect.h"

CDetect::CDetect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CDetect)
{
    ui->setupUi(this);
}

CDetect::~CDetect()
{
    delete ui;
}
