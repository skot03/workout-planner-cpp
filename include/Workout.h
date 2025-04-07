#pragma once
#include <vector>
#include <memory>
#include "Exercise.h"

class Workout {
public:
    void addExercise(std::shared_ptr<Exercise> exercise);
    void display() const;
private:
    std::vector<std::shared_ptr<Exercise>> exercises_;
};
