/********************************************************************************
** Form generated from reading UI file 'addscientist.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCIENTIST_H
#define UI_ADDSCIENTIST_H

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

class Ui_AddScientist
{
public:
    QGridLayout *gridLayout;
    QLineEdit *ScientistName_lineEdit;
    QLineEdit *ScientistDOB_lineEdit;
    QLineEdit *ScientistDOD_lineEdit;
    QLineEdit *ScientistGender_lineEdit;
    QPushButton *AddScientist_pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *AddScientist)
    {
        if (AddScientist->objectName().isEmpty())
            AddScientist->setObjectName(QStringLiteral("AddScientist"));
        AddScientist->resize(265, 157);
        AddScientist->setMaximumSize(QSize(589, 326));
        gridLayout = new QGridLayout(AddScientist);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ScientistName_lineEdit = new QLineEdit(AddScientist);
        ScientistName_lineEdit->setObjectName(QStringLiteral("ScientistName_lineEdit"));

        gridLayout->addWidget(ScientistName_lineEdit, 1, 1, 1, 1);

        ScientistDOB_lineEdit = new QLineEdit(AddScientist);
        ScientistDOB_lineEdit->setObjectName(QStringLiteral("ScientistDOB_lineEdit"));

        gridLayout->addWidget(ScientistDOB_lineEdit, 3, 1, 1, 1);

        ScientistDOD_lineEdit = new QLineEdit(AddScientist);
        ScientistDOD_lineEdit->setObjectName(QStringLiteral("ScientistDOD_lineEdit"));

        gridLayout->addWidget(ScientistDOD_lineEdit, 5, 1, 1, 1);

        ScientistGender_lineEdit = new QLineEdit(AddScientist);
        ScientistGender_lineEdit->setObjectName(QStringLiteral("ScientistGender_lineEdit"));

        gridLayout->addWidget(ScientistGender_lineEdit, 7, 1, 1, 1);

        AddScientist_pushButton = new QPushButton(AddScientist);
        AddScientist_pushButton->setObjectName(QStringLiteral("AddScientist_pushButton"));

        gridLayout->addWidget(AddScientist_pushButton, 8, 1, 1, 1);

        label = new QLabel(AddScientist);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(AddScientist);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(AddScientist);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_4 = new QLabel(AddScientist);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        QWidget::setTabOrder(ScientistName_lineEdit, ScientistDOB_lineEdit);
        QWidget::setTabOrder(ScientistDOB_lineEdit, ScientistDOD_lineEdit);
        QWidget::setTabOrder(ScientistDOD_lineEdit, ScientistGender_lineEdit);
        QWidget::setTabOrder(ScientistGender_lineEdit, AddScientist_pushButton);

        retranslateUi(AddScientist);

        QMetaObject::connectSlotsByName(AddScientist);
    } // setupUi

    void retranslateUi(QWidget *AddScientist)
    {
        AddScientist->setWindowTitle(QApplication::translate("AddScientist", "Form", 0));
        AddScientist_pushButton->setText(QApplication::translate("AddScientist", "Add", 0));
        label->setText(QApplication::translate("AddScientist", "Name", 0));
        label_2->setText(QApplication::translate("AddScientist", "Date of Birth (yyyy.mm.dd)", 0));
        label_3->setText(QApplication::translate("AddScientist", "Date of Death (yyyy.mm.dd)", 0));
        label_4->setText(QApplication::translate("AddScientist", "Gender", 0));
    } // retranslateUi

};

namespace Ui {
    class AddScientist: public Ui_AddScientist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTIST_H
