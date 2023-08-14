#include "CustomControlHead/CMyComBox.h"

CmyComBox::CmyComBox(int index, QObject *parent):mIndex(index)
{
    connect(this, SIGNAL(activated(QString)), this, SLOT(slotActivated(QString)));
}

CmyComBox::~CmyComBox()
{

}

void CmyComBox::slotActivated(QString str)
{
    emit sigActivated(mIndex, str);
}

