#include "CustomControlHead/CMyButton.h"

CMybutton::CMybutton(int index, QObject *parent):mIndex(index)
{

}

CMybutton::~CMybutton()
{

}

void CMybutton::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        emit sigIndex(mIndex);
    }

    if(e->button()== Qt::RightButton)
    {

    }
    //return CMybutton::mousePressEvent(e);
}
