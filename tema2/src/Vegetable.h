// src/Vegetable.h
#ifndef VEGETABLE_H
#define VEGETABLE_H

#include "Food.h"

class Vegetable : public Food {
public:
    Vegetable(std::string name, int calories) : Food(name, calories) {
        std::cout << "Vegetable \"" << name << "\" created.\n";
    }

    ~Vegetable() override {
        std::cout << "Vegetable \"" << name << "\" destroyed.\n";
    }

    void printInfo() const override {
        std::cout << "Vegetable: " << name << ", Calories: " << calories << "\n";
    }
};

#endif

