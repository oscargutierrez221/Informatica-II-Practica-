/*El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la figura es 7
    *
   ***
  *****
 *******
  *****
   ***
    * 
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Ingrese un numero impar: ",
    cin >> n;
    if (n % 2 == 0) {
        cout << "El numero debe ser impar. \n";
        return 1;
    }
    int espacios = n / 2;
    int asteriscos = 1;
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < espacios; j++) cout << " ";
        for (int j = 0; j < asteriscos; j++) cout << "*";
        cout << "\n";
        espacios--;
        asteriscos += 2;
    }
    espacios = 1;
    asteriscos = n -2;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < espacios; j++) cout << " ";
        for (int j = 0; j < asteriscos; j++) cout << "*";
        cout << "\n";
        espacios++;
        asteriscos -= 2;
    }
    return 0;
}