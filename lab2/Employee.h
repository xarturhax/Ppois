#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    int age;
    double salary;

public:
    Employee(const std::string& name, int age, double salary);
    virtual void work() const = 0;
    std::string getName() const; // Новый метод для получения имени
    virtual ~Employee() = default;
};

#endif // EMPLOYEE_H
