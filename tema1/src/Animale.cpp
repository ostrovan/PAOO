#include "../inc/Animale.hpp"
#include <iostream>

// constructor
Animale::Animale(const std::string &name, const std::string &culoare, int age, double kg) : culoare(culoare), age(age), kg(kg)
{
  this->name = new std::string(name); // alocam dinamic memoria pentru name
  std::cout << "apelare constructor" << std::endl;
}

// destructor
Animale::~Animale()
{
  delete name; // eliberam memoria alocata pentru name
  std::cout << "apelare destructor" << std::endl;
}

// copy constructor
Animale::Animale(const Animale &object) : culoare(object.culoare), age(object.age), kg(object.kg)
{
  this->name = new std::string(*object.name);
  std::cout << "apelare copy contructor" << std::endl;
}

// move constructor
Animale::Animale(Animale &&object) noexcept : culoare(std::move(object.culoare)), age(object.age), kg(object.kg)
{
  this->name = object.name;
  object.name = nullptr;
  object.age = 0;
  object.kg = 0;
  std::cout << "apelare move constructor" << std::endl;
}

// metoda afisare
void Animale::toString() const
{
  if (name)
  {
    std::cout << *name << ", " << culoare << ", " << age << ", " << kg << " kg." << std::endl;
  }
  else
  {
    std::cout << "Acest animal nu mai exista!" << std::endl;
  }
}
