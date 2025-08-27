//! Escriba un programa que pida un número N e imprima el p erímetro y área de un
//! círculo con radio N. Nota: use 3.1416 como una aproximación de pi

#include <iostream>
using namespace std;
#define PI 3.1416

int main() {
    float radio, perimetro, area;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    perimetro = 2 * PI * radio;
    area = PI * radio * radio;
    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El area del circulo es: " << area << endl;
    return 0;
}
