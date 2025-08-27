//! Escriba un programa que pida constantemente números hasta que se ingrese el nú-
//! mero cero e imprima en pantalla el mayor de to dos los números ingresados

#include <iostream>
using namespace std;

int main() {
    int numero, mayor = 0;

    do {
        cout << "Ingrese un numero (0 para terminar): \n";
        cin >> numero;
        if (numero > mayor) {
            mayor = numero;
        }
    } 
    while (numero != 0);
    if (mayor != 0) {
        cout << "El mayor numero ingresado es: " << mayor << endl;
    }
    else {
        if (numero == 0) {
            cout << "No se ingresaron numeros mayores a cero." << endl;
    }
    }
}
