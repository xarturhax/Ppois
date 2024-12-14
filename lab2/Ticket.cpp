#include "Ticket.h"
#include <iostream>

Ticket::Ticket(const std::string& type, double price)
    : type(type), price(price) {
}

void Ticket::displayTicketInfo() const {
    std::cout << "Тип билета: " << type << ", Цена: " << price << std::endl;
}
