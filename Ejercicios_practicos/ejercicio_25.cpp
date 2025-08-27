//! Escriba un programa que pida un número N e imprima en pantalla la cantidad de
//! dígitos de N.

#include <iostream>
using namespace std;

int main() {
    int n, contador = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n == 0) {
        contador = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
    while ( n > 0) {
        n = n / 10;
        contador++;
    }
    cout << "La cantidad de digitos es: " << contador << endl; 
}
    return 0;
}
