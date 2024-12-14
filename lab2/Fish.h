#pragma once
#ifndef FISH_H
#define FISH_H

#include <string>

class Fish {
protected:
    std::string species; // Вид рыбы
    double length;       // Длина рыбы
    double weight;       // Вес рыбы

public:
    Fish(const std::string& species, double length, double weight);
    virtual void displayInfo() const; // Виртуальный метод
    virtual ~Fish() = default;
};

#endif // FISH_H