#pragma once
#ifndef FOOD_H
#define FOOD_H

#include <string>

class Food {
private:
    std::string name; // �������� �����
    int quantity;     // ���������� �����

public:
    Food(const std::string& name, int quantity);
    void feedFish(); // ����� ��� ��������� ����
    int getQuantity() const; // ����� ��� ��������� ���������� �����
};

#endif // FOOD_H
