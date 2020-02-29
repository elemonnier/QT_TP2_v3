#include <QtWidgets/QVBoxLayout>
#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel() {
    this->configureButton = new QPushButton("Configure", this);
    this->connectButton = new QPushButton("Connect", this);
    this->disconnectButton = new QPushButton("Disconnect", this);
    auto layout = new QHBoxLayout;
    layout->addWidget(this->configureButton);
    layout->addWidget(this->connectButton);
    layout->addWidget(this->disconnectButton);
    this->setLayout(layout);
}