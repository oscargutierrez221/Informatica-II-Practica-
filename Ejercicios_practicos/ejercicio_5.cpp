//! Escriba un programa que pida dos números A y B e imprima en pantalla la división
//! A/B con redondeo.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el primer numero (A): \n";
    cin >> a;
    cout << "Ingrese el segundo numero (B): \n";
    cin >> b;
    if (b == 0 || a == 0){
        cout << "Error, no se puede dividir por cero" << endl;
        return 1;
    }
    else {
        cout << "El resultado de la division A/B con redondeo es: " << (a + b / 2) / b << endl;
        return  1;}
    return 0;
    
}
