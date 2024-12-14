#include "Show.h"
#include <iostream>

Show::Show(const std::string& showName, Dolphin* starDolphin)
    : showName(showName), starDolphin(starDolphin) {
}

void Show::startShow() {
    std::cout << "�������� ���: " << showName << std::endl;
    starDolphin->displayInfo();
}
