#ifndef DISKUSAGE_H
#define DISKUSAGE_H

#include <QWidget>

class QGroupBox;
class QHBoxLayout;
class QLineEdit;
class QPushButton;
class QVBoxLayout;

class DiskUsage : public QWidget {
    Q_OBJECT

public:
    DiskUsage();

private:
    QGroupBox *pathGroupBox;
    QLineEdit *pathLineEdit;
    QPushButton *generateButton;
    QGroupBox *chartGroupBox;

    QHBoxLayout *pathGroupBoxLayout;
    QVBoxLayout *mainLayout;
};

#endif
