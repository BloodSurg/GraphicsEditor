/********************************************************************************
** Form generated from reading UI file 'Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANVAS_H
#define UI_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Canvas
{
public:

    void setupUi(QLabel *Canvas)
    {
        if (Canvas->objectName().isEmpty())
            Canvas->setObjectName(QString::fromUtf8("Canvas"));
        Canvas->resize(400, 300);

        retranslateUi(Canvas);

        QMetaObject::connectSlotsByName(Canvas);
    } // setupUi

    void retranslateUi(QLabel *Canvas)
    {
        Canvas->setWindowTitle(QCoreApplication::translate("Canvas", "Canvas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Canvas: public Ui_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVAS_H
