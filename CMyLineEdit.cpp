#include "CustomControlHead/CMyLineEdit.h"

CMyLineEdit::CMyLineEdit(int index, QObject *parent):mIndex(index)
{
    connect(this,SIGNAL(textEdited(const QString &)), this, SLOT(slotEnter(const QString &)));
}


CMyLineEdit::~CMyLineEdit()
{

}


void CMyLineEdit::slotEnter(const QString &str)
{
    emit sigEnter(mIndex, str);
}


