// Rock paper sissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using std::cout;
using std::cin;

char GetUserChoice();
char GetComputerCoice();
void ShowChoice(char choice);
void ShowWinner(char player, char computer);



int main()
{
    char player;
    char computer;

    do {
        player = GetUserChoice();
        if (player == 'e') {
            cout << "Bye Bye :) \n";

        }
        else {
            cout << "your choice: ";
            ShowChoice(player);
            computer = GetComputerCoice();
            cout << "computer's choice: ";
            ShowChoice(computer);


            ShowWinner(player, computer);
        }
    } while (player != 'e');

    return 0;
}


char GetUserChoice() {

    char choice;
    
    
    
    do {
        cout << "Rock-Paper-Scissors Game \n";
        cout << " 'r' for Rock \n";
        cout << " 'p' for Paper \n";
        cout << " 's' for Scissors \n";
        cout << " 'e' to exit \n";


        cin >> choice;
        cin.get();

    } while (choice != 'r' && choice != 'p' && choice != 's' && choice != 'e');
    
    
    return choice;

}

char GetComputerCoice() {

    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num) {
    case 1: return 'r';

    case 2: return 'p';

    case 3: return 's';

    }
    return 0;

}

void ShowChoice(char choice) {

    switch (choice) {
        case 'r': cout << "Rock \n";
            break;

        case 'p': cout << "Paper \n";
            break;

        case 's': cout << "Scissors \n";
            break;

    }
}

void ShowWinner(char player, char computer) {

    switch (player) {
        case 'r': if (computer == 'r') {
                    cout << "it's a tie! \n";
                  }
                else if (computer == 'p'){
                    cout << "You Lose! \n";
                }
                else {
                    cout << "You Win! \n";
                }
                break;
        case 'p': if (computer == 'p') {
                    cout << "it's a tie! \n";
                }
                else if (computer == 's') {
                    cout << "You Lose! \n";
                }
                else {
                    cout << "You Win! \n";
                }
                break;
        case 's': if (computer == 's') {
                    cout << "it's a tie! \n";
                }
                else if (computer == 'r') {
                    cout << "You Lose! \n";
                }
                else {
                    cout << "You Win! \n";
                }
                break;

    }
}




