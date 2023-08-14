#ifndef CCODECREAT_H
#define CCODECREAT_H

#include <QWidget>

namespace Ui {
class CCodeCreat;
}

class CCodeCreat : public QWidget
{
    Q_OBJECT

public:
    explicit CCodeCreat(QWidget *parent = nullptr);
    ~CCodeCreat();

private:
    Ui::CCodeCreat *ui;
};

#endif // CCODECREAT_H
