/********************************************************************************
** Form generated from reading UI file 'scheduler3gui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULER3GUI_H
#define UI_SCHEDULER3GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scheduler3GUIClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *buttonLayout;
    QPushButton *addTask;
    QPushButton *enter;
    QScrollArea *scrollArea;
    QWidget *scrollContents;
    QGridLayout *gridLayout;
    QLabel *labelInitTime;
    QLabel *labelDescription;
    QLabel *labelEndTime;
    QTimeEdit *timeEdit;
    QLineEdit *lineEdit;
    QTimeEdit *timeEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Scheduler3GUIClass)
    {
        if (Scheduler3GUIClass->objectName().isEmpty())
            Scheduler3GUIClass->setObjectName(QStringLiteral("Scheduler3GUIClass"));
        Scheduler3GUIClass->resize(500, 550);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Scheduler3GUI/Resources/finished_tactic-clock.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Scheduler3GUIClass->setWindowIcon(icon);
        centralWidget = new QWidget(Scheduler3GUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(6);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        addTask = new QPushButton(centralWidget);
        addTask->setObjectName(QStringLiteral("addTask"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTask->sizePolicy().hasHeightForWidth());
        addTask->setSizePolicy(sizePolicy);
        addTask->setMinimumSize(QSize(200, 50));

        buttonLayout->addWidget(addTask);

        enter = new QPushButton(centralWidget);
        enter->setObjectName(QStringLiteral("enter"));
        sizePolicy.setHeightForWidth(enter->sizePolicy().hasHeightForWidth());
        enter->setSizePolicy(sizePolicy);
        enter->setMinimumSize(QSize(200, 50));

        buttonLayout->addWidget(enter);


        verticalLayout->addLayout(buttonLayout);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollContents = new QWidget();
        scrollContents->setObjectName(QStringLiteral("scrollContents"));
        scrollContents->setGeometry(QRect(0, 0, 465, 404));
        scrollContents->setMinimumSize(QSize(465, 0));
        gridLayout = new QGridLayout(scrollContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(12);
        labelInitTime = new QLabel(scrollContents);
        labelInitTime->setObjectName(QStringLiteral("labelInitTime"));
        labelInitTime->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelInitTime, 0, 0, 1, 1);

        labelDescription = new QLabel(scrollContents);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelDescription->sizePolicy().hasHeightForWidth());
        labelDescription->setSizePolicy(sizePolicy1);
        labelDescription->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelDescription, 0, 1, 1, 1);

        labelEndTime = new QLabel(scrollContents);
        labelEndTime->setObjectName(QStringLiteral("labelEndTime"));
        labelEndTime->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelEndTime, 0, 2, 1, 1);

        timeEdit = new QTimeEdit(scrollContents);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 1, 0, 1, 1);

        lineEdit = new QLineEdit(scrollContents);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        timeEdit_2 = new QTimeEdit(scrollContents);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        gridLayout->addWidget(timeEdit_2, 1, 2, 1, 1);

        scrollArea->setWidget(scrollContents);

        verticalLayout->addWidget(scrollArea);

        Scheduler3GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Scheduler3GUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        Scheduler3GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Scheduler3GUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Scheduler3GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Scheduler3GUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Scheduler3GUIClass->setStatusBar(statusBar);

        retranslateUi(Scheduler3GUIClass);

        QMetaObject::connectSlotsByName(Scheduler3GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Scheduler3GUIClass)
    {
        Scheduler3GUIClass->setWindowTitle(QApplication::translate("Scheduler3GUIClass", "Scheduler3GUI", 0));
        addTask->setText(QApplication::translate("Scheduler3GUIClass", "Add Task", 0));
        enter->setText(QApplication::translate("Scheduler3GUIClass", "Enter", 0));
        labelInitTime->setText(QApplication::translate("Scheduler3GUIClass", "Initial Time", 0));
        labelDescription->setText(QApplication::translate("Scheduler3GUIClass", "Task Description", 0));
        labelEndTime->setText(QApplication::translate("Scheduler3GUIClass", "End Time", 0));
    } // retranslateUi

};

namespace Ui {
    class Scheduler3GUIClass: public Ui_Scheduler3GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULER3GUI_H
