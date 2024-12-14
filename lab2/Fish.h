#pragma once
#ifndef FISH_H
#define FISH_H

#include <string>

class Fish {
protected:
    std::string species; // ��� ����
    double length;       // ����� ����
    double weight;       // ��� ����

public:
    Fish(const std::string& species, double length, double weight);
    virtual void displayInfo() const; // ����������� �����
    virtual ~Fish() = default;
};

#endif // FISH_H