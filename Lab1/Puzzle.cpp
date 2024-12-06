#include "Puzzle.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>

using std::vector;
using std::cout;

NewGameBoard::NewGameBoard() : gameBoard(NEW_SIZE, vector<int>(NEW_SIZE)), correctBoard(NEW_SIZE, vector<int>(NEW_SIZE)) {
    initializeCorrectBoard();
}

void NewGameBoard::initializeCorrectBoard() {
    unsigned correctValue = 1;
    for (unsigned i = 0; i < NEW_SIZE; ++i) {
        for (unsigned j = 0; j < NEW_SIZE; ++j) {
            correctBoard[i][j] = correctValue++;
        }
    }
    correctBoard[NEW_SIZE - 1][NEW_SIZE - 1] = 0;
}

const std::vector<std::vector<int>>& NewGameBoard::getCorrectBoard() const {
    return correctBoard;
}

bool NewGameBoard::validateBoard() const {
    bool result = (gameBoard == correctBoard);
    if (!result)
        return result;
}

void NewGameBoard::displayGameBoard() const {
    std::cout << "GameBoard:\n";
    for (const auto& row : gameBoard) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}

void NewGameBoard::displayCorrectBoard() const {
    std::cout << "CorrectBoard:\n";
    for (const auto& row : correctBoard) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}

void NewGameBoard::initializeGameBoard() {
    unsigned limit = NEW_SIZE * NEW_SIZE;
    vector<int> tempVector(limit);
    for (unsigned i = 0; i < limit; ++i) {
        tempVector[i] = i;
    }

    int value;
    for (unsigned i = 0; i < NEW_SIZE; ++i) {
        for (unsigned j = 0; j < NEW_SIZE; ++j) {
            value = rand() % limit--;
            gameBoard[i][j] = tempVector[value];
            if (tempVector[value] == 0) {
                emptyCell.x = j;
                emptyCell.y = i;
            }
            tempVector.erase(tempVector.begin() + value);
        }
    }
}

void NewGameBoard::shiftUp() {
    if (emptyCell.y < NEW_SIZE - 1) {
        std::swap(gameBoard[emptyCell.y][emptyCell.x], gameBoard[emptyCell.y + 1][emptyCell.x]);
        emptyCell.y++;
    }
}

void NewGameBoard::shiftDown() {
    if (emptyCell.y > 0) {
        std::swap(gameBoard[emptyCell.y][emptyCell.x], gameBoard[emptyCell.y - 1][emptyCell.x]);
        emptyCell.y--;
    }
}

void NewGameBoard::shiftRight() {
    if (emptyCell.x > 0) {
        std::swap(gameBoard[emptyCell.y][emptyCell.x], gameBoard[emptyCell.y][emptyCell.x - 1]);
        emptyCell.x--;
    }
}

void NewGameBoard::shiftLeft() {
    if (emptyCell.x < NEW_SIZE - 1) {
        std::swap(gameBoard[emptyCell.y][emptyCell.x], gameBoard[emptyCell.y][emptyCell.x + 1]);
        emptyCell.x++;
    }
}

void NewGameBoard::show() const {
    system("cls");
    for (const auto& row : gameBoard) {
        for (const auto& val : row) {
            if (val != 0)
                cout << std::setw(2) << std::setfill('0') << val << ' ';
            else
                cout << "** ";
        }
        cout << '\n';
    }
}

void NewGameBoard::receiveDirection() {
    int move = static_cast<int>(_getch());
    switch (move) {
    case 72: shiftUp(); break;
    case 80: shiftDown(); break;
    case 77: shiftRight(); break;
    case 75: shiftLeft(); break;
    case 114: initializeGameBoard(); break;
    case 27: exit(0); break;
    default: receiveDirection(); break;
    }
}
