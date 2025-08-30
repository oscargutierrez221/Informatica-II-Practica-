//! Escriba un programa que reciba un número y calcule la suma de to dos los primos
//! menores que el número ingresado

#include <iostream>
using namespace std;

int main () {
    int n, suma = 0;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        bool esPrimo = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            suma += i;
            cout << "El resultado de la suma es: " << suma << endl;
        }
    }
    return 0;
}