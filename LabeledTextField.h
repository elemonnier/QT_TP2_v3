//
// Created by upupu on 29/02/2020.
//

#ifndef QT_TP2_LABELEDTEXTFIELD_H
#define QT_TP2_LABELEDTEXTFIELD_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include "ConfigurationDialog.h"

class LabeledTextField : public QWidget {
private:
    QLabel* label;
    QTextEdit* textEdit;
public:
    LabeledTextField(const QString = " ", QWidget* parent = nullptr);
};


#endif //QT_TP2_LABELEDTEXTFIELD_H
