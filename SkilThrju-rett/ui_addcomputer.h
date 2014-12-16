/********************************************************************************
** Form generated from reading UI file 'addcomputer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPUTER_H
#define UI_ADDCOMPUTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddComputer
{
public:
    QGridLayout *gridLayout;
    QLineEdit *ComputerWasBuilt_lineEdit;
    QLabel *ComputerName;
    QLineEdit *ComputerYearBuilt_lineEdit;
    QLineEdit *ComputerName_lineEdit;
    QLabel *YearBuilt;
    QLineEdit *ComputerType_lineEdit;
    QPushButton *AddComputer_pushButton;
    QLabel *ComputerWasBuilt;
    QLabel *ComputerType;

    void setupUi(QWidget *AddComputer)
    {
        if (AddComputer->objectName().isEmpty())
            AddComputer->setObjectName(QStringLiteral("AddComputer"));
        AddComputer->resize(190, 157);
        AddComputer->setMaximumSize(QSize(589, 326));
        gridLayout = new QGridLayout(AddComputer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ComputerWasBuilt_lineEdit = new QLineEdit(AddComputer);
        ComputerWasBuilt_lineEdit->setObjectName(QStringLiteral("ComputerWasBuilt_lineEdit"));

        gridLayout->addWidget(ComputerWasBuilt_lineEdit, 5, 1, 1, 1);

        ComputerName = new QLabel(AddComputer);
        ComputerName->setObjectName(QStringLiteral("ComputerName"));

        gridLayout->addWidget(ComputerName, 1, 0, 1, 1);

        ComputerYearBuilt_lineEdit = new QLineEdit(AddComputer);
        ComputerYearBuilt_lineEdit->setObjectName(QStringLiteral("ComputerYearBuilt_lineEdit"));

        gridLayout->addWidget(ComputerYearBuilt_lineEdit, 2, 1, 1, 1);

        ComputerName_lineEdit = new QLineEdit(AddComputer);
        ComputerName_lineEdit->setObjectName(QStringLiteral("ComputerName_lineEdit"));

        gridLayout->addWidget(ComputerName_lineEdit, 1, 1, 1, 1);

        YearBuilt = new QLabel(AddComputer);
        YearBuilt->setObjectName(QStringLiteral("YearBuilt"));

        gridLayout->addWidget(YearBuilt, 2, 0, 1, 1);

        ComputerType_lineEdit = new QLineEdit(AddComputer);
        ComputerType_lineEdit->setObjectName(QStringLiteral("ComputerType_lineEdit"));

        gridLayout->addWidget(ComputerType_lineEdit, 4, 1, 1, 1);

        AddComputer_pushButton = new QPushButton(AddComputer);
        AddComputer_pushButton->setObjectName(QStringLiteral("AddComputer_pushButton"));

        gridLayout->addWidget(AddComputer_pushButton, 8, 1, 1, 1);

        ComputerWasBuilt = new QLabel(AddComputer);
        ComputerWasBuilt->setObjectName(QStringLiteral("ComputerWasBuilt"));

        gridLayout->addWidget(ComputerWasBuilt, 5, 0, 1, 1);

        ComputerType = new QLabel(AddComputer);
        ComputerType->setObjectName(QStringLiteral("ComputerType"));

        gridLayout->addWidget(ComputerType, 4, 0, 1, 1);

        QWidget::setTabOrder(ComputerName_lineEdit, ComputerYearBuilt_lineEdit);
        QWidget::setTabOrder(ComputerYearBuilt_lineEdit, ComputerType_lineEdit);
        QWidget::setTabOrder(ComputerType_lineEdit, ComputerWasBuilt_lineEdit);
        QWidget::setTabOrder(ComputerWasBuilt_lineEdit, AddComputer_pushButton);

        retranslateUi(AddComputer);

        QMetaObject::connectSlotsByName(AddComputer);
    } // setupUi

    void retranslateUi(QWidget *AddComputer)
    {
        AddComputer->setWindowTitle(QApplication::translate("AddComputer", "Form", 0));
        ComputerName->setText(QApplication::translate("AddComputer", "Name", 0));
        YearBuilt->setText(QApplication::translate("AddComputer", "Year Built", 0));
        AddComputer_pushButton->setText(QApplication::translate("AddComputer", "Add", 0));
        ComputerWasBuilt->setText(QApplication::translate("AddComputer", "Was Built (y/n)", 0));
        ComputerType->setText(QApplication::translate("AddComputer", "Type ", 0));
    } // retranslateUi

};

namespace Ui {
    class AddComputer: public Ui_AddComputer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPUTER_H
