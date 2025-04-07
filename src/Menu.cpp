#include "Menu.h"
#include <iostream>
#include <limits>

void Menu::start() {
    bool running = true;
    while (running) {
        showMenu();
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: handleAddWorkout(); break;
            case 2: handleShowPlanner(); break;
            case 0: running = false; break;
            default: std::cout << "Invalid choice.\n";
        }
    }
}

void Menu::showMenu() {
    std::cout << "\n--- Training Planner Menu ---\n";
    std::cout << "1. Add new workout\n";
    std::cout << "2. Show all workouts\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose option: ";
}

void Menu::handleAddWorkout() {
    auto workout = std::make_unique<Workout>();
    std::string name;
    int reps, sets;
    char addMore;

    do {
        std::cout << "Exercise name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Sets: ";
        std::cin >> sets;
        std::cout << "Reps: ";
        std::cin >> reps;

        auto exercise = std::make_shared<Exercise>(name, reps, sets);
        workout->addExercise(exercise);

        std::cout << "Add another exercise? (y/n): ";
        std::cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    planner_.addWorkout(std::move(workout));
}

void Menu::handleShowPlanner() {
    planner_.display();
}
