#include <QApplication>

#include "DiskUsage.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    DiskUsage window;
    window.show();

    return app.exec();
}
