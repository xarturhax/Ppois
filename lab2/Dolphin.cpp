#include "Dolphin.h"
#include <iostream>

Dolphin::Dolphin(const std::string& species, double length, double weight, bool canPerformTricks)
    : Fish(species, length, weight), canPerformTricks(canPerformTricks) {
}

void Dolphin::displayInfo() const {
    std::cout << "���: " << species << ", �����: " << length << " �, ���: " << weight << " ��, ����� ��������� �����: " << (canPerformTricks ? "��" : "���") << std::endl;
}
