/***
 * name:自定义的Qcombox类
 * author:翦宇
 * time:2023.6.1
 * **/
#ifndef CMYCOMBOX_H
#define CMYCOMBOX_H
#include <QComboBox>

class CmyComBox : public QComboBox
{
    Q_OBJECT
public:
    explicit CmyComBox(int index, QObject *parent = nullptr);

    ~CmyComBox();

    int mIndex;
public slots:
    void slotActivated(QString str);

signals:
    void sigActivated(int, QString);
};


#endif // CMYCOMBOX_H
