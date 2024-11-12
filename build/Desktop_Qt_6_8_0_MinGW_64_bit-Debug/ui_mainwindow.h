/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *SoundVolume;
    QWidget *BtnContainer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Open_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *Play_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Pause_btn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Stop_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        SoundVolume = new QSlider(centralwidget);
        SoundVolume->setObjectName("SoundVolume");
        SoundVolume->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(SoundVolume, 1, 0, 1, 1);

        BtnContainer = new QWidget(centralwidget);
        BtnContainer->setObjectName("BtnContainer");
        BtnContainer->setMaximumSize(QSize(16777215, 80));
        horizontalLayout = new QHBoxLayout(BtnContainer);
        horizontalLayout->setObjectName("horizontalLayout");
        Open_btn = new QPushButton(BtnContainer);
        Open_btn->setObjectName("Open_btn");

        horizontalLayout->addWidget(Open_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Play_btn = new QPushButton(BtnContainer);
        Play_btn->setObjectName("Play_btn");

        horizontalLayout->addWidget(Play_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Pause_btn = new QPushButton(BtnContainer);
        Pause_btn->setObjectName("Pause_btn");

        horizontalLayout->addWidget(Pause_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        Stop_btn = new QPushButton(BtnContainer);
        Stop_btn->setObjectName("Stop_btn");

        horizontalLayout->addWidget(Stop_btn);


        gridLayout->addWidget(BtnContainer, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        Open_btn->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        Play_btn->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        Pause_btn->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        Stop_btn->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
