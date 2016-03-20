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

    while(!userWin || !pcWin)
    {
        pcVar = pcVarArr[rand() % 2];

        cout << "\nEnter Rock, Scissors or Paper: ";

        cin >> userVar;
    }

    return a.exec();
}
