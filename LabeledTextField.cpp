#include <QtWidgets/QHBoxLayout>
#include "LabeledTextField.h"

LabeledTextField::LabeledTextField(const QString text, QWidget* parent) : QWidget(parent) {
    this->label = new QLabel;
    this->textEdit = new QTextEdit;
    auto layout = new QHBoxLayout;
    this->label->setText(text);
    layout->addWidget(this->label);
    layout->addWidget(this->textEdit);
    this->setLayout(layout);
    this->textEdit->setMaximumHeight(70);
}