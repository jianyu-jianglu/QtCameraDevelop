/********************************************************************************
** Form generated from reading UI file 'ccodecreat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCODECREAT_H
#define UI_CCODECREAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCodeCreat
{
public:

    void setupUi(QWidget *CCodeCreat)
    {
        if (CCodeCreat->objectName().isEmpty())
            CCodeCreat->setObjectName(QString::fromUtf8("CCodeCreat"));
        CCodeCreat->resize(1000, 520);

        retranslateUi(CCodeCreat);

        QMetaObject::connectSlotsByName(CCodeCreat);
    } // setupUi

    void retranslateUi(QWidget *CCodeCreat)
    {
        CCodeCreat->setWindowTitle(QCoreApplication::translate("CCodeCreat", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CCodeCreat: public Ui_CCodeCreat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCODECREAT_H
