#pragma once
#include <string>

class Exercise {
public:
    Exercise(const std::string& name, int reps, int sets);
    std::string getName() const;
    int getReps() const;
    int getSets() const;
    void display() const;

private:
    std::string name_;
    int reps_;
    int sets_;
};
