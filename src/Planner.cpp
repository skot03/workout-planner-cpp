#include "Planner.h"
#include <iostream>

void Planner::addWorkout(std::unique_ptr<Workout> workout) {
    workouts_.push_back(std::move(workout));
}

void Planner::display() const {
    std::cout << "Training Planner:\n";
    for (const auto& w : workouts_) {
        w->display();
        std::cout << "--------------------\n";
    }
}
