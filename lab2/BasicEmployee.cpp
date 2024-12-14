#include "BasicEmployee.h"
#include <iostream>

BasicEmployee::BasicEmployee(const std::string& name, int age, double salary)
    : Employee(name, age, salary) {
}

void BasicEmployee::work() const {
    std::cout << name << " ��������� ���� ������." << std::endl;
}
