#pragma once
#ifndef FOOD_H
#define FOOD_H

#include <string>

class Food {
private:
    std::string name; // Название корма
    int quantity;     // Количество корма

public:
    Food(const std::string& name, int quantity);
    void feedFish(); // Метод для кормления рыбы
    int getQuantity() const; // Метод для получения количества корма
};

#endif // FOOD_H
