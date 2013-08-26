#include <QtWidgets>

#include "DiskUsage.h"

DiskUsage::DiskUsage() {
    pathLineEdit = new QLineEdit;
    browseButton = new QPushButton(tr("Browse..."));
    generateButton = new QPushButton(tr("Generate"));

    pathGroupBoxLayout = new QHBoxLayout;
    pathGroupBoxLayout->addWidget(pathLineEdit);
    pathGroupBoxLayout->addWidget(browseButton);
    pathGroupBoxLayout->addWidget(generateButton);

    pathGroupBox = new QGroupBox(tr("Path"));
    pathGroupBox->setLayout(pathGroupBoxLayout);
    pathGroupBox->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);

    chartGroupBox = new QGroupBox(tr("Chart"));

    mainLayout = new QVBoxLayout;
    mainLayout->addWidget(pathGroupBox);
    mainLayout->addWidget(chartGroupBox);

    setLayout(mainLayout);

    connect(browseButton, SIGNAL(clicked()), this, SLOT(browse()));
    connect(generateButton, SIGNAL(clicked()), this, SLOT(generate()));
}

void DiskUsage::browse() {
    QString filePath = QFileDialog::getExistingDirectory();

    if (!filePath.isEmpty()) {
        pathLineEdit->setText(filePath);
    }
}

void DiskUsage::generate() {
    if (pathLineEdit->text().isEmpty()) {
        QMessageBox::warning(this, tr("Warning"), tr("The directory path is empty."));
        return;
    }

    QDir dir(pathLineEdit->text());

    if (!dir.exists()) {
        QMessageBox::warning(this, tr("Warning"), tr("Can't find the specified directory."));
        return;
    }
}
