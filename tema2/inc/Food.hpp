#ifndef FOOD_HPP
#define FOOD_HPP

#include <string>
#include <iostream>
using namespace std;

class Food {
private:
    string name;     
    int *calories;   
    string type;     
    int weight;    

    //copy construct
    Food(const Food& other) = delete;

    //op copy
    Food& operator=(const Food& other) = delete;

    //move constructor 
    Food(Food&& other) noexcept = delete;

    //op move
    Food& operator=(Food&& other) noexcept = delete;

public:

    Food(const string& name, int calories, int weight, const string& type);

    ~Food();

    string toString() const;
};

#endif

