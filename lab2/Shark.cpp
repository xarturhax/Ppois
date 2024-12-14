#include "Shark.h"
#include <iostream>

Shark::Shark(const std::string& species, double length, double weight, double teethSize)
    : Fish(species, length, weight), teethSize(teethSize) {
}

void Shark::displayInfo() const {
    Fish::displayInfo();
    std::cout << "Размер зубов: " << teethSize << " cm" << std::endl;
}