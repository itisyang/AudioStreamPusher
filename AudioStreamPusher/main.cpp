#include "audiostreampusher.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AudioStreamPusher w;
    w.show();
    return a.exec();
}
