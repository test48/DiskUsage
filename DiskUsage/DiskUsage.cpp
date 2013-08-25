#include <QtWidgets>

#include "DiskUsage.h"

DiskUsage::DiskUsage() {
    pathLineEdit = new QLineEdit;
    generateButton = new QPushButton(tr("Generate"));

    pathGroupBoxLayout = new QHBoxLayout;
    pathGroupBoxLayout->addWidget(pathLineEdit);
    pathGroupBoxLayout->addWidget(generateButton);

    pathGroupBox = new QGroupBox(tr("Path"));
    pathGroupBox->setLayout(pathGroupBoxLayout);
    pathGroupBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

    chartGroupBox = new QGroupBox(tr("Chart"));

    mainLayout = new QVBoxLayout;
    mainLayout->addWidget(pathGroupBox);
    mainLayout->addWidget(chartGroupBox);

    setLayout(mainLayout);
}
