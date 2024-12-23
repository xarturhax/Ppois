#pragma once
#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <string>
#include <vector>
#include "Fish.h"
#include "Food.h"

class Aquarium {
private:
    std::string name;                // �������� ���������
    double volume;                   // ����� ���������
    std::vector<Fish*> fishList;     // ���������� � ������� Fish
    Food* food;                      // ���������� � ������� Food

public:
    Aquarium(const std::string& name, double volume, Food* food);
    void addFish(Fish* fish);        // ����� ��� ���������� ����
    void displayAquarium() const;    // ����� ��� ����������� ���������� �� ���������
    size_t getNumberOfFish() const;  // ����� ��� ��������� ���������� ���
    void feedAllFish();              // ����� ��� ��������� ���� ���
};

#endif // AQUARIUM_H
