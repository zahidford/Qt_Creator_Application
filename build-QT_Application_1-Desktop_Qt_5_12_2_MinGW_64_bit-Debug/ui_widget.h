/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(400, 300);
        centralWidget = new QWidget(widget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 110, 75, 23));
        widget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(widget);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        widget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(widget);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        widget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(widget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        widget->setStatusBar(statusBar);

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QMainWindow *widget)
    {
        widget->setWindowTitle(QApplication::translate("widget", "widget", nullptr));
        pushButton->setText(QApplication::translate("widget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
