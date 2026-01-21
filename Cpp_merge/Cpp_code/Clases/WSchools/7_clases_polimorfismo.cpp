#include <iostream>

using namespace std;

// Clase base
class Component {
public:
    void checkStatus() {
        cout << "El componente del circuito está siendo verificado." << endl;
    }
};

// Clase derivada
class Resistor : public Component {
public:
    void checkStatus() {
        cout << "El resistor cumple con el valor esperado." << endl;
    }
};

// Clase derivada
class Capacitor : public Component {
public:
    void checkStatus() {
        cout << "El capacitor cumple con la capacitancia esperada." << endl;
    }
};

int main() {
    Component genericComponent;
    Resistor r1;
    Capacitor c1;

    genericComponent.checkStatus();
    r1.checkStatus();
    c1.checkStatus();

    return 0;
}
