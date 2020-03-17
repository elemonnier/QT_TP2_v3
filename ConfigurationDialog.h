//
// Created by upupu on 29/02/2020.
//

#ifndef QT_TP2_CONFIGURATIONDIALOG_H
#define QT_TP2_CONFIGURATIONDIALOG_H


#include <QtWidgets/QDialog>
#include "LabeledTextField.h"

class ConfigurationDialog : QDialog{
private:
    LabeledTextField* tf1;
    LabeledTextField* tf2;
    LabeledTextField* tf3;
public:
    ConfigurationDialog(QDialog* = nullptr);
};


#endif //QT_TP2_CONFIGURATIONDIALOG_H