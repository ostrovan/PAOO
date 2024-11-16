#include <iostream>
#include "../inc/Animale.hpp"

int main()
{

    Animale animal1("Jesuu", "gri", 3, 3.5); // obiectul animal1 a fost creat
    animal1.toString();

    Animale animal2 = animal1; // copy consructor face copy la animal1 in animal2
    animal2.toString();

    Animale animal3 = std::move(animal1); // move constructorul muta datele din animal1 in animal3
    animal3.toString();

    std::cout << "Animalul 1 după mutare:" << std::endl;
    animal1.toString();

    return 0;
}
