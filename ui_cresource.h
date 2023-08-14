/********************************************************************************
** Form generated from reading UI file 'cresource.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRESOURCE_H
#define UI_CRESOURCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CResource
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushB_Auto_Dect;
    QComboBox *comboB_Interface;
    QLineEdit *lineEdit;
    QPushButton *pushB_Change_File;
    QPushButton *pushB_Change_Path;

    void setupUi(QWidget *CResource)
    {
        if (CResource->objectName().isEmpty())
            CResource->setObjectName(QString::fromUtf8("CResource"));
        CResource->resize(1000, 520);
        radioButton = new QRadioButton(CResource);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(40, 20, 95, 20));
        radioButton_2 = new QRadioButton(CResource);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 90, 95, 20));
        pushB_Auto_Dect = new QPushButton(CResource);
        pushB_Auto_Dect->setObjectName(QString::fromUtf8("pushB_Auto_Dect"));
        pushB_Auto_Dect->setGeometry(QRect(60, 50, 451, 22));
        comboB_Interface = new QComboBox(CResource);
        comboB_Interface->setObjectName(QString::fromUtf8("comboB_Interface"));
        comboB_Interface->setGeometry(QRect(520, 50, 451, 22));
        lineEdit = new QLineEdit(CResource);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 120, 911, 22));
        pushB_Change_File = new QPushButton(CResource);
        pushB_Change_File->setObjectName(QString::fromUtf8("pushB_Change_File"));
        pushB_Change_File->setGeometry(QRect(60, 150, 451, 22));
        pushB_Change_Path = new QPushButton(CResource);
        pushB_Change_Path->setObjectName(QString::fromUtf8("pushB_Change_Path"));
        pushB_Change_Path->setGeometry(QRect(520, 150, 451, 22));

        retranslateUi(CResource);

        QMetaObject::connectSlotsByName(CResource);
    } // setupUi

    void retranslateUi(QWidget *CResource)
    {
        CResource->setWindowTitle(QCoreApplication::translate("CResource", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("CResource", "\345\233\276\345\203\217\350\216\267\345\217\226\346\216\245\345\217\243", nullptr));
        radioButton_2->setText(QCoreApplication::translate("CResource", "\345\233\276\345\203\217\346\226\207\344\273\266", nullptr));
        pushB_Auto_Dect->setText(QCoreApplication::translate("CResource", "\350\207\252\345\212\250\346\243\200\346\265\213\346\216\245\345\217\243", nullptr));
        pushB_Change_File->setText(QCoreApplication::translate("CResource", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pushB_Change_Path->setText(QCoreApplication::translate("CResource", "\351\200\211\346\213\251\350\267\257\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CResource: public Ui_CResource {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRESOURCE_H
