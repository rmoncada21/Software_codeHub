// ejemplo de clases amigas

#include <iostream>
using namespace std;

// declaración de la clase

class Complejo{
    // lista de funciones amigas o lista de amigos
    friend double agreg_real(Complejo&, Complejo&);
    friend double agreg_imag(Complejo&, Complejo&);
    
    private:
    double real;
    double imag;

    public:
    Complejo(double=0, double=0); // Constructor
    void desplegar();
};

// sección de implementación

// constructor 
Complejo::Complejo(double re, double im){
    real = re;
    imag = im;
}

void Complejo::desplegar(){
    char signo = '+';

    if(imag < 0) signo = '-';
    
    cout << real << signo << abs(imag) << 'i' <<endl;
    return;
}

// implementación de las funciones amigas
double agreg_real(Complejo &a, Complejo &b){
    return(a.real+b.real);
}
double agreg_imag(Complejo &a, Complejo &b){
    return(a.imag+b.imag);
}

int main(){
    Complejo a(3.2, 5.6), b(1.1, -8.4);
    double re,im;

    cout << "\nEl primer número complejo es ";
    a.desplegar();
    cout << "\nEl segundo número complejo es ";
    b.desplegar();

    re = agreg_real(a,b);
    im = agreg_imag(a,b);
    Complejo c(re,im); // crea un nuevo objeto Complejo
    cout << "\n\n La suma de estos dos números complejos es "<<endl;
    c.desplegar();

    return 0;
}
