#pragma once
#ifndef TUNA_H
#define TUNA_H

#include "Fish.h"

class Tuna : public Fish {
private:
    double swimmingSpeed; // �������� �������� � ��/�

public:
    Tuna(const std::string& species, double length, double weight, double swimmingSpeed);
    void displayInfo() const override; // ��������������� ������������ ������
};

#endif // TUNA_H