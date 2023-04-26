#include <iostream>
using namespace std;

bool esPalindromoRecursivo(int arr[], int inicio, int fin) {
    // Caso base: Si el tamaño del arreglo es 0 o 1
    if (inicio >= fin) {
        return true;
    }
    // Caso recursivo: Verificar si los elementos en los extremos son iguales
    if (arr[inicio] == arr[fin]) {
        // Verificar el siguiente par de elementos
        return esPalindromoRecursivo(arr, inicio + 1, fin - 1);
    }

    return false;
}

bool esPalindromoIterativo(int arr[], int tam) {

    for (int i = 0, j = tam - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int tam1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 4, 5};
    int tam2 = sizeof(arr2) / sizeof(arr2[0]);

    if (esPalindromoRecursivo(arr1, 0, tam1 - 1)) {
        cout << "El arreglo arr1 es un palindromo" << endl;
    } else {
        cout << "El arreglo arr1 no es un palindromo" << endl;
    }

    if (esPalindromoIterativo(arr2, tam2)) {
        cout << "El arreglo arr2 es un palindromo" << endl;
    } else {
        cout << "El arreglo arr2 no es un palindromo" << endl;
    }

    return 0;
}
