#include "ccodecreat.h"
#include "ui_ccodecreat.h"

CCodeCreat::CCodeCreat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CCodeCreat)
{
    ui->setupUi(this);
}

CCodeCreat::~CCodeCreat()
{
    delete ui;
}
