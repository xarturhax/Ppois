#include "Employee.h"

Employee::Employee(const std::string& name, int age, double salary)
    : name(name), age(age), salary(salary) {
}

std::string Employee::getName() const {
    return name;
}
