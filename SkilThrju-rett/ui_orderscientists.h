/********************************************************************************
** Form generated from reading UI file 'orderscientists.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSCIENTISTS_H
#define UI_ORDERSCIENTISTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_orderScientists
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *Search_lineEdit;
    QPushButton *SearchButton;
    QGridLayout *gridLayout;
    QTableWidget *displayScientists_tableWidget;

    void setupUi(QWidget *orderScientists)
    {
        if (orderScientists->objectName().isEmpty())
            orderScientists->setObjectName(QStringLiteral("orderScientists"));
        orderScientists->resize(417, 307);
        orderScientists->setMaximumSize(QSize(619, 396));
        verticalLayout = new QVBoxLayout(orderScientists);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Search_lineEdit = new QLineEdit(orderScientists);
        Search_lineEdit->setObjectName(QStringLiteral("Search_lineEdit"));

        verticalLayout->addWidget(Search_lineEdit);

        SearchButton = new QPushButton(orderScientists);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));

        verticalLayout->addWidget(SearchButton);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        displayScientists_tableWidget = new QTableWidget(orderScientists);
        if (displayScientists_tableWidget->columnCount() < 4)
            displayScientists_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displayScientists_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displayScientists_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        displayScientists_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        displayScientists_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        displayScientists_tableWidget->setObjectName(QStringLiteral("displayScientists_tableWidget"));
        displayScientists_tableWidget->setAutoFillBackground(false);
        displayScientists_tableWidget->horizontalHeader()->setStretchLastSection(true);
        displayScientists_tableWidget->verticalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(displayScientists_tableWidget, 0, 0, 2, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(orderScientists);

        QMetaObject::connectSlotsByName(orderScientists);
    } // setupUi

    void retranslateUi(QWidget *orderScientists)
    {
        orderScientists->setWindowTitle(QApplication::translate("orderScientists", "Form", 0));
        SearchButton->setText(QApplication::translate("orderScientists", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem = displayScientists_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("orderScientists", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayScientists_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("orderScientists", "Date of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayScientists_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("orderScientists", "Date of Death", 0));
        QTableWidgetItem *___qtablewidgetitem3 = displayScientists_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("orderScientists", "Gender", 0));
    } // retranslateUi

};

namespace Ui {
    class orderScientists: public Ui_orderScientists {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSCIENTISTS_H
