#include "Show.h"
#include <iostream>

Show::Show(const std::string& showName, Dolphin* starDolphin)
    : showName(showName), starDolphin(starDolphin) {
}

void Show::startShow() {
    std::cout << "Начинаем шоу: " << showName << std::endl;
    starDolphin->displayInfo();
}
