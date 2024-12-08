#include <iostream>
#include <string>
using namespace std;

class Chocolate {
private:
    string name;    //name cioco
    int* weight;    //aloc dinamic weight
    int* cocoa;     //aloc dinamic % cocoa

public:
    //implicit constructor
    Chocolate(const string& n = "Generic", int w = 100, int c = 50)
        : name(n), weight(new int(w)), cocoa(new int(c)) {
        cout << "Constructor called for " << name << "\n";
    }

    //destructor
    ~Chocolate() {
        delete weight;
        delete cocoa;
        cout << "Destructor called for " << name << "\n";
    }

    //copy constructor
    Chocolate(const Chocolate& other)
        : name(other.name), weight(new int(*other.weight)), cocoa(new int(*other.cocoa)) {
        cout << "Copy constructor called for " << name << "\n";
    }

    //op atribuire
    Chocolate& operator=(const Chocolate& other) {
        cout << "Assignment operator called for " << name << "\n";

        // Tratarea atribuției la sine
        if (this == &other) {
            cout << "Self-assignment detected\n";
            return *this;
        }

        //dealocare
        delete weight;
        delete cocoa;

        //copy valori ob sursa
        name = other.name;
        weight = new int(*other.weight);
        cocoa = new int(*other.cocoa);

        return *this; // Respectăm Item 10
    }

    //afisare cioco
    void print() const {
        cout << "Chocolate: " << name << ", Weight: " << *weight << "g, Cocoa: " << *cocoa << "%\n";
    }
};

int main() {
    Chocolate choco1("Dark Chocolate", 200, 70);
    choco1.print();

    Chocolate choco2("Milk Chocolate", 150, 30);
    choco2.print();

    choco2 = choco1; //op atribuire
    choco2.print();

    Chocolate choco3 = choco1; //copy contructor
    choco3.print();

    choco3 = choco3; //atribuire obiect către el însuși
    choco3.print();

    return 0;
}

