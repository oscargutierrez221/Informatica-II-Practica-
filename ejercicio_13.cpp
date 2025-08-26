//! Escriba un programa que pida un número N e imprima to dos los divisores de N.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero que desea analizar: \n";
    cin >> n;
    cout << "Los divisores de " << n << " son: \n";
    while (n)
    {
            for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << "\n";
        }
    }
    
    return 0;
    }
}
