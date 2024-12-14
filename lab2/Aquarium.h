#pragma once
#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <string>
#include <vector>
#include "Fish.h"
#include "Food.h"

class Aquarium {
private:
    std::string name;                // Название аквариума
    double volume;                   // Объем аквариума
    std::vector<Fish*> fishList;     // Ассоциация с классом Fish
    Food* food;                      // Ассоциация с классом Food

public:
    Aquarium(const std::string& name, double volume, Food* food);
    void addFish(Fish* fish);        // Метод для добавления рыбы
    void displayAquarium() const;    // Метод для отображения информации об аквариуме
    size_t getNumberOfFish() const;  // Метод для получения количества рыб
    void feedAllFish();              // Метод для кормления всех рыб
};

#endif // AQUARIUM_H
