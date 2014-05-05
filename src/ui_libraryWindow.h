/********************************************************************************
** Form generated from reading UI file 'libraryWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYWINDOW_H
#define UI_LIBRARYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LibraryWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addSourceButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *LibraryWindow)
    {
        if (LibraryWindow->objectName().isEmpty())
            LibraryWindow->setObjectName(QStringLiteral("LibraryWindow"));
        LibraryWindow->resize(392, 512);
        verticalLayout_2 = new QVBoxLayout(LibraryWindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(LibraryWindow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        tableWidget = new QTableWidget(LibraryWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addSourceButton = new QPushButton(LibraryWindow);
        addSourceButton->setObjectName(QStringLiteral("addSourceButton"));

        horizontalLayout_2->addWidget(addSourceButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(LibraryWindow);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(LibraryWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(LibraryWindow);

        QMetaObject::connectSlotsByName(LibraryWindow);
    } // setupUi

    void retranslateUi(QDialog *LibraryWindow)
    {
        LibraryWindow->setWindowTitle(QApplication::translate("LibraryWindow", "Dialog", 0));
        label->setText(QApplication::translate("LibraryWindow", "Manage Library", 0));
        addSourceButton->setText(QApplication::translate("LibraryWindow", "Add Source", 0));
        okButton->setText(QApplication::translate("LibraryWindow", "Ok", 0));
        cancelButton->setText(QApplication::translate("LibraryWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class LibraryWindow: public Ui_LibraryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYWINDOW_H
