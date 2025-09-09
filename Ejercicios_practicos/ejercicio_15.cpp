//! Escriba un programa que pida constantemente números hasta que se ingrese el nú-
//! mero cero e imprima en pantalla la suma de to dos los números ingresados

#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    do {
        cout << "Ingrese un numero (0 para terminar) : ";
        cin >> numero;
        suma += numero;
    } 
    while (numero != 0); 
    cout << "La suma de los numeros ingresados es: " << suma << endl;
    return 0;
}
