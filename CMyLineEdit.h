/***
 * name:自定义lineedit
 * func：为了解决指定函数的调用
 * author：翦宇
 * **/
#ifndef CMYLINEEDIT_H
#define CMYLINEEDIT_H
#include <QLineEdit>

class CMyLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit CMyLineEdit(int index, QObject *parent = nullptr);

    int mIndex;
    ~CMyLineEdit();
public slots:
    void slotEnter(const QString &str);

signals:
    void sigEnter(int, QString);
};


#endif // CMYLINEEDIT_H
