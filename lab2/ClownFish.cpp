#include "ClownFish.h"
#include <iostream>

ClownFish::ClownFish(const std::string& species, double length, double weight, const std::string& colorPattern)
    : Fish(species, length, weight), colorPattern(colorPattern) {
}

void ClownFish::displayInfo() const {
    Fish::displayInfo();
    std::cout << "Цвет: " << colorPattern << std::endl;
}