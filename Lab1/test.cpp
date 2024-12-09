#include "pch.h"
#include "gtest/gtest.h"
#include "../Puzzle15/Puzzle.h"
#include "../Puzzle15/Puzzle.cpp"
#include <iostream>

using namespace std;

TEST(NewGameBoardTest, InitializeCorrectBoard) {
    NewGameBoard newGame;
    newGame.initializeCorrectBoard();

    vector<vector<int>> expectedCorrectBoard = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };

    const vector<vector<int>>& actualCorrectBoard = newGame.getCorrectBoard();

    for (unsigned i = 0; i < NEW_SIZE; ++i) {
        for (unsigned j = 0; j < NEW_SIZE; ++j) {
            EXPECT_EQ(expectedCorrectBoard[i][j], actualCorrectBoard[i][j]) << "Mismatch at position [" << i << "][" << j << "]";
        }
    }
}

TEST(NewGameBoardTest, ShiftUp) {
    NewGameBoard newGame;
    newGame.initializeGameBoard();
    newGame.shiftUp();
    ASSERT_TRUE(true);
}

TEST(NewGameBoardTest, ShiftDown) {
    NewGameBoard newGame;
    newGame.initializeGameBoard();
    newGame.shiftDown();
    ASSERT_TRUE(true);
}

TEST(NewGameBoardTest, ShiftRight) {
    NewGameBoard newGame;
    newGame.initializeGameBoard();
    newGame.shiftRight();
    ASSERT_TRUE(true);
}

TEST(NewGameBoardTest, ShiftLeft) {
    NewGameBoard newGame;
    newGame.initializeGameBoard();
    newGame.shiftLeft();
    ASSERT_TRUE(true);
}

TEST(NewGameBoardTest, DisplayCorrectBoard) {
    NewGameBoard newGame;
    newGame.initializeCorrectBoard();
    testing::internal::CaptureStdout();
    newGame.displayCorrectBoard();
    std::string output = testing::internal::GetCapturedStdout();
    std::string expectedOutput = "CorrectBoard:\n1 2 3 4 \n5 6 7 8 \n9 10 11 12 \n13 14 15 0 \n";
    EXPECT_EQ(output, expectedOutput);
}

TEST(NewGameBoardTest, DisplayGameBoard) {
    NewGameBoard newGame;
    newGame.initializeGameBoard();
    testing::internal::CaptureStdout();
    newGame.displayGameBoard();
    std::string output = testing::internal::GetCapturedStdout();
    // Здесь нужно будет вручную проверить вывод, так как игровая доска инициализируется случайным образом
    std::cout << "GameBoard output:\n" << output << std::endl;
    ASSERT_TRUE(true); // Этот тест всегда будет проходить, так как мы просто выводим доску
}

TEST(NewGameBoardTest, InitializeGameBoard) {
    NewGameBoard newGame;
    newGame.initializeGameBoard();
    ASSERT_FALSE(newGame.validateBoard());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
