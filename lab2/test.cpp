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

// Тесты для класса Fish
TEST(FishTest, DisplayInfo) {
    Shark shark("Большая белая акула", 5.5, 1500, 7.5);
    testing::internal::CaptureStdout();
    shark.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Большая белая акула"), std::string::npos);
    EXPECT_NE(output.find("5.5"), std::string::npos);
    EXPECT_NE(output.find("1500"), std::string::npos);
    EXPECT_NE(output.find("7.5"), std::string::npos);
}

// Тесты для класса Food
TEST(FoodTest, FeedFish) {
    Food food("Корм для рыб", 2);
    testing::internal::CaptureStdout();
    food.feedFish();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Кормим: Корм для рыб"), std::string::npos);
    EXPECT_EQ(food.getQuantity(), 1);
}

// Тесты для класса Client
TEST(ClientTest, BuyTicket) {
    Client client("Джон", 25);
    Ticket ticket("Взрослый", 20.0);
    client.buyTicket(ticket);
    // Здесь можно добавить проверки, если метод buyTicket изменяет состояние клиента
}

// Тесты для класса Show
TEST(ShowTest, StartShow) {
    Dolphin dolphin("Дельфин", 3.0, 300, true);
    Show show("Трюки дельфина", &dolphin);
    testing::internal::CaptureStdout();
    show.startShow();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Начинаем шоу: Трюки дельфина"), std::string::npos);
    EXPECT_NE(output.find("Дельфин"), std::string::npos);
}

// Тесты для класса Trainer
TEST(TrainerTest, Work) {
    Trainer trainer("Алиса", 30, 2500, 5);
    testing::internal::CaptureStdout();
    trainer.work();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Алиса тренирует 5 животных."), std::string::npos);
}

// Тесты для класса ClownFish
TEST(ClownFishTest, DisplayInfo) {
    ClownFish clownfish("Рыба клоун", 0.3, 0.5, "Оранжевый с белыми полосами");
    testing::internal::CaptureStdout();
    clownfish.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Рыба клоун"), std::string::npos);
    EXPECT_NE(output.find("0.3"), std::string::npos);
    EXPECT_NE(output.find("0.5"), std::string::npos);
    EXPECT_NE(output.find("Оранжевый с белыми полосами"), std::string::npos);
}
// Тесты для класса Aquarium
TEST(AquariumTest, DisplayAquarium) {
    Aquarium aquarium("Мир Океана", 5000);
    Shark* shark = new Shark("Большая белая акула", 5.5, 1500, 7.5);
    aquarium.addFish(shark);
    testing::internal::CaptureStdout();
    aquarium.displayAquarium();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Мир Океана"), std::string::npos);
    EXPECT_NE(output.find("5000"), std::string::npos);
    EXPECT_NE(output.find("Большая белая акула"), std::string::npos);
}

// Тесты для класса Ticket
TEST(TicketTest, DisplayTicketInfo) {
    Ticket ticket("Взрослый", 20.0);
    testing::internal::CaptureStdout();
    ticket.displayTicketInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Тип билета: Взрослый"), std::string::npos);
    EXPECT_NE(output.find("Цена: 20"), std::string::npos);
}

// Тесты для класса Cleaner
TEST(CleanerTest, Work) {
    Cleaner cleaner("Боб", 40, 1800, 8);
    testing::internal::CaptureStdout();
    cleaner.work();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Боб убирает 8 часов."), std::string::npos);
}

// Тесты для класса Dolphin
TEST(DolphinTest, DisplayInfo) {
    Dolphin dolphin("Дельфин", 3.0, 300, true);
    testing::internal::CaptureStdout();
    dolphin.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Вид: Дельфин"), std::string::npos);
    EXPECT_NE(output.find("Длина: 3 м"), std::string::npos);
    EXPECT_NE(output.find("Вес: 300 кг"), std::string::npos);
    EXPECT_NE(output.find("Может выполнять трюки: Да"), std::string::npos);
}

// Тесты для класса Tuna
TEST(TunaTest, DisplayInfo) {
    Tuna tuna("Тунец", 2.0, 250, 70.0);
    testing::internal::CaptureStdout();
    tuna.displayInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Вид: Тунец"), std::string::npos);
    EXPECT_NE(output.find("Длина: 2 м"), std::string::npos);
    EXPECT_NE(output.find("Вес: 250 кг"), std::string::npos);
    EXPECT_NE(output.find("Скорость плавания: 70 км/ч"), std::string::npos);
}
