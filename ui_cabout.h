/********************************************************************************
** Form generated from reading UI file 'cabout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CABOUT_H
#define UI_CABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAbout
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *CAbout)
    {
        if (CAbout->objectName().isEmpty())
            CAbout->setObjectName(QString::fromUtf8("CAbout"));
        CAbout->resize(400, 200);
        label = new QLabel(CAbout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 200, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ICON/log.png")));
        label_2 = new QLabel(CAbout);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 160, 240, 20));

        retranslateUi(CAbout);

        QMetaObject::connectSlotsByName(CAbout);
    } // setupUi

    void retranslateUi(QWidget *CAbout)
    {
        CAbout->setWindowTitle(QCoreApplication::translate("CAbout", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("CAbout", "2023.5 JYCamGrabber v1.0  professional", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAbout: public Ui_CAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CABOUT_H
