// src/main.cpp
#include "Food.h"
#include "Fruit.h"
#include "Vegetable.h"
#include <iostream>

int main() {
    //obiect de tip Food
    Food baseFood("General Food", 50);
    baseFood.printInfo();

    //obiect de tip Fruit
    Fruit apple("Apple", 22);
    apple.printInfo();

    //obiect de tip Vegetable
    Vegetable carrot("Carrot", 18);
    carrot.printInfo();

    {
        Vegetable tempVeg("Temporary Carrot", 20);
        tempVeg.printInfo();
    } // tempVeg iese din scope și se distruge aici

    // Food copyFood = baseFood;

    // Fruit movedApple = std::move(apple);

    return 0;
}

