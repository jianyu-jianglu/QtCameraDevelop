/********************************************************************************
** Form generated from reading UI file 'cparam.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPARAM_H
#define UI_CPARAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CParam
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *CParam)
    {
        if (CParam->objectName().isEmpty())
            CParam->setObjectName(QString::fromUtf8("CParam"));
        CParam->resize(1000, 520);
        scrollArea = new QScrollArea(CParam);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 70, 1000, 430));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 998, 428));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(CParam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 53, 16));
        lineEdit = new QLineEdit(CParam);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 10, 711, 21));
        checkBox = new QCheckBox(CParam);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(800, 10, 80, 20));
        pushButton = new QPushButton(CParam);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(900, 10, 75, 24));
        label_2 = new QLabel(CParam);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 41, 16));
        comboBox = new QComboBox(CParam);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(60, 40, 381, 22));
        label_3 = new QLabel(CParam);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 40, 41, 16));
        comboBox_2 = new QComboBox(CParam);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(510, 40, 381, 22));
        checkBox_2 = new QCheckBox(CParam);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(910, 40, 80, 20));

        retranslateUi(CParam);

        QMetaObject::connectSlotsByName(CParam);
    } // setupUi

    void retranslateUi(QWidget *CParam)
    {
        CParam->setWindowTitle(QCoreApplication::translate("CParam", "Form", nullptr));
        label->setText(QCoreApplication::translate("CParam", "\346\216\245\345\217\243\345\272\223", nullptr));
        checkBox->setText(QCoreApplication::translate("CParam", "\346\233\264\346\226\260\345\233\276\345\203\217", nullptr));
        pushButton->setText(QCoreApplication::translate("CParam", "\346\211\200\346\234\211\351\207\215\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("CParam", "\347\247\215\347\261\273", nullptr));
        label_3->setText(QCoreApplication::translate("CParam", "\345\217\257\350\247\206\345\272\246", nullptr));
        checkBox_2->setText(QCoreApplication::translate("CParam", "\346\214\211\345\220\215\345\255\227\346\216\222\345\210\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CParam: public Ui_CParam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPARAM_H
