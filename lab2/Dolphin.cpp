#include "Dolphin.h"
#include <iostream>

Dolphin::Dolphin(const std::string& species, double length, double weight, bool canPerformTricks)
    : Fish(species, length, weight), canPerformTricks(canPerformTricks) {
}

void Dolphin::displayInfo() const {
    std::cout << "Вид: " << species << ", Длина: " << length << " м, Вес: " << weight << " кг, Может выполнять трюки: " << (canPerformTricks ? "Да" : "Нет") << std::endl;
}
