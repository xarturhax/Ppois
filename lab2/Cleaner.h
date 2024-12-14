#pragma once
#ifndef CLEANER_H
#define CLEANER_H

#include "Employee.h"

class Cleaner : public Employee {
private:
    double hoursWorked;

public:
    Cleaner(const std::string& name, int age, double salary, double hoursWorked);
    void work() const override; // Переопределение метода
};

#endif // CLEANER_H