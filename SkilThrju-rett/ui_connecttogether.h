/********************************************************************************
** Form generated from reading UI file 'connecttogether.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTTOGETHER_H
#define UI_CONNECTTOGETHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectTogether
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ScientistID_lineEdit;
    QLabel *label_2;
    QLineEdit *ComputerID_lineEdit_2;
    QPushButton *AddConnection_pushButton;
    QTableWidget *displayConnections_tableWidget;

    void setupUi(QWidget *ConnectTogether)
    {
        if (ConnectTogether->objectName().isEmpty())
            ConnectTogether->setObjectName(QStringLiteral("ConnectTogether"));
        ConnectTogether->resize(299, 316);
        verticalLayout = new QVBoxLayout(ConnectTogether);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ConnectTogether);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        ScientistID_lineEdit = new QLineEdit(ConnectTogether);
        ScientistID_lineEdit->setObjectName(QStringLiteral("ScientistID_lineEdit"));

        verticalLayout->addWidget(ScientistID_lineEdit);

        label_2 = new QLabel(ConnectTogether);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        ComputerID_lineEdit_2 = new QLineEdit(ConnectTogether);
        ComputerID_lineEdit_2->setObjectName(QStringLiteral("ComputerID_lineEdit_2"));

        verticalLayout->addWidget(ComputerID_lineEdit_2);

        AddConnection_pushButton = new QPushButton(ConnectTogether);
        AddConnection_pushButton->setObjectName(QStringLiteral("AddConnection_pushButton"));

        verticalLayout->addWidget(AddConnection_pushButton);

        displayConnections_tableWidget = new QTableWidget(ConnectTogether);
        if (displayConnections_tableWidget->columnCount() < 2)
            displayConnections_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displayConnections_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displayConnections_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        displayConnections_tableWidget->setObjectName(QStringLiteral("displayConnections_tableWidget"));
        displayConnections_tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(displayConnections_tableWidget);


        retranslateUi(ConnectTogether);

        QMetaObject::connectSlotsByName(ConnectTogether);
    } // setupUi

    void retranslateUi(QWidget *ConnectTogether)
    {
        ConnectTogether->setWindowTitle(QApplication::translate("ConnectTogether", "Form", 0));
        label->setText(QApplication::translate("ConnectTogether", "Scientist ID", 0));
        label_2->setText(QApplication::translate("ConnectTogether", "Computer ID", 0));
        AddConnection_pushButton->setText(QApplication::translate("ConnectTogether", "Connect", 0));
        QTableWidgetItem *___qtablewidgetitem = displayConnections_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ConnectTogether", "Scientists ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayConnections_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ConnectTogether", "Computer ID", 0));
    } // retranslateUi

};

namespace Ui {
    class ConnectTogether: public Ui_ConnectTogether {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTTOGETHER_H
