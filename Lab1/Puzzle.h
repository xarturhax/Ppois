#ifndef PUZZLE_H
#define PUZZLE_H

#include <vector>

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
    const std::vector<std::vector<int>>& getCorrectBoard() const;
    void displayGameBoard() const;
    void displayCorrectBoard() const;

private:
    struct Position {
        unsigned x;
        unsigned y;
    } emptyCell;

    std::vector<std::vector<int>> gameBoard;
    std::vector<std::vector<int>> correctBoard;
};

#endif

