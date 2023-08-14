/***
 * name:自定义button类
 * func:重定义槽来传输其他信息
 * author:JianYu
 ***/
#ifndef CMYBUTTON_H
#define CMYBUTTON_H

#include <QPushButton>
#include <QMouseEvent>
#include <QObject>

class CMybutton : public QPushButton
{
     Q_OBJECT
public:
    explicit CMybutton(int index, QObject *parent = nullptr);

    ~CMybutton();

    void mousePressEvent(QMouseEvent *e);

    int mIndex;

signals:
    void sigIndex(int index);

};



#endif // CMYBUTTON_H
