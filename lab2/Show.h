#pragma once
#ifndef SHOW_H
#define SHOW_H

#include "Dolphin.h"

class Show {
private:
    std::string showName;
    Dolphin* starDolphin; // Ассоциация с классом Dolphin

public:
    Show(const std::string& showName, Dolphin* starDolphin);
    void startShow();
};

#endif // SHOW_H