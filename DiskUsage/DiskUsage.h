#ifndef DISKUSAGE_H
#define DISKUSAGE_H

#include <QWidget>

class QCheckBox;
class QGridLayout;
class QGroupBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QStandardItemModel;
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
    QLabel *chartGroupBoxLabel;

    QStandardItemModel *chartModel;

    QGridLayout *pathGroupBoxLayout;
    QVBoxLayout *chartGroupBoxLayout;
    QVBoxLayout *mainLayout;
};

#endif
