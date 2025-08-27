//! Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
//! de la división A/B.

#include <iostream>
using namespace std;

int main() {
    int a (0);
    int b (0);
    cout << "Ingrese el primer numero (A): \n";
    cin >> a;
    cout << "Ingrese el segundo numero (B): \n";
    cin >> b;
    if (b != 0) {
        cout << "El residuo de la division A/B es: " << a % b << endl;
    } else {
        cout << "Error: Division por cero no es permitida. \n";
        return 1;
    }
    return 0;
    }