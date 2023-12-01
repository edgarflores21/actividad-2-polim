#include <iostream>
#include <string>

class Animal {
protected:
    std::string tipoRaza;

public:

    Animal(const std::string& raza) : tipoRaza(raza) {}

    virtual void informacion() const {
        std::cout << "Animal de tipo desconocido\n";
    }
};

class Perro : public Animal {
private:
    std::string sonido;

public:
    
    Perro(const std::string& raza, const std::string& sonido) : Animal(raza), sonido(sonido) {}

    void informacion() const override {
        std::cout << "Perro de raza " << tipoRaza << " hace " << sonido << "\n";
    }
};

class Gato : public Animal {
private:
    std::string color;

public:
   
    Gato(const std::string& raza, const std::string& color) : Animal(raza), color(color) {}

    void informacion() const override {
        std::cout << "Gato de raza " << tipoRaza << " de color " << color << "\n";
    }
};

class Pajaro : public Animal {
private:
    std::string tipoPlumaje;

public:
    Pajaro(const std::string& raza, const std::string& plumaje) : Animal(raza), tipoPlumaje(plumaje) {}

    void informacion() const override {
        std::cout << "Pájaro de raza " << tipoRaza << " con plumaje " << tipoPlumaje << "\n";
    }
};

int main() {
    Perro perro("Labrador", "ladridos");
    Gato gato("Siamés", "blanco y negro");
    Pajaro pajaro("Canario", "amarillo");

    perro.informacion();
    gato.informacion();
    pajaro.informacion();

    return 0;
}
