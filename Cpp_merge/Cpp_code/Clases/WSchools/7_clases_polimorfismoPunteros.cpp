#include <iostream>

// Clase base
class ComponenteElectronico {
public:
    virtual void verificar() {   // Método virtual
        std::cout << "Verificación genérica del componente electrónico" << std::endl;
    }
};

// Clase derivada 1
class Resistor : public ComponenteElectronico {
public:
    void verificar() override {  // Sobreescribe el método de la clase base
        std::cout << "Resistor verificado: valor de resistencia correcto" << std::endl;
    }
};

// Clase derivada 2
class Capacitor : public ComponenteElectronico {
public:
    void verificar() override {  // Sobreescribe el método de la clase base
        std::cout << "Capacitor verificado: capacitancia dentro de tolerancia" << std::endl;
    }
};

int main() {
    ComponenteElectronico* c1 = new Resistor();   // Puntero base → objeto Resistor
    ComponenteElectronico* c2 = new Capacitor();  // Puntero base → objeto Capacitor
    
    c1->verificar();  // Llama a Resistor::verificar()
    c2->verificar();  // Llama a Capacitor::verificar()

    delete c1;
    delete c2;

    return 0;
}
