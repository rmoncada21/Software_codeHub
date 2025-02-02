#include <iostream>

// Clase base
class Animal {
public:
    virtual void hacerSonido() { // Método virtual
        std::cout << "Sonido de animal" << std::endl;
    }
};

// Clase derivada 1
class Perro : public Animal {
public:
    void hacerSonido() override { // Sobreescribe el método de la clase base
        std::cout << "Guau Guau" << std::endl;
    }
};

// Clase derivada 2
class Gato : public Animal {
public:
    void hacerSonido() override { // Sobreescribe el método de la clase base
        std::cout << "Miau Miau" << std::endl;
    }
};

int main() {
    Animal* a1 = new Perro(); // Puntero de tipo base apuntando a objeto Perro
    Animal* a2 = new Gato();  // Puntero de tipo base apuntando a objeto Gato
    
    a1->hacerSonido();  // Llama a Perro::hacerSonido()
    a2->hacerSonido();  // Llama a Gato::hacerSonido()

    delete a1;
    delete a2;
    
    // Animal perro;
    // Animal gato;

    // Perro perro;
    // Gato gato;

    // perro.hacerSonido();
    // gato.hacerSonido();

    return 0;
}
