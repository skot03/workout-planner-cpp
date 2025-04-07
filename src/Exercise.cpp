#include "Exercise.h"
#include <iostream>

Exercise::Exercise(const std::string& name, int reps, int sets)
    : name_(name), reps_(reps), sets_(sets) {}

std::string Exercise::getName() const { return name_; }
int Exercise::getReps() const { return reps_; }
int Exercise::getSets() const { return sets_; }

void Exercise::display() const {
    std::cout << "Exercise: " << name_ << " | Sets: " << sets_ << " | Reps: " << reps_ << "\n";
}
