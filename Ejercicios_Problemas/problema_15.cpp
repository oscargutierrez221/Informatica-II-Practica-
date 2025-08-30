//! Emp ezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
//! se genera una espiral de números como la siguiente:

//!         21 22 23 24 25
//!         20 7 8 9 10
//!         19 6 1 2 11
//!         18 5 4 3 12
//!         17 16 15 14 13

//! En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
//! Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
//! de una espiral de nxn.

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Ingrese un numero impar: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "El numero debe ser impar." << endl;
        return 1;
    }
    int suma = 1; // Empezamos con el centro de la espiral
    int numero = 1; // el primer numero en la espiral
    for (int capa = 1; capa <= n / 2; ++capa) {
        int salto = capa * 2; // la distacia entre los numeros en la diagonal
        for (int i = 0; i < 4; ++i) {
            numero += salto;
            suma += numero;
        }
    }
    cout << "La suma de los numeros en la diagonal es: " << suma << endl;
    return 0;
    }

