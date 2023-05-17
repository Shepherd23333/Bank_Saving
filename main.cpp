#include "stdafx.h"
#include "bank_saving.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bank_saving w;
    w.show();
    return a.exec();
}
