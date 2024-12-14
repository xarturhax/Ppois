#include "Trainer.h"
#include <iostream>

Trainer::Trainer(Employee* employee, int numberOfAnimalsTrained)
    : employee(employee), numberOfAnimalsTrained(numberOfAnimalsTrained) {
}

void Trainer::work() const {
    std::cout << employee->getName() << " ��������� " << numberOfAnimalsTrained << " ��������." << std::endl;
}
