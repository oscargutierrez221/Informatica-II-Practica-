//! En la serie de Fib onacci, cada número es la suma de los 2 anteriores e inicia con 1 y
//! 1. Ej: 1, 1, 2, 3, 5, 8, ....
//! Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
//! de Fib onacci menores a n

#include <iostream>
using namespace std;

int main() {
    int n, a = 1, b = 1, c = 0, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    while (c < n) {
        c = a + b;
        a - b;
        b = c;
        if (c % 2 == 0 && c < n) {
            suma += c;
            cout << c << " ";
            cout << "\nEl resultado de la suma es: " << suma << endl;
        }
    }
    return 0;
}