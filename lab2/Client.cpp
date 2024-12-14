#include "Client.h"
#include <iostream>

Client::Client(const std::string& name, int age)
    : name(name), age(age) {
}

void Client::buyTicket(Ticket& ticket) {
    std::cout << name << " купить билет." << std::endl;
    ticket.displayTicketInfo();
}