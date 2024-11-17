// src/Fruit.h
#ifndef FRUIT_H
#define FRUIT_H

#include "Food.h"

class Fruit : public Food {
public:
    Fruit(std::string name, int calories) : Food(name, calories) {
        std::cout << "Fruit \"" << name << "\" created.\n";
    }

    ~Fruit() override {
        std::cout << "Fruit \"" << name << "\" destroyed.\n";
    }

    void printInfo() const override {
        std::cout << "Fruit: " << name << ", Calories: " << calories << "\n";
    }
};

#endif

