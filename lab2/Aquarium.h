#pragma once
#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <string>
#include <vector>
#include "Fish.h"

class Aquarium {
private:
    std::string name;                // Название аквариума
    double volume;                   // Объем аквариума
    std::vector<Fish*> fishList;     // Список рыб в аквариуме

public:
    Aquarium(const std::string& name, double volume);
    void addFish(Fish* fish);        // Метод для добавления рыбы
    void displayAquarium() const;    // Метод для отображения информации об аквариуме
    size_t getNumberOfFish() const;  // Новый метод для получения количества рыб
};

#endif // AQUARIUM_H
