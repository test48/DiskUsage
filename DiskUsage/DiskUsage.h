#ifndef DISKUSAGE_H
#define DISKUSAGE_H

#include <QWidget>

class QCheckBox;
class QGridLayout;
class QGroupBox;
class QLineEdit;
class QPushButton;
class QVBoxLayout;

class DiskUsage : public QWidget {
    Q_OBJECT

public:
    DiskUsage();

private slots:
    void browse();
    void generate();

private:
    QGroupBox *pathGroupBox;
    QLineEdit *pathLineEdit;
    QPushButton *browseButton;
    QPushButton *generateButton;
    QCheckBox *groupByTypeCheckBox;
    QGroupBox *chartGroupBox;

    QGridLayout *pathGroupBoxLayout;
    QVBoxLayout *mainLayout;
};

#endif
