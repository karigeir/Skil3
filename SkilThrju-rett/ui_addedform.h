/********************************************************************************
** Form generated from reading UI file 'addedform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDFORM_H
#define UI_ADDEDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddedForm
{
public:
    QLabel *label;

    void setupUi(QWidget *AddedForm)
    {
        if (AddedForm->objectName().isEmpty())
            AddedForm->setObjectName(QStringLiteral("AddedForm"));
        AddedForm->resize(185, 67);
        label = new QLabel(AddedForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 131, 51));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);

        retranslateUi(AddedForm);

        QMetaObject::connectSlotsByName(AddedForm);
    } // setupUi

    void retranslateUi(QWidget *AddedForm)
    {
        AddedForm->setWindowTitle(QApplication::translate("AddedForm", "Form", 0));
        label->setText(QApplication::translate("AddedForm", "Added!", 0));
    } // retranslateUi

};

namespace Ui {
    class AddedForm: public Ui_AddedForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDFORM_H
