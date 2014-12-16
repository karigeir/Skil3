#ifndef CONNECT_H
#define CONNECT_H

#include <QWidget>

namespace Ui {
class connect;
}

class connect : public QWidget
{
    Q_OBJECT

public:
    explicit connect(QWidget *parent = 0);
    ~connect();

private:
    Ui::connect *ui;
};

#endif // CONNECT_H
