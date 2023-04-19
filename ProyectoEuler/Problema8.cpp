/*Los cuatro dígitos adyacentes en el número de 1000 dígitos que tienen el mayor producto son 9 × 9 × 8 × 9 = 5832.
Encuentra los trece dígitos adyacentes en el número de 1000 dígitos que tienen el mayor producto. ¿Cuál es el valor de este producto?*/

#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                cout << "El triplete pitagórico es: " << a << ", " << b << ", " << c << endl;
                cout << "El producto es: " << a * b * c << endl;
                return 0;
            }
        }
    }
    cout << "No se encontró un triplete pitagórico que cumpla con la condición." << endl;
    return 0;
}