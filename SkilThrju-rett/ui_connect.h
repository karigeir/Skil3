/********************************************************************************
** Form generated from reading UI file 'connect.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_H
#define UI_CONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connect
{
public:
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *connect)
    {
        if (connect->objectName().isEmpty())
            connect->setObjectName(QStringLiteral("connect"));
        connect->resize(412, 306);
        lineEdit = new QLineEdit(connect);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(9, 9, 391, 20));
        label_3 = new QLabel(connect);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 339, 26));
        label_3->setBaseSize(QSize(15, 15));
        label_3->setScaledContents(true);
        lineEdit_2 = new QLineEdit(connect);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(9, 277, 133, 20));
        label = new QLabel(connect);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 205, 54, 16));
        label->setFrameShadow(QFrame::Plain);
        label_2 = new QLabel(connect);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 107, 61, 16));
        lineEdit_3 = new QLineEdit(connect);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(9, 179, 133, 20));

        retranslateUi(connect);

        QMetaObject::connectSlotsByName(connect);
    } // setupUi

    void retranslateUi(QWidget *connect)
    {
        connect->setWindowTitle(QApplication::translate("connect", "Form", 0));
        label_3->setText(QApplication::translate("connect", "<html><head/><body><p>First enter the ID of the scientist and then the ID of the computer that<br/>you want to tie the scientist to.</p></body></html>", 0));
        label->setText(QApplication::translate("connect", "Scientist ID", 0));
        label_2->setText(QApplication::translate("connect", "Computer ID", 0));
    } // retranslateUi

};

namespace Ui {
    class connect: public Ui_connect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_H
