//
// Created by upupu on 29/02/2020.
//

#include <QtWidgets/QHBoxLayout>
#include "LabeledTextField.h"

LabeledTextField::LabeledTextField() {
    this->label = new QLabel;
    this->textEdit = new QTextEdit;
    auto layout = new QHBoxLayout;
    layout->addWidget(this->label);
    layout->addWidget(this->textEdit);
    this->setLayout(layout);
    this->textEdit->setMaximumHeight(70);
}
