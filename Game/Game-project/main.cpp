#include <QCoreApplication>
#include <iostream>
#include <QString>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string userVar = "";
    string pcVarArr[] = {"Rock", "Scissors", "Paper"};
    string pcVar = pcVarArr[rand() % 2];
    bool userWin = false;
    bool pcWin = false;

    return a.exec();
}
