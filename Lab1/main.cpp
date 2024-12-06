#include "Puzzle.h"
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <iostream>

int main() {
    srand(static_cast<int>(time(NULL)));

    NewGameBoard newGame;
    do {
        newGame.initializeGameBoard();
    } while (newGame.validateBoard());

    do {
        newGame.show();
        newGame.receiveDirection();
    } while (!newGame.validateBoard());

    std::cout << "\nYou win!\nGame over!\n";
    _getch();
}
