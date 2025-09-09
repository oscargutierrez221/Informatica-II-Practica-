//! Escriba un programa que pida dos números A y B e imprima en pantalla el mayor

#include <iostream>
using namespace std;

int main() {
    int a, b; 
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if (a < b) {
        cout << "El numero mayor es: " << b << endl;
    } else if (a > b) {
        cout << "El numero mayor es: " << a << endl;
    } else {
        cout << "Los numeros son iguales." << endl; 
    }
    return 0;
}