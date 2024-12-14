#pragma once
#ifndef TRAINER_H
#define TRAINER_H

#include "Employee.h"

class Trainer {
private:
    Employee* employee; // ���������� � ������� Employee
    int numberOfAnimalsTrained;

public:
    Trainer(Employee* employee, int numberOfAnimalsTrained);
    void work() const;
};

#endif // TRAINER_H
