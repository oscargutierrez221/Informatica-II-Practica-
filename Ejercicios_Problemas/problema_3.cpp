//! Escriba un programa que deb e leer un mes y un día de dicho mes para luego decir
//! si esa combinación de mes y día son válidos. El caso más esp ecial es el 29 de febrero, en dicho caso
//! imprimir posiblemente año bisiesto.

#include <iostream>
using namespace std;

int main() {
    int mes, dia;
    cout << "Ingrese un mes (1-12): ";
    cin >> mes;
    cout << "Ingrese un dia (1-32): ";
    cin >> dia;
    bool es_valido = true;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (dia < 1 || dia > 31) es_valido = false;
            break;
        case 4: case 6: case 9: case 11:
            if (dia < 1 || dia > 30) es_valido = false;
            break;
        case 2:
            if (dia < 1 || dia > 29) es_valido = false;
            else if (dia == 29) cout << "Posiblemente año bisiesto." << endl;
            break;
        default:
            es_valido = false;
            cout << "Mes invalido." << endl;
    }
    if (es_valido) cout << "La combinacion de mes y dia es valida." << endl;
    else cout << "La combinacion de mes y dia no es valida." << endl;
}
