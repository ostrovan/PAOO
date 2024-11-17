#include "Food.hpp"

int main() {
    
    Food pizza("Pizza", 300, 500, "Italian"); 
    cout << pizza.toString() << endl;

    Food burger("Burger", 500, 250, "Fast Food");
    cout << burger.toString() << endl;

    //Food copyPizza = pizza; 

    return 0;
}

