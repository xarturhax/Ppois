#pragma once
#ifndef DOLPHIN_H
#define DOLPHIN_H

#include "Fish.h"

class Dolphin : public Fish {
private:
    bool canPerformTricks;

public:
    Dolphin(const std::string& species, double length, double weight, bool canPerformTricks);
    void displayInfo() const override; // Переопределение метода
};

#endif // DOLPHIN_H