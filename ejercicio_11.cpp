//! Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
//! tiplicar hasta 10xN

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero (N): ";
    cin >> n;
    cout << "Tabla de multiplicar del " << n << " hasta 10x" << n << ":\n";
    for (int i = 1; i <= 10; ++ i) {
        cout << i << " x " << n << " = " << i * n << endl;
    }
    return 0;
}
