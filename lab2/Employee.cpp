#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& name, int age, double salary)
    : name(name), age(age), salary(salary) {
}

void Employee::work() const {
    std::cout << name << " работает..." << std::endl;
}