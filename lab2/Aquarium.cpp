#include "Aquarium.h"
#include <iostream>

Aquarium::Aquarium(const std::string& name, double volume)
    : name(name), volume(volume) {
}

void Aquarium::addFish(Fish* fish) {
    fishList.push_back(fish);
}

void Aquarium::displayAquarium() const {
    std::cout << "Аквариум: " << name << ", Объем: " << volume << " литров" << std::endl;
    std::cout << "Количество рыб: " << fishList.size() << std::endl;
    for (const auto& fish : fishList) {
        fish->displayInfo();
    }
}

size_t Aquarium::getNumberOfFish() const {
    return fishList.size();
}
