#ifndef SEARCHSCIENTIST_H
#define SEARCHSCIENTIST_H

#include <QWidget>

namespace Ui {
class SearchScientist;
}

class SearchScientist : public QWidget
{
    Q_OBJECT

public:
    explicit SearchScientist(QWidget *parent = 0);
    ~SearchScientist();

private slots:
    void on_SearchString_lineEdit_textChanged(const QString &arg1);

private:
    Ui::SearchScientist *ui;
};

#endif // SEARCHSCIENTIST_H
