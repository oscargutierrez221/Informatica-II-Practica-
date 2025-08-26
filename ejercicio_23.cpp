//! Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
//! común múltiplo entre los dos.

#include <iostream>
using namespace std;

int main () {
    int a, b, maximo, minimo, mcm;
    cout << "Ingrese dos numeros: ",
    cin >> a >> b;
    if (a > b) {
        maximo = a;
        minimo = b;
    } else {
        maximo = b;
        minimo = a;
    }
    mcm = maximo;
    while ( mcm % minimo != 0 )
    {
        mcm += maximo;
    }
    cout << "El minimo comun multiplo entre " << a << " y " << b << " es: " << mcm << endl;
    return 0;
    }
