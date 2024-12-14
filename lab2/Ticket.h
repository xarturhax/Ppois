#pragma once
#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket {
private:
    std::string type; // ��� ������ (��������, �������, ��������)
    double price;     // ���� ������

public:
    Ticket(const std::string& type, double price);
    void displayTicketInfo() const;
};

#endif // TICKET_H