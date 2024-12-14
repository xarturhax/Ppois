#pragma once
#ifndef SHARK_H
#define SHARK_H

#include "Fish.h"

class Shark : public Fish {
private:
    double teethSize;

public:
    Shark(const std::string& species, double length, double weight, double teethSize);
    void displayInfo() const override; // Переопределение метода
};

#endif // SHARK_H_HH