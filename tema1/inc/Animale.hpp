#ifndef ANIMALE_HPP
#define ANIMALE_HPP

#include <iostream>
#include <string>
using namespace std;

class Animale
{
private:
    std::string *name;
    std::string culoare;
    int age;
    double kg;

public:
    // constructor
    Animale(const std::string &name, const std::string &culoare, int age, double kg);

    // destructor
    ~Animale();

    // copy constructor
    Animale(const Animale &object);

    // move constructor
    Animale(Animale &&object) noexcept;

    void toString() const; // metoda afisare
};

#endif

