#pragma once
#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <string>
#include <vector>
#include "Fish.h"

class Aquarium {
private:
    std::string name;                // �������� ���������
    double volume;                   // ����� ���������
    std::vector<Fish*> fishList;     // ������ ��� � ���������

public:
    Aquarium(const std::string& name, double volume);
    void addFish(Fish* fish);        // ����� ��� ���������� ����
    void displayAquarium() const;    // ����� ��� ����������� ���������� �� ���������
    size_t getNumberOfFish() const;  // ����� ����� ��� ��������� ���������� ���
};

#endif // AQUARIUM_H
