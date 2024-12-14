#include <iostream>
#include <vector>
#include "Aquarium.h"
#include "Shark.h"
#include "Dolphin.h"
#include "ClownFish.h"
#include "Tuna.h"
#include "Trainer.h"
#include "Cleaner.h"
#include "Food.h"
#include "Ticket.h"
#include "Client.h"
#include "Show.h"
#include "BasicEmployee.h"

int main() {
    setlocale(LC_ALL, "Russian");

    // Создаем корм
    Food food("Корм для рыб", 10);

    // Создаем аквариум
    Aquarium aquarium("Мир Океана", 5000, &food);

    // Создаем рыб
    Shark* shark = new Shark("Большая белая акула", 5.5, 1500, 7.5);
    Dolphin* dolphin = new Dolphin("Дельфин", 3.0, 300, true);
    ClownFish* clownfish = new ClownFish("Рыба клоун", 0.3, 0.5, "Оранжевый с белыми полосами");
    Tuna* tuna = new Tuna("Тунец", 2.0, 250, 70.0);

    // Добавляем рыб в аквариум
    aquarium.addFish(shark);
    aquarium.addFish(dolphin);
    aquarium.addFish(clownfish);
    aquarium.addFish(tuna);

    // Создаем сотрудников
    BasicEmployee* employeeTrainer = new BasicEmployee("Алиса", 30, 2500);
    Trainer trainer(employeeTrainer, 5);
    Cleaner cleaner("Боб", 40, 1800, 8);

    // Создаем билет без фиксированной цены
    Ticket ticket("Неопределён", 0.0);
    Client client("Джон", 25);

    // Создаем шоу
    Show dolphinShow("Трюки дельфина", dolphin);

    // Флаг для проверки, куплен ли билет
    bool ticketPurchased = false;

    // Основное меню
    int choice;
    while (true) {
        std::cout << "\n=== Океанариум Меню ===\n";
        std::cout << "1. Посмотреть информацию об аквариуме\n";
        std::cout << "2. Посмотреть информацию о рыбах\n";
        std::cout << "3. Посмотреть информацию о работниках океанариума\n";
        std::cout << "4. Покормить выбранную рыбу\n";
        std::cout << "5. Купить билет\n";
        std::cout << "6. Начать шоу\n";
        std::cout << "7. Выход\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            // Информация об аквариуме
            aquarium.displayAquarium();
            break;
        }
        case 2: {
            // Информация о рыбах
            std::cout << "\nИнформация о рыбах в аквариуме:\n";
            shark->displayInfo();
            dolphin->displayInfo();
            clownfish->displayInfo();
            tuna->displayInfo();
            break;
        }
        case 3: {
            // Информация о работниках
            std::cout << "\nИнформация о работниках океанариума:\n";
            trainer.work();
            cleaner.work();
            break;
        }
        case 4: {
            // Покормить рыбу
            int fishChoice;
            std::cout << "\nКакая рыба должна быть покормлена?\n";
            std::cout << "1. Акула\n";
            std::cout << "2. Дельфин\n";
            std::cout << "3. Рыба-клоун\n";
            std::cout << "4. Тунец\n";
            std::cout << "Ваш выбор: ";
            std::cin >> fishChoice;

            if (fishChoice >= 1 && fishChoice <= 4) {
                std::cout << "Кормим рыбу...\n";
                food.feedFish();
            }
            else {
                std::cout << "Неверный выбор!\n";
            }
            break;
        }
        case 5: {
            // Купить билет
            int age;
            std::cout << "Введите ваш возраст: ";
            std::cin >> age;

            if (age > 14) {
                ticket = Ticket("Взрослый", 20.0);
            }
            else {
                ticket = Ticket("Ребёнок", 10.0);
            }

            client.buyTicket(ticket);
            ticketPurchased = true;
            break;
        }
        case 6: {
            // Начать шоу
            if (ticketPurchased) {
                std::cout << "Билет проверен. Начинаем шоу!\n";
                dolphinShow.startShow();
            }
            else {
                std::cout << "Для начала шоу нужно купить билет!\n";
            }
            break;
        }
        case 7: {
            // Выход
            std::cout << "Выход из программы. До свидания!\n";
            // Удаляем динамически выделенную память
            delete shark;
            delete dolphin;
            delete clownfish;
            delete tuna;
            delete employeeTrainer;
            return 0;
        }
        default: {
            std::cout << "Неверный выбор. Попробуйте снова.\n";
            break;
        }
        }
    }

    return 0;
}
