/********************************************************************************
** Form generated from reading UI file 'clogdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOGDIALOG_H
#define UI_CLOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CLogDialog
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *CLogDialog)
    {
        if (CLogDialog->objectName().isEmpty())
            CLogDialog->setObjectName(QString::fromUtf8("CLogDialog"));
        CLogDialog->resize(400, 200);
        CLogDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 150, 0);"));
        label = new QLabel(CLogDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 200, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ICON/log.png")));
        label_2 = new QLabel(CLogDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 160, 240, 20));

        retranslateUi(CLogDialog);

        QMetaObject::connectSlotsByName(CLogDialog);
    } // setupUi

    void retranslateUi(QDialog *CLogDialog)
    {
        CLogDialog->setWindowTitle(QCoreApplication::translate("CLogDialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("CLogDialog", "2023.5 JYCamGrabber v1.0  professional", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CLogDialog: public Ui_CLogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOGDIALOG_H
