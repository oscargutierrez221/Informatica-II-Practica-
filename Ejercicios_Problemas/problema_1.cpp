//! Escriba un programa que identifique si un carácter ingresado es una vo cal, una
//! consonante o ninguna de las 2 e imprima un mensa je según el caso.

#include <iostream>
using namespace std;

int main () {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        switch (letra) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                cout << "La letra " << letra << " es una vocal." << endl;
                break;
            default:
                cout << "La letra " << letra << " es una consonante." << endl;
        }
    } else {
        cout << "El caracter " << letra << " no es una letra." << endl;
    }
}