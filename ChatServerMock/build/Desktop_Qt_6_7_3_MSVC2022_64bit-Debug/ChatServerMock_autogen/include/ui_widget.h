/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 110, 241, 51));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(410, 110, 241, 51));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(410, 180, 241, 51));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(410, 250, 241, 51));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(410, 320, 241, 51));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(410, 390, 241, 51));
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(110, 180, 241, 51));
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(110, 250, 241, 51));
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(110, 320, 241, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\346\234\254\346\266\210\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\351\200\232\347\237\245\345\245\275\345\217\213\345\210\240\351\231\244", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\351\200\232\347\237\245\345\245\275\345\217\213\347\224\263\350\257\267", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\351\200\232\347\237\245\345\220\214\346\204\217\345\245\275\345\217\213\347\224\263\350\257\267", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\351\200\232\347\237\245\346\213\222\347\273\235\345\245\275\345\217\213\347\224\263\350\257\267", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "\351\200\232\347\237\245\344\274\232\350\257\235\345\210\233\345\273\272", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\345\233\276\347\211\207\346\266\210\346\201\257", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\344\273\266\346\266\210\346\201\257", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\350\257\255\351\237\263\346\266\210\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
