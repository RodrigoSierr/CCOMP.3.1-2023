#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa;

    cout << "Introduce la longitud del primer cateto: ";
    cin >> cateto1;

    cout << "Introduce la longitud del segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}
