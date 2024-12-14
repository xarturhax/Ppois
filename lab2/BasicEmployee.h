#pragma once
#ifndef BASICEMPLOYEE_H
#define BASICEMPLOYEE_H

#include "Employee.h"

class BasicEmployee : public Employee {
public:
    BasicEmployee(const std::string& name, int age, double salary);
    void work() const override;
};

#endif // BASICEMPLOYEE_H
