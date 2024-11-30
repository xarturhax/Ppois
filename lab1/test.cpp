#include "pch.h"
#include "C:\Users\user\source\repos\Ppois1\Ppois1\functions.cpp"

vector<int> in_game_map(SIZE);
vector<vector<int>> game_map(SIZE, in_game_map);

vector<int> in_right_map(SIZE);
vector<vector<int>> right_map(SIZE, in_right_map);

coordinate zero;

TEST(CreateRightMapTest, ValidInitialization) {
    create_right_map();

    unsigned expected_value = 1;
    for (unsigned i = 0; i < SIZE; i++) {
        for (unsigned j = 0; j < SIZE; j++) {
            if (i == SIZE - 1 && j == SIZE - 1) {
                EXPECT_EQ(right_map[i][j], 0); // ��������� ������� ������ ���� 0
            }
            else {
                EXPECT_EQ(right_map[i][j], expected_value++); // ��������� ���������������� ��������
            }
        }
    }
}

TEST(CreateGameMapTest, ValidInitialization) {
    create_game_map();

    // ���������, ��� ��� ����� �� 0 �� SIZE*SIZE-1 ������������
    vector<int> found(SIZE * SIZE, 0);
    for (unsigned i = 0; i < SIZE; i++) {
        for (unsigned j = 0; j < SIZE; j++) {
            found[game_map[i][j]]++;
        }
    }

    for (unsigned i = 0; i < SIZE * SIZE; i++) {
        EXPECT_EQ(found[i], 1); // ������ ����� ������ ���������� ������ ���� ���
    }
}

TEST(CheckMapTest, GameMapMatchesRightMap) {
    create_right_map();
    game_map = right_map;

    EXPECT_TRUE(check_map()); // ����� ���������
}

TEST(CheckMapTest, GameMapDoesNotMatchRightMap) {
    create_right_map();
    create_game_map();

    EXPECT_FALSE(check_map()); // ����� �� ���������
}

TEST(MoveTests, UpMove) {
    create_game_map();
    zero = { 1, 1 }; // ������������� "����" �� ������� (1, 1)
    game_map[1][1] = 0;
    game_map[2][1] = 5; // ������������� �������� ���� "����"

    up_move();

    EXPECT_EQ(game_map[1][1], 5); // �������� ������ ������������� �����
    EXPECT_EQ(game_map[2][1], 0); // ���� ������ ������������� ����
    EXPECT_EQ(zero.y, 2);         // ���������� y �������������
    EXPECT_EQ(zero.x, 1);         // ���������� x �������� �������
}

TEST(MoveTests, DownMove) {
    create_game_map();
    zero = { 1, 2 }; // ������������� "����" �� ������� (1, 2)
    game_map[2][1] = 0;
    game_map[1][1] = 5; // ������������� �������� ���� "����"

    down_move();

    EXPECT_EQ(game_map[1][1], 0); // ���� ������ ������������� �����
    EXPECT_EQ(game_map[2][1], 5); // �������� ������ ������������� ����
    EXPECT_EQ(zero.y, 1);         // ���������� y �����������
    EXPECT_EQ(zero.x, 1);         // ���������� x �������� �������
}

TEST(MoveTests, RightMove) {
    create_game_map();
    zero = { 1, 1 }; // ������������� "����" �� ������� (1, 1)
    game_map[1][1] = 0;
    game_map[1][0] = 5; // ������������� �������� ����� �� "����"

    right_move();

    EXPECT_EQ(game_map[1][1], 5); // �������� ������ ������������� ������
    EXPECT_EQ(game_map[1][0], 0); // ���� ������ ������������� �����
    EXPECT_EQ(zero.x, 0);         // ���������� x �����������
    EXPECT_EQ(zero.y, 1);         // ���������� y �������� �������
}

TEST(MoveTests, LeftMove) {
    create_game_map();
    zero = { 1, 1 }; // ������������� "����" �� ������� (1, 1)
    game_map[1][1] = 0;
    game_map[1][2] = 5; // ������������� �������� ������ �� "����"

    left_move();

    EXPECT_EQ(game_map[1][1], 5); // �������� ������ ������������� �����
    EXPECT_EQ(game_map[1][2], 0); // ���� ������ ������������� ������
    EXPECT_EQ(zero.x, 2);         // ���������� x �������������
    EXPECT_EQ(zero.y, 1);         // ���������� y �������� �������
}

TEST(ScreenTest, OutputFormat) {
    create_game_map();

    testing::internal::CaptureStdout();
    screen();
    string output = testing::internal::GetCapturedStdout();

    // ���������, ��� ����� �������� ���������� ���������� ����� � ��������
    unsigned rows = count(output.begin(), output.end(), '\n');
    EXPECT_EQ(rows, SIZE);

    unsigned cols = 0;
    for (unsigned i = 0; i < output.size(); i++) {
        if (output[i] == '\n') {
            break;
        }
        if (output[i] == ' ') {
            cols++;
        }
    }
    EXPECT_EQ(cols / 2, SIZE); // ���������, ��� ������ ������ ���������� ��������
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}