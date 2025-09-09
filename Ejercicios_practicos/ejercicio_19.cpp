//! Escriba un programa que pida un número N e imprima si es o no un número primo

#include <iostream>
using namespace std;

int main() {
    int N, i;
    bool esPrimo = true;
    cout << "Ingrese un numero: ";
    cin >> N;
    for (i = 2; i <= N / 2; i++)  {
        if (N % i == 0) {
            esPrimo = false;
            break;
        } 
    }
    if (esPrimo && N > 1) {
        cout << N << " es un numero primo \n" ;
    } else {
        cout << N << " no es un numero primo \n";
    }
    return 0;
    }

