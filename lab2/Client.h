#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Ticket.h"

class Client {
private:
    std::string name; // ��� �������
    int age;          // ������� �������

public:
    Client(const std::string& name, int age);
    void buyTicket(Ticket& ticket); // ������� ������
};

#endif // CLIENT_HH