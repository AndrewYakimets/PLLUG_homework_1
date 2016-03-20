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


        if (userVar == "Rock" && pcVar == "Scissors" || userVar == "Paper" && pcVar == "Rock" || userVar == "Scissors" && pcVar == "Paper")
        {
            cout << "You win!\n" << endl;
            !userWin;
            return a.closingDown();
        }
        else if (pcVar == "Rock" && userVar == "Scissors" || pcVar == "Paper" && userVar == "Rock" || pcVar == "Scissors" && userVar == "Paper")
        {
            cout << "Looser!\n" << endl;
            !pcWin;
            return a.closingDown();
        }
        else
        {
            cout << "Please, input only 'Rock', 'Scissors' or 'Paper'!\n" << endl;
        }
    }

    return a.exec();
}
