/********************************************************************************
** Form generated from reading UI file 'ordercomputers.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERCOMPUTERS_H
#define UI_ORDERCOMPUTERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderComputers
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *ComputerSearch_lineEdit;
    QPushButton *Computers_SearchButton;
    QTableWidget *displayComputers_tableWidget;

    void setupUi(QWidget *orderComputers)
    {
        if (orderComputers->objectName().isEmpty())
            orderComputers->setObjectName(QStringLiteral("orderComputers"));
        orderComputers->resize(417, 307);
        orderComputers->setMaximumSize(QSize(635, 438));
        verticalLayout = new QVBoxLayout(orderComputers);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ComputerSearch_lineEdit = new QLineEdit(orderComputers);
        ComputerSearch_lineEdit->setObjectName(QStringLiteral("ComputerSearch_lineEdit"));

        verticalLayout->addWidget(ComputerSearch_lineEdit);

        Computers_SearchButton = new QPushButton(orderComputers);
        Computers_SearchButton->setObjectName(QStringLiteral("Computers_SearchButton"));

        verticalLayout->addWidget(Computers_SearchButton);

        displayComputers_tableWidget = new QTableWidget(orderComputers);
        if (displayComputers_tableWidget->columnCount() < 4)
            displayComputers_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displayComputers_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displayComputers_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        displayComputers_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        displayComputers_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        displayComputers_tableWidget->setObjectName(QStringLiteral("displayComputers_tableWidget"));
        displayComputers_tableWidget->setAutoFillBackground(false);
        displayComputers_tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        displayComputers_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        displayComputers_tableWidget->horizontalHeader()->setStretchLastSection(true);
        displayComputers_tableWidget->verticalHeader()->setVisible(false);
        displayComputers_tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        displayComputers_tableWidget->verticalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(displayComputers_tableWidget);


        retranslateUi(orderComputers);

        QMetaObject::connectSlotsByName(orderComputers);
    } // setupUi

    void retranslateUi(QWidget *orderComputers)
    {
        orderComputers->setWindowTitle(QApplication::translate("orderComputers", "Form", 0));
        Computers_SearchButton->setText(QApplication::translate("orderComputers", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem = displayComputers_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("orderComputers", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayComputers_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("orderComputers", "Year Built", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayComputers_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("orderComputers", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem3 = displayComputers_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("orderComputers", "Was Built", 0));
    } // retranslateUi

};

namespace Ui {
    class orderComputers: public Ui_orderComputers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERCOMPUTERS_H
