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
    virtual void work() const; // Виртуальный метод
    virtual ~Employee() = default;
};

#endif // EMPLOYEE_HH