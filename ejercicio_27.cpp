//! Escriba un programa que actúe como una calculadora con op eraciones de suma,
//! resta, multiplicación y división, el usuario deb e ingresar los op erandos y 
//! la op eración a realizarr

#include <iostream>
using namespace std;

int main() {
    cout << "Bienvenido, que desea hacer? " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    int opcion;
    cin >> opcion;
    cout << "Ingrese los numeros: " ;
    float num1, num2, resultado;
    cin >> num1 >> num2;
    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero no es permitida." << endl;
            }
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
 return 0;
}
