#pragma once
#include "Planner.h"

class Menu {
public:
    void start();
private:
    Planner planner_;
    void showMenu();
    void handleAddWorkout();
    void handleShowPlanner();
};
