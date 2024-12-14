#include "Tuna.h"
#include <iostream>

Tuna::Tuna(const std::string& species, double length, double weight, double swimmingSpeed)
    : Fish(species, length, weight), swimmingSpeed(swimmingSpeed) {
}

void Tuna::displayInfo() const {
    std::cout << "���: " << species << ", �����: " << length << " �, ���: " << weight << " ��, �������� ��������: " << swimmingSpeed << " ��/�" << std::endl;
}
