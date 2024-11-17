// src/Food.h
#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>

class Food {
protected:
    std::string name;
    int calories;

public:
    explicit Food(std::string name, int calories) : name(name), calories(calories) {
        std::cout << "Food \"" << name << "\" created with " << calories << " calories.\n";
    }

    virtual ~Food() {
        std::cout << "Food \"" << name << "\" destroyed.\n";
    }

    //copy constructor + copy op
    Food(const Food&) = delete;
    Food& operator=(const Food&) = delete;

    //move contructor + move op
    Food(Food&&) = delete;
    Food& operator=(Food&&) = delete;

    virtual void printInfo() const {
        std::cout << "Food: " << name << ", Calories: " << calories << "\n";
    }
};

#endif

