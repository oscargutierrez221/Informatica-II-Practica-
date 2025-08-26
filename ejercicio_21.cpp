//! Escriba un programa que pida un carácter C, si es una letra la deb e convertir de
//! mayúscula a minúscula y viceversa e imprimirla

#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        c = c - ('a' - 'A');
        cout << "El caracter en mayuscula es: " << c << endl;
    } else if (c >= 'A' && c <= 'Z') {
        c = c + ('a' - 'A');
        cout << "El caracter en minuscula es: " << c << endl;
    } else {
        if (c >= '0' && c <= '9') {
        cout << "El caracter es un digito: " << c << endl;
    } else {
        cout << "El caracter no es una letra ni un digito." << endl;
    }
    }
    return 0;
    }
    
