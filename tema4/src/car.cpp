#include <iostream>
#include <string>
#include <memory>

class Motor {
private:
    std::string tip;
    int putere;

public:
    // Constructor
    Motor(const std::string& tip, int putere)
        : tip(tip), putere(putere) {
        std::cout << "Motor de tip " << tip << " cu putere " << putere << " CP creat.\n";
    }

    // Destructor
    ~Motor() {
        std::cout << "Motor de tip " << tip << " distrus.\n";
    }

    // Metodă pentru a arăta detaliile motorului
    void afiseazaDetalii() const {
        std::cout << "Motor: " << tip << ", Putere: " << putere << " CP\n";
    }
};

class Masina {
private:
    std::string marca;
    int anFabricatie;
    std::unique_ptr<Motor> motor; // Resursa gestionată de unique_ptr

public:
    // Constructor
    Masina(const std::string& marca, int anFabricatie, const std::string& tipMotor, int putere)
        : marca(marca), anFabricatie(anFabricatie), motor(std::make_unique<Motor>(tipMotor, putere)) {
        std::cout << "Masina " << marca << " din anul " << anFabricatie << " a fost creata.\n";
    }

    // Destructor
    ~Masina() {
        std::cout << "Masina " << marca << " distrusa.\n";
    }

    // Constructorul de copiere
    Masina(const Masina& other)
        : marca(other.marca), anFabricatie(other.anFabricatie), motor(std::make_unique<Motor>(*other.motor)) {
        std::cout << "Masina " << marca << " copiata.\n";
    }

    // Operatorul de atribuire
    Masina& operator=(const Masina& other) {
        std::cout << "Masina " << marca << " atribuita unei alte masini.\n";
        if (this != &other) {
            marca = other.marca;
            anFabricatie = other.anFabricatie;
            motor = std::make_unique<Motor>(*other.motor); // Copiem motorul
        }
        return *this;
    }

    // Constructorul de mutare
    Masina(Masina&& other) noexcept
        : marca(std::move(other.marca)), anFabricatie(other.anFabricatie), motor(std::move(other.motor)) {
        std::cout << "Masina " << marca << " mutata.\n";
        other.anFabricatie = 0; // Resetăm datele obiectului mutat
    }

    // Operatorul de mutare
    Masina& operator=(Masina&& other) noexcept {
        std::cout << "Masina " << marca << " atribuita prin mutare.\n";
        if (this != &other) {
            marca = std::move(other.marca);
            anFabricatie = other.anFabricatie;
            motor = std::move(other.motor); // Mutăm motorul
            other.anFabricatie = 0; // Resetăm datele obiectului mutat
        }
        return *this;
    }

    // Metodă pentru a afișa detaliile mașinii
    void afiseazaDetalii() const {
        std::cout << "Masina marca: " << marca << ", An fabricatie: " << anFabricatie << "\n";
        motor->afiseazaDetalii();
    }
};

int main() {
    // Creăm un obiect de tip Masina
    Masina masina1("BMW", 2020, "V8", 500);
    masina1.afiseazaDetalii();

    std::cout << "\nCreăm o copie a mașinii...\n";
    Masina masina2 = masina1; // Apelăm constructorul de copiere
    masina2.afiseazaDetalii();

    std::cout << "\nCreăm o mașină prin mutare...\n";
    Masina masina3 = std::move(masina1); // Apelăm constructorul de mutare
    masina3.afiseazaDetalii();

    return 0;
}

