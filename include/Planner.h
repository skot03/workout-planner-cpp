#pragma once
#include <vector>
#include <memory>
#include "Workout.h"

class Planner {
public:
    void addWorkout(std::unique_ptr<Workout> workout);
    void display() const;
private:
    std::vector<std::unique_ptr<Workout>> workouts_;
};
