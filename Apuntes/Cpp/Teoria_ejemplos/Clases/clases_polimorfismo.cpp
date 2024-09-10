#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void hacerSonido() const
    {
        std::cout << "Animal hace sonido indeterminado" << std::endl;
    }
};

class Perro : public Animal
{
public:
    void hacerSonido() const override
    {
        std::cout << "Guau!" << std::endl;
    }
};

class Gato : public Animal
{
public:
    void hacerSonido() const override
    {
        std::cout << "Miau!" << std::endl;
    }
};

int main()
{
    Perro perro;
    Gato gato;

    Animal *animal1 = &perro;
    Animal *animal2 = &gato;

    animal1->hacerSonido(); // Salida: Guau!
    animal2->hacerSonido(); // Salida: Miau!

    return 0;
}