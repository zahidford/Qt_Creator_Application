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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *GuessButton;
    QPushButton *StartButton;
    QLabel *messagelabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 90, 191, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(90, 150, 42, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        GuessButton = new QPushButton(Widget);
        GuessButton->setObjectName(QString::fromUtf8("GuessButton"));
        GuessButton->setGeometry(QRect(150, 150, 75, 23));
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(240, 150, 75, 23));
        messagelabel = new QLabel(Widget);
        messagelabel->setObjectName(QString::fromUtf8("messagelabel"));
        messagelabel->setGeometry(QRect(100, 220, 291, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "Guess The Number", nullptr));
        GuessButton->setText(QApplication::translate("Widget", "Guess", nullptr));
        StartButton->setText(QApplication::translate("Widget", "Star Over", nullptr));
        messagelabel->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
