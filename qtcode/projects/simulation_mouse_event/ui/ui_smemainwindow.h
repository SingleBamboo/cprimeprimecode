/********************************************************************************
** Form generated from reading UI file 'ui_smemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMEMAINWINDOW_H
#define UI_SMEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smeMainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listwidget_loginfo;
    QTableWidget *tablewidget_timerinfo;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *edt_xposition;
    QLabel *label;
    QLineEdit *edt_yposition;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QPushButton *btn_getposition;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *smeMainWindow)
    {
        if (smeMainWindow->objectName().isEmpty())
            smeMainWindow->setObjectName(QStringLiteral("smeMainWindow"));
        smeMainWindow->resize(863, 395);
        centralwidget = new QWidget(smeMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listwidget_loginfo = new QListWidget(centralwidget);
        listwidget_loginfo->setObjectName(QStringLiteral("listwidget_loginfo"));
        listwidget_loginfo->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_3->addWidget(listwidget_loginfo);

        tablewidget_timerinfo = new QTableWidget(centralwidget);
        if (tablewidget_timerinfo->columnCount() < 6)
            tablewidget_timerinfo->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablewidget_timerinfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablewidget_timerinfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablewidget_timerinfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablewidget_timerinfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablewidget_timerinfo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablewidget_timerinfo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tablewidget_timerinfo->setObjectName(QStringLiteral("tablewidget_timerinfo"));
        tablewidget_timerinfo->setMinimumSize(QSize(400, 0));
        tablewidget_timerinfo->setContextMenuPolicy(Qt::CustomContextMenu);
        tablewidget_timerinfo->setSelectionMode(QAbstractItemView::SingleSelection);
        tablewidget_timerinfo->setColumnCount(6);

        horizontalLayout_3->addWidget(tablewidget_timerinfo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        edt_xposition = new QLineEdit(centralwidget);
        edt_xposition->setObjectName(QStringLiteral("edt_xposition"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edt_xposition->sizePolicy().hasHeightForWidth());
        edt_xposition->setSizePolicy(sizePolicy);
        edt_xposition->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(edt_xposition);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        edt_yposition = new QLineEdit(centralwidget);
        edt_yposition->setObjectName(QStringLiteral("edt_yposition"));
        sizePolicy.setHeightForWidth(edt_yposition->sizePolicy().hasHeightForWidth());
        edt_yposition->setSizePolicy(sizePolicy);
        edt_yposition->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(edt_yposition);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_start = new QPushButton(centralwidget);
        btn_start->setObjectName(QStringLiteral("btn_start"));

        horizontalLayout_2->addWidget(btn_start);

        btn_stop = new QPushButton(centralwidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));

        horizontalLayout_2->addWidget(btn_stop);

        btn_getposition = new QPushButton(centralwidget);
        btn_getposition->setObjectName(QStringLiteral("btn_getposition"));

        horizontalLayout_2->addWidget(btn_getposition);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        smeMainWindow->setCentralWidget(centralwidget);

        retranslateUi(smeMainWindow);

        QMetaObject::connectSlotsByName(smeMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *smeMainWindow)
    {
        smeMainWindow->setWindowTitle(QApplication::translate("smeMainWindow", "MainWindow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tablewidget_timerinfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("smeMainWindow", "Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tablewidget_timerinfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("smeMainWindow", "Time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tablewidget_timerinfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("smeMainWindow", "Interval", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tablewidget_timerinfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("smeMainWindow", "Start Position", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tablewidget_timerinfo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("smeMainWindow", "End Position", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tablewidget_timerinfo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("smeMainWindow", "Count", Q_NULLPTR));
        label->setText(QApplication::translate("smeMainWindow", "-", Q_NULLPTR));
        btn_start->setText(QApplication::translate("smeMainWindow", "Start", Q_NULLPTR));
        btn_stop->setText(QApplication::translate("smeMainWindow", "Stop", Q_NULLPTR));
        btn_getposition->setText(QApplication::translate("smeMainWindow", "postion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class smeMainWindow: public Ui_smeMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMEMAINWINDOW_H
