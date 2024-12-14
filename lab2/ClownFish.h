#pragma once
#ifndef CLOWNFISH_H
#define CLOWNFISH_H

#include "Fish.h"

class ClownFish : public Fish {
private:
    std::string colorPattern; // ����� ����

public:
    ClownFish(const std::string& species, double length, double weight, const std::string& colorPattern);
    void displayInfo() const override; // ��������������� ������������ ������
};

#endif // CLOWNFISH_H