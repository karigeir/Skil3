#ifndef CONNECTTOGETHER_H
#define CONNECTTOGETHER_H

#include <QWidget>
#include "connection.h"
#include "connectservice.h"

namespace Ui {
class ConnectTogether;
}

class ConnectTogether : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectTogether(QWidget *parent = 0);
    ~ConnectTogether();
    std::list<Connection> currentConnections;
    ConnectService connectService;

    void getAllConnections();
private slots:
    void on_AddConnection_pushButton_clicked();

private:
    Ui::ConnectTogether *ui;
};

#endif // CONNECTTOGETHER_H
