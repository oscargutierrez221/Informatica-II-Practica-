//! Escriba un programa que pida un número N e imprima en pantalla la suma de to dos
//! los números entre 0 y N (incluyéndose el mismo).

#include <iostream>
using namespace std;

int main() { 
    int n, suma = 0;
    cout << "Ingrese un numero (N): \n";
    cin >> n;
    if (n < 0){
        cout << "Error, el numero debe ser positivo \n";
        return 1;
    }
    for (int i = 0; i <= n; i++){ 
        suma += i;
    }
    cout << "La sumatoria de 0 a " << n << " es: " << suma << endl;
    return 0;
}

