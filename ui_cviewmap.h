/********************************************************************************
** Form generated from reading UI file 'cviewmap.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVIEWMAP_H
#define UI_CVIEWMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CViewMap
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QWidget *CViewMap)
    {
        if (CViewMap->objectName().isEmpty())
            CViewMap->setObjectName(QString::fromUtf8("CViewMap"));
        CViewMap->resize(1000, 650);
        graphicsView = new QGraphicsView(CViewMap);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 60, 981, 561));

        retranslateUi(CViewMap);

        QMetaObject::connectSlotsByName(CViewMap);
    } // setupUi

    void retranslateUi(QWidget *CViewMap)
    {
        CViewMap->setWindowTitle(QCoreApplication::translate("CViewMap", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CViewMap: public Ui_CViewMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVIEWMAP_H
