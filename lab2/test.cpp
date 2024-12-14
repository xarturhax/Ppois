#include "pch.h"
#include <gtest/gtest.h>
#include "../Oceanarium/Employee.h"
#include "../Oceanarium/Fish.h"
#include "../Oceanarium/Aquarium.h"
#include "../Oceanarium/Shark.h"
#include "../Oceanarium/Dolphin.h"
#include "../Oceanarium/ClownFish.h"
#include "../Oceanarium/Tuna.h"
#include "../Oceanarium/Trainer.h"
#include "../Oceanarium/Cleaner.h"
#include "../Oceanarium/Food.h"
#include "../Oceanarium/Ticket.h"
#include "../Oceanarium/Client.h"
#include "../Oceanarium/Show.h"
#include "../Oceanarium/Employee.cpp"
#include "../Oceanarium/Fish.cpp"
#include "../Oceanarium/Aquarium.cpp"
#include "../Oceanarium/Shark.cpp"
#include "../Oceanarium/Dolphin.cpp"
#include "../Oceanarium/ClownFish.cpp"
#include "../Oceanarium/Tuna.cpp"
#include "../Oceanarium/Trainer.cpp"
#include "../Oceanarium/Cleaner.cpp"
#include "../Oceanarium/Food.cpp"
#include "../Oceanarium/Ticket.cpp"
#include "../Oceanarium/Client.cpp"
#include "../Oceanarium/Show.cpp"
#include <iostream>

// ����� ��� ������ Fish
TEST(FishTest, DisplayInfo) {
    Shark shark("������� ����� �����", 5.5, 1500, 7.5);
    testing::internal::CaptureStdout();
    shark.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("������� ����� �����"), std::string::npos);
    EXPECT_NE(output.find("5.5"), std::string::npos);
    EXPECT_NE(output.find("1500"), std::string::npos);
    EXPECT_NE(output.find("7.5"), std::string::npos);
}

// ����� ��� ������ Food
TEST(FoodTest, FeedFish) {
    Food food("���� ��� ���", 2);
    testing::internal::CaptureStdout();
    food.feedFish();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("������: ���� ��� ���"), std::string::npos);
    EXPECT_EQ(food.getQuantity(), 1);
}

// ����� ��� ������ Client
TEST(ClientTest, BuyTicket) {
    Client client("����", 25);
    Ticket ticket("��������", 20.0);
    client.buyTicket(ticket);
    // ����� ����� �������� ��������, ���� ����� buyTicket �������� ��������� �������
}

// ����� ��� ������ Show
TEST(ShowTest, StartShow) {
    Dolphin dolphin("�������", 3.0, 300, true);
    Show show("����� ��������", &dolphin);
    testing::internal::CaptureStdout();
    show.startShow();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("�������� ���: ����� ��������"), std::string::npos);
    EXPECT_NE(output.find("�������"), std::string::npos);
}

// ����� ��� ������ Trainer
TEST(TrainerTest, Work) {
    Trainer trainer("�����", 30, 2500, 5);
    testing::internal::CaptureStdout();
    trainer.work();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("����� ��������� 5 ��������."), std::string::npos);
}

// ����� ��� ������ ClownFish
TEST(ClownFishTest, DisplayInfo) {
    ClownFish clownfish("���� �����", 0.3, 0.5, "��������� � ������ ��������");
    testing::internal::CaptureStdout();
    clownfish.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("���� �����"), std::string::npos);
    EXPECT_NE(output.find("0.3"), std::string::npos);
    EXPECT_NE(output.find("0.5"), std::string::npos);
    EXPECT_NE(output.find("��������� � ������ ��������"), std::string::npos);
}
// ����� ��� ������ Aquarium
TEST(AquariumTest, DisplayAquarium) {
    Aquarium aquarium("��� ������", 5000);
    Shark* shark = new Shark("������� ����� �����", 5.5, 1500, 7.5);
    aquarium.addFish(shark);
    testing::internal::CaptureStdout();
    aquarium.displayAquarium();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("��� ������"), std::string::npos);
    EXPECT_NE(output.find("5000"), std::string::npos);
    EXPECT_NE(output.find("������� ����� �����"), std::string::npos);
}

// ����� ��� ������ Ticket
TEST(TicketTest, DisplayTicketInfo) {
    Ticket ticket("��������", 20.0);
    testing::internal::CaptureStdout();
    ticket.displayTicketInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("��� ������: ��������"), std::string::npos);
    EXPECT_NE(output.find("����: 20"), std::string::npos);
}

// ����� ��� ������ Cleaner
TEST(CleanerTest, Work) {
    Cleaner cleaner("���", 40, 1800, 8);
    testing::internal::CaptureStdout();
    cleaner.work();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("��� ������� 8 �����."), std::string::npos);
}

// ����� ��� ������ Dolphin
TEST(DolphinTest, DisplayInfo) {
    Dolphin dolphin("�������", 3.0, 300, true);
    testing::internal::CaptureStdout();
    dolphin.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("���: �������"), std::string::npos);
    EXPECT_NE(output.find("�����: 3 �"), std::string::npos);
    EXPECT_NE(output.find("���: 300 ��"), std::string::npos);
    EXPECT_NE(output.find("����� ��������� �����: ��"), std::string::npos);
}

// ����� ��� ������ Tuna
TEST(TunaTest, DisplayInfo) {
    Tuna tuna("�����", 2.0, 250, 70.0);
    testing::internal::CaptureStdout();
    tuna.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("���: �����"), std::string::npos);
    EXPECT_NE(output.find("�����: 2 �"), std::string::npos);
    EXPECT_NE(output.find("���: 250 ��"), std::string::npos);
    EXPECT_NE(output.find("�������� ��������: 70 ��/�"), std::string::npos);
}
