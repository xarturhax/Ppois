#include "Food.h"
#include <iostream>

Food::Food(const std::string& name, int quantity)
    : name(name), quantity(quantity) {
}

void Food::feedFish() {
    if (quantity > 0) {
        std::cout << "Кормим: " << name << "..." << std::endl;
        quantity--;
    }
    else {
        std::cout << "Еда кончилась!" << std::endl;
    }
}

int Food::getQuantity() const {
    return quantity;
}
