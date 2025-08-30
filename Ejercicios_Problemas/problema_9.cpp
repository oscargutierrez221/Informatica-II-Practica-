//! Escriba un programa que pida un número entero N e imprima el resultado de la suma
//! de to dos sus dígitos elevados a sí mismos.

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, digito;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    int temp = n; 
    while (temp > 0) {
        digito = temp % 10;
        int potencia = 1;
        for (int i = 0; i < digito; i++) {
            potencia *= digito;
        }
    suma += potencia,
    temp /= 10;
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}
