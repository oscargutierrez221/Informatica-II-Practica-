//! Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
//! de la división A/B.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Ingrese el primer numero (A): ";
    cin >> a;
    
    if (!cin) {
        cout << "Error: Debe ingresar un numero valido." << endl;
        return 1;
    }
    
    cout << "Ingrese el segundo numero (B): ";
    cin >> b;
    
    if (!cin) {
        cout << "Error: Debe ingresar un numero valido." << endl;
        return 1;
    }
    
    if (b == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
        return 1;
    }
    
    cout << "El residuo de la division " << a << "/" << b << " es: " << a % b << endl;
    
    return 0;
}