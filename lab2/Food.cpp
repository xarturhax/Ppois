#include "Food.h"
#include <iostream>

Food::Food(const std::string& name, int quantity)
    : name(name), quantity(quantity) {
}

void Food::feedFish() {
    if (quantity > 0) {
        std::cout << "������: " << name << "..." << std::endl;
        quantity--;
    }
    else {
        std::cout << "��� ���������!" << std::endl;
    }
}

int Food::getQuantity() const {
    return quantity;
}
