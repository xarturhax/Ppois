#include "Client.h"
#include <iostream>

Client::Client(const std::string& name, int age)
    : name(name), age(age) {
}

void Client::buyTicket(Ticket& ticket) {
    std::cout << name << " покупает билет: ";
    ticket.displayTicketInfo();
}
