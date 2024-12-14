#include "Cleaner.h"
#include <iostream>

Cleaner::Cleaner(const std::string& name, int age, double salary, double hoursWorked)
    : Employee(name, age, salary), hoursWorked(hoursWorked) {
}

void Cleaner::work() const {
    std::cout << name << " убирает " << hoursWorked << " часов." << std::endl;
}
