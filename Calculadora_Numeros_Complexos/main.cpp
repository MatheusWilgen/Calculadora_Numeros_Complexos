#include "Janela_Principal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Janela_Principal w;
    w.show();
    return a.exec();
}
