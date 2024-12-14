#pragma once
#ifndef CLOWNFISH_H
#define CLOWNFISH_H

#include "Fish.h"

class ClownFish : public Fish {
private:
    std::string colorPattern; // Окрас рыбы

public:
    ClownFish(const std::string& species, double length, double weight, const std::string& colorPattern);
    void displayInfo() const override; // Переопределение виртуального метода
};

#endif // CLOWNFISH_H