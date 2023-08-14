/********************************************************************************
** Form generated from reading UI file 'ctitlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTITLEBAR_H
#define UI_CTITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTitleBar
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *CTitleBar)
    {
        if (CTitleBar->objectName().isEmpty())
            CTitleBar->setObjectName(QString::fromUtf8("CTitleBar"));
        CTitleBar->resize(1000, 30);
        pushButton = new QPushButton(CTitleBar);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(960, 0, 31, 30));

        retranslateUi(CTitleBar);

        QMetaObject::connectSlotsByName(CTitleBar);
    } // setupUi

    void retranslateUi(QWidget *CTitleBar)
    {
        CTitleBar->setWindowTitle(QCoreApplication::translate("CTitleBar", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("CTitleBar", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTitleBar: public Ui_CTitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTITLEBAR_H
