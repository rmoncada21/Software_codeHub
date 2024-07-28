#include <iostream>

class Fecha {
public:
    int dia, mes, anio;

    Fecha(int d = 1, int m = 1, int a = 2000) : dia(d), mes(m), anio(a) {}

    // Operador de suma
    Fecha operator+(int dias) {
        Fecha temp = *this;
        temp.dia += dias;
        while (temp.dia > 30) {
            temp.dia -= 30;
            temp.mes++;
        }
        while (temp.mes > 12) {
            temp.mes -= 12;
            temp.anio++;
        }
        return temp;
    }

    // Operadores de comparación
    bool operator==(const Fecha& otra) const {
        return dia == otra.dia && mes == otra.mes && anio == otra.anio;
    }

    bool operator!=(const Fecha& otra) const {
        return !(*this == otra);
    }

    // Operador de salida
    friend std::ostream& operator<<(std::ostream& os, const Fecha& fecha) {
        os << fecha.dia << '/' << fecha.mes << '/' << fecha.anio;
        return os;
    }

    // Operador de entrada
    friend std::istream& operator>>(std::istream& is, Fecha& fecha) {
        char sep;
        is >> fecha.dia >> sep >> fecha.mes >> sep >> fecha.anio;
        return is;
    }
};

int main() {
    Fecha fecha1(25, 5, 2021);
    Fecha fecha2 = fecha1 + 10;

    std::cout << "Fecha original: " << fecha1 << std::endl;
    std::cout << "Fecha después de sumar 10 días: " << fecha2 << std::endl;

    return 0;
}