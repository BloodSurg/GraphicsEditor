/********************************************************************************
** Form generated from reading UI file 'GraphicsEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSEDITOR_H
#define UI_GRAPHICSEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "canvas.h"
#include "colorlabel.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicsEditorClass
{
public:
    QWidget *centralWidget;
    Canvas *canvas;
    ColorLabel *labelBaseColor;
    ColorLabel *labelBackgroundColor;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *colors;
    QGroupBox *groupTools;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *buttonPencil;
    QRadioButton *buttonBrush;
    QRadioButton *buttonLine;
    QRadioButton *buttonRectangle;
    QRadioButton *buttonEllipse;
    QRadioButton *buttonAirbrush;
    QSpacerItem *verticalSpacer;
    QRadioButton *buttonFill;
    QRadioButton *buttonColorPicker;
    QRadioButton *buttonEraser;
    QGroupBox *groupBrushPatterns;
    QWidget *gridLayoutWidget_2;
    QGridLayout *layoutBrushPatterns;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_5px;
    QRadioButton *radioButton_2px;
    QRadioButton *radioButton_1px;
    QSpinBox *spinBox;
    QRadioButton *radioButton_3px;
    QRadioButton *radioButton_10px;
    QRadioButton *radioButton_custom;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *GraphicsEditorClass)
    {
        if (GraphicsEditorClass->objectName().isEmpty())
            GraphicsEditorClass->setObjectName(QString::fromUtf8("GraphicsEditorClass"));
        GraphicsEditorClass->resize(811, 571);
        centralWidget = new QWidget(GraphicsEditorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        canvas = new Canvas(centralWidget);
        canvas->setObjectName(QString::fromUtf8("canvas"));
        canvas->setGeometry(QRect(0, 0, 640, 480));
        canvas->setFrameShape(QFrame::Box);
        canvas->setFrameShadow(QFrame::Plain);
        canvas->setLineWidth(1);
        canvas->setMidLineWidth(0);
        labelBaseColor = new ColorLabel(centralWidget);
        labelBaseColor->setObjectName(QString::fromUtf8("labelBaseColor"));
        labelBaseColor->setGeometry(QRect(10, 500, 21, 21));
        labelBaseColor->setMinimumSize(QSize(21, 21));
        labelBaseColor->setMaximumSize(QSize(21, 21));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        labelBaseColor->setPalette(palette);
        labelBaseColor->setAutoFillBackground(true);
        labelBaseColor->setFrameShape(QFrame::Box);
        labelBackgroundColor = new ColorLabel(centralWidget);
        labelBackgroundColor->setObjectName(QString::fromUtf8("labelBackgroundColor"));
        labelBackgroundColor->setGeometry(QRect(20, 510, 21, 21));
        labelBackgroundColor->setMinimumSize(QSize(21, 21));
        labelBackgroundColor->setMaximumSize(QSize(21, 21));
        labelBackgroundColor->setAutoFillBackground(true);
        labelBackgroundColor->setFrameShape(QFrame::Box);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1, 491, 51, 51));
        label->setAutoFillBackground(true);
        label->setFrameShape(QFrame::Box);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 490, 131, 51));
        colors = new QGridLayout(gridLayoutWidget);
        colors->setSpacing(6);
        colors->setContentsMargins(11, 11, 11, 11);
        colors->setObjectName(QString::fromUtf8("colors"));
        colors->setContentsMargins(0, 0, 0, 0);
        groupTools = new QGroupBox(centralWidget);
        groupTools->setObjectName(QString::fromUtf8("groupTools"));
        groupTools->setGeometry(QRect(650, 0, 151, 211));
        verticalLayout_2 = new QVBoxLayout(groupTools);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        buttonPencil = new QRadioButton(groupTools);
        buttonGroup = new QButtonGroup(GraphicsEditorClass);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(buttonPencil);
        buttonPencil->setObjectName(QString::fromUtf8("buttonPencil"));
        buttonPencil->setChecked(true);

        verticalLayout_2->addWidget(buttonPencil);

        buttonBrush = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonBrush);
        buttonBrush->setObjectName(QString::fromUtf8("buttonBrush"));

        verticalLayout_2->addWidget(buttonBrush);

        buttonLine = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonLine);
        buttonLine->setObjectName(QString::fromUtf8("buttonLine"));

        verticalLayout_2->addWidget(buttonLine);

        buttonRectangle = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonRectangle);
        buttonRectangle->setObjectName(QString::fromUtf8("buttonRectangle"));

        verticalLayout_2->addWidget(buttonRectangle);

        buttonEllipse = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonEllipse);
        buttonEllipse->setObjectName(QString::fromUtf8("buttonEllipse"));

        verticalLayout_2->addWidget(buttonEllipse);

        buttonAirbrush = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonAirbrush);
        buttonAirbrush->setObjectName(QString::fromUtf8("buttonAirbrush"));

        verticalLayout_2->addWidget(buttonAirbrush);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonFill = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonFill);
        buttonFill->setObjectName(QString::fromUtf8("buttonFill"));

        verticalLayout_2->addWidget(buttonFill);

        buttonColorPicker = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonColorPicker);
        buttonColorPicker->setObjectName(QString::fromUtf8("buttonColorPicker"));

        verticalLayout_2->addWidget(buttonColorPicker);

        buttonEraser = new QRadioButton(groupTools);
        buttonGroup->addButton(buttonEraser);
        buttonEraser->setObjectName(QString::fromUtf8("buttonEraser"));

        verticalLayout_2->addWidget(buttonEraser);

        groupBrushPatterns = new QGroupBox(centralWidget);
        groupBrushPatterns->setObjectName(QString::fromUtf8("groupBrushPatterns"));
        groupBrushPatterns->setGeometry(QRect(650, 220, 91, 171));
        gridLayoutWidget_2 = new QWidget(groupBrushPatterns);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 71, 141));
        layoutBrushPatterns = new QGridLayout(gridLayoutWidget_2);
        layoutBrushPatterns->setSpacing(6);
        layoutBrushPatterns->setContentsMargins(11, 11, 11, 11);
        layoutBrushPatterns->setObjectName(QString::fromUtf8("layoutBrushPatterns"));
        layoutBrushPatterns->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(650, 220, 151, 171));
        gridLayoutWidget_3 = new QWidget(groupBox);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 131, 151));
        gridLayout = new QGridLayout(gridLayoutWidget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_5px = new QRadioButton(gridLayoutWidget_3);
        radioButton_5px->setObjectName(QString::fromUtf8("radioButton_5px"));

        gridLayout->addWidget(radioButton_5px, 3, 0, 1, 1);

        radioButton_2px = new QRadioButton(gridLayoutWidget_3);
        radioButton_2px->setObjectName(QString::fromUtf8("radioButton_2px"));

        gridLayout->addWidget(radioButton_2px, 1, 0, 1, 1);

        radioButton_1px = new QRadioButton(gridLayoutWidget_3);
        radioButton_1px->setObjectName(QString::fromUtf8("radioButton_1px"));
        radioButton_1px->setChecked(true);

        gridLayout->addWidget(radioButton_1px, 0, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setValue(15);

        gridLayout->addWidget(spinBox, 5, 1, 1, 1);

        radioButton_3px = new QRadioButton(gridLayoutWidget_3);
        radioButton_3px->setObjectName(QString::fromUtf8("radioButton_3px"));

        gridLayout->addWidget(radioButton_3px, 2, 0, 1, 1);

        radioButton_10px = new QRadioButton(gridLayoutWidget_3);
        radioButton_10px->setObjectName(QString::fromUtf8("radioButton_10px"));

        gridLayout->addWidget(radioButton_10px, 4, 0, 1, 1);

        radioButton_custom = new QRadioButton(gridLayoutWidget_3);
        radioButton_custom->setObjectName(QString::fromUtf8("radioButton_custom"));

        gridLayout->addWidget(radioButton_custom, 5, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 2, 1, 1);

        GraphicsEditorClass->setCentralWidget(centralWidget);
        label->raise();
        labelBackgroundColor->raise();
        canvas->raise();
        gridLayoutWidget->raise();
        labelBaseColor->raise();
        groupTools->raise();
        groupBrushPatterns->raise();
        groupBox->raise();
        menuBar = new QMenuBar(GraphicsEditorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 811, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        GraphicsEditorClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());

        retranslateUi(GraphicsEditorClass);

        QMetaObject::connectSlotsByName(GraphicsEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *GraphicsEditorClass)
    {
        GraphicsEditorClass->setWindowTitle(QCoreApplication::translate("GraphicsEditorClass", "GraphicsEditor", nullptr));
        canvas->setText(QString());
        labelBaseColor->setText(QString());
        labelBackgroundColor->setText(QString());
        label->setText(QString());
        groupTools->setTitle(QCoreApplication::translate("GraphicsEditorClass", "Tools", nullptr));
        buttonPencil->setText(QCoreApplication::translate("GraphicsEditorClass", "Pencil", nullptr));
        buttonBrush->setText(QCoreApplication::translate("GraphicsEditorClass", "Brush", nullptr));
        buttonLine->setText(QCoreApplication::translate("GraphicsEditorClass", "Line", nullptr));
        buttonRectangle->setText(QCoreApplication::translate("GraphicsEditorClass", "Rectangle", nullptr));
        buttonEllipse->setText(QCoreApplication::translate("GraphicsEditorClass", "Ellipse", nullptr));
        buttonAirbrush->setText(QCoreApplication::translate("GraphicsEditorClass", "Airbrush", nullptr));
        buttonFill->setText(QCoreApplication::translate("GraphicsEditorClass", "Fill", nullptr));
        buttonColorPicker->setText(QCoreApplication::translate("GraphicsEditorClass", "Color picker", nullptr));
        buttonEraser->setText(QCoreApplication::translate("GraphicsEditorClass", "Eraser", nullptr));
        groupBrushPatterns->setTitle(QCoreApplication::translate("GraphicsEditorClass", "Brush patterns", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GraphicsEditorClass", "Size", nullptr));
        radioButton_5px->setText(QCoreApplication::translate("GraphicsEditorClass", "5 px", nullptr));
        radioButton_2px->setText(QCoreApplication::translate("GraphicsEditorClass", "2 px", nullptr));
        radioButton_1px->setText(QCoreApplication::translate("GraphicsEditorClass", "1 px", nullptr));
        radioButton_3px->setText(QCoreApplication::translate("GraphicsEditorClass", "3 px", nullptr));
        radioButton_10px->setText(QCoreApplication::translate("GraphicsEditorClass", "10 px", nullptr));
        radioButton_custom->setText(QCoreApplication::translate("GraphicsEditorClass", "Custom", nullptr));
        label_2->setText(QCoreApplication::translate("GraphicsEditorClass", "px", nullptr));
        menuFile->setTitle(QCoreApplication::translate("GraphicsEditorClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicsEditorClass: public Ui_GraphicsEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSEDITOR_H
