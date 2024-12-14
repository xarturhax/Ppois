#include "Trainer.h"
#include <iostream>

Trainer::Trainer(const std::string& name, int age, double salary, int numberOfAnimalsTrained)
    : Employee(name, age, salary), numberOfAnimalsTrained(numberOfAnimalsTrained) {
}

void Trainer::work() const {
    std::cout << name << " тренирует " << numberOfAnimalsTrained << " животных." << std::endl;
}