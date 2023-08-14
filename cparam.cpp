#include "cparam.h"
#include "ui_cparam.h"

CParam::CParam(QString mode, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CParam),
    nMode(mode)
{
    ui->setupUi(this);

}

CParam::~CParam()
{
    delete ui;
}

//获取相机参数并显示
void CParam::slotCamParam(QVector<paramCont> param)
{
    mParam = param;

    gridLayout = new QGridLayout();

    //先添加常用参数
    int len = param.size();
    /*
           QString apiName;            //接口名
           int value;                  //默认值
           ControlType controlTypeA;   //第一个控件
           ControlType controlTypeB;   //第二个控件
           ControlType controlTypeC;   //第三个控件
    */

    for(int i = 0; i < len; i++)
       {
            QLabel* label = new QLabel();
            label->setText(param[i].apiName);
            label->setMinimumSize(QSize(30,20));
            gridLayout->addWidget(label, i, 0);

            switch (param[i].controlTypeA)
            {
               case lineEdit:
               {
                    CMyLineEdit *lineEdit = new CMyLineEdit(i);
                    QString str = QString::number(param[i].value);
                    lineEdit->setText(QString(str));
                    lineEdit->setMinimumSize(QSize(40,20));
                    this->connect(lineEdit, SIGNAL(sigEnter(int, QString)), this, SLOT(slotSetCamLineEdit(int, QString)));
                    gridLayout->addWidget(lineEdit, i, 1);
                    break;
               }
               case ComBox:
               {
                    CmyComBox *comb = new CmyComBox(i);
                    //添加下拉框的内容
                    for(int j = 0; j < param[i].controInfo.size(); j++)
                    {
                        comb->addItem(QString(param[i].controInfo[j]));
                    }
                    comb->setMinimumSize(QSize(40,20));
                    this->connect(comb, SIGNAL(sigActivated(int, QString)), this, SLOT(slotActivated(int, QString)));
                    gridLayout->addWidget(comb, i, 1);
                    break;
               }

               default:
                   break;
            }

            switch (param[i].controlTypeB)
            {
               case none:
               {
                    QLabel* label2 = new QLabel();
                    label->setMinimumSize(QSize(40,20));
                    gridLayout->addWidget(label2, i, 2);
                    break;
               }
               case slide:
               {
                    QSlider *mSlide = new QSlider();
                    mSlide->setOrientation(Qt::Horizontal);   //Qt::Vertical (the default) or Qt::Horizontal.
                    mSlide->setMinimumSize(QSize(40,20));
                    gridLayout->addWidget(mSlide, i, 2);
                    break;
               }

               default:
                   break;

            }

            switch (param[i].controlTypeC)
            {
               case button:
               {
                    CMybutton *pBtn = new CMybutton(i);
                    pBtn->setText("默认");
                    this->connect(pBtn, SIGNAL(sigIndex(int)), this, SLOT(slotPushRecover(int)));
                    pBtn->setMinimumSize(QSize(30,20));
                    gridLayout->addWidget(pBtn, i, 3);
                    break;
               }
               default:
                   break;
            }
        }

    //再添加只读参数

    //再添加活动参数

    //再添加只写参数，halcon上面写的当前gui不支持，不知道什么问题
    gridLayout->setColumnStretch(0, 0);
    gridLayout->setColumnStretch(1, 8);
    gridLayout->setColumnStretch(2, 8);
    gridLayout->setColumnStretch(3, 1);

    ui->scrollAreaWidgetContents->setLayout(gridLayout);
}


void CParam::slotPushRecover(int index)
{
    printf("helloworld\n");
    return;
}


//设置相机参数
void CParam::slotSetCamLineEdit(int index, QString str)
{
    emit sigSetParam(mParam , index, str);
}

//设置相机参数（ComboBox）
void CParam::slotActivated(int index, QString str)
{
    emit sigSetParamCom(mParam, index, str);
}

