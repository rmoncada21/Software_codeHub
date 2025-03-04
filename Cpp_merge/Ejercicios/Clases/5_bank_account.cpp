#include <iostream>
using namespace std;

class Bank_account {
    private:
        long double balance;
        string account;
    public:
        // Constructores
        Bank_account() : balance(0.0), account("Desconocida") {
            cout << "Se creó la cuenta de banco " << endl;
        }
        Bank_account(long double balance, string account)
            : balance(balance), account(account) {
            cout << "Se creó la cuenta con saldo inicial: " << balance << endl;
        }

        // Prototipos de funciones
        void deposit(long double deposito);  // Sumar valores
        void withdraw(long double monto); // Verificar monto y hacer resta
        void get_balance();  // Mostrar el balance actual
};

void Bank_account::deposit(long double deposito) {
    balance += deposito;
    cout << "Depósito realizado. ";
    get_balance();
}

void Bank_account::withdraw(long double monto) {
    if (monto <= balance) {
        balance -= monto;
        cout << "Retiro realizado. ";
        get_balance();
    } else {
        cout << "Saldo insuficiente para realizar el retiro." << endl;
    }
}

void Bank_account::get_balance() {
    cout << "Balance actual: " << balance << endl;
}

int main() {
    Bank_account cuenta1(1000.0, "Cuenta1");  // Crear cuenta con saldo inicial
    cuenta1.deposit(500.0);  // Depositar dinero
    cuenta1.withdraw(200.0); // Retirar dinero
    cuenta1.withdraw(1500.0); // Intentar retirar más de lo que tiene

    return 0;
}
