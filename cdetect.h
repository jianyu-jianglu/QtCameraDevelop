#ifndef CDETECT_H
#define CDETECT_H

#include <QWidget>

namespace Ui {
class CDetect;
}

class CDetect : public QWidget
{
    Q_OBJECT

public:
    explicit CDetect(QWidget *parent = nullptr);
    ~CDetect();

private:
    Ui::CDetect *ui;
};

#endif // CDETECT_H
