#include "Workout.h"
#include <iostream>

void Workout::addExercise(std::shared_ptr<Exercise> exercise) {
    exercises_.push_back(exercise);
}

void Workout::display() const {
    std::cout << "Workout Plan:\n";
    for (const auto& ex : exercises_) {
        ex->display();
    }
}
