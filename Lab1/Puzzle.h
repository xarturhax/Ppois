#ifndef PUZZLE_H
#define PUZZLE_H

#include <vector>

using namespace std;
const unsigned short NEW_SIZE = 4;

class NewGameBoard {
public:
    NewGameBoard();
    void initializeCorrectBoard();
    void initializeGameBoard();
    bool validateBoard() const;
    void shiftUp();
    void shiftDown();
    void shiftRight();
    void shiftLeft();
    void show() const;
    void receiveDirection();
    const vector<vector<int>>& getCorrectBoard() const;
    void displayGameBoard() const;
    void displayCorrectBoard() const;

private:
    struct Position {
        unsigned x;
        unsigned y;
    } emptyCell;

    vector<vector<int>> gameBoard;
    vector<vector<int>> correctBoard;
};

#endif

