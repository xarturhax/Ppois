#include "Fish.h"
#include <iostream>

Fish::Fish(const std::string& species, double length, double weight)
    : species(species), length(length), weight(weight) {
}

void Fish::displayInfo() const {
    std::cout << "Виды: " << species << ", Длина: " << length << ", Вес: " << weight << std::endl;
}