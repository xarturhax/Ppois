#include "Tuna.h"
#include <iostream>

Tuna::Tuna(const std::string& species, double length, double weight, double swimmingSpeed)
    : Fish(species, length, weight), swimmingSpeed(swimmingSpeed) {
}

void Tuna::displayInfo() const {
    std::cout << "Вид: " << species << ", Длина: " << length << " м, Вес: " << weight << " кг, Скорость плавания: " << swimmingSpeed << " км/ч" << std::endl;
}
