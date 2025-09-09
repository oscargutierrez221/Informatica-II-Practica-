//! Escriba un programa que adivine un número A (entre 0 y 100) seleccionado p or el
//! usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
//! el usuario usará los símb olos `>', `<' y `=' para indicarle al programa si B es mayor, menor o igual
//! que A. El programa imprimira un nuevo número B, con base en simb olo ingresado p or el usuario, y
//! rep etira el pro ceso hasta acertar el número seleccionado p or usuario

#include <iostream>
using namespace std;

int main() {
    int min = 0, max = 100, guess;
    char responde;

    cout << "Piensa en un numero entre 0 y 100. \n" ;
    cout << "Usa '<' si mi numero es menor al tuyo. \n";
    cout << "Usa '>' si mi numero es mayor al tuyo. \n" ;
    cout << "Usa '=' si mi numero es igual al tuyo. \n";

    do {
        guess = min + (max - min) / 2;
        cout << "Tu numero es: " << guess << endl;
        cout << "Es tu numero? (>, <, =): ";
        cin >> responde;

        if (responde == '>') {
            min = guess + 1;
        } else if (responde == '<') {
            max = guess - 1;
        }
    } while (responde != '=');

    cout << "Tu numero es: " << guess << endl;

    return 0;
}
