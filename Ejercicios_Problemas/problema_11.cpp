//! Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
//! to dos los números enteros entre 1 y el número ingresado.

#include <iostream>
using namespace std;

int main() {
    int n, mcm = 1;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a = mcm, b = i;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        mcm = (mcm * i) / a;
        cout << "El minimo comun multiplo es: " << mcm << endl;
    }
    return 0;
}
