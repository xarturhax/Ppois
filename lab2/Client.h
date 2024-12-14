#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Ticket.h"

class Client {
private:
    std::string name; // Имя клиента
    int age;          // Возраст клиента

public:
    Client(const std::string& name, int age);
    void buyTicket(Ticket& ticket); // Покупка билета
};

#endif // CLIENT_HH