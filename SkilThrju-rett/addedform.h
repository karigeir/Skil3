#ifndef ADDEDFORM_H
#define ADDEDFORM_H

#include <QWidget>

namespace Ui {
class AddedForm;
}

class AddedForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddedForm(QWidget *parent = 0);
    ~AddedForm();

private:
    Ui::AddedForm *ui;
};

#endif // ADDEDFORM_H
