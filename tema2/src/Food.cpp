#include "Food.hpp"

//constructor
Food::Food(const string& name, int calories, int weight, const string& type)
    : name(name), calories(new int(calories)), type(type), weight(weight) {
    cout << "Food object created: " << name << " (" << calories << " calories, " << type << ", " << weight << "g)" << endl;
}

//destructor
Food::~Food() {
    delete calories;
    cout << "Food object destroyed: " << name << endl;
}


string Food::toString() const {
    return "Food: " + name + ", Calories: " + to_string(*calories) + ", Type: " + type + ", Weight: " + to_string(weight) + "g";
}
