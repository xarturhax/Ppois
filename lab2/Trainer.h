#pragma once
#ifndef TRAINER_H
#define TRAINER_H

#include "Employee.h"

class Trainer : public Employee {
private:
    int numberOfAnimalsTrained;

public:
    Trainer(const std::string& name, int age, double salary, int numberOfAnimalsTrained);
    void work() const override; // Переопределение метода
};

#endif // TRAINER_H