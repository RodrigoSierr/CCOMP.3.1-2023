#include <iostream>

using namespace std;

void invertirRecursivo(int arr[], int inicio, int fin) {
  if (inicio >= fin) {
    return;
  }
  
  // Intercambiar los valores de inicio y fin
  int temp = arr[inicio];
  arr[inicio] = arr[fin];
  arr[fin] = temp;
  
  // Llamar a la función de forma recursiva para invertir el resto del arreglo
  invertirRecursivo(arr, inicio + 1, fin - 1);
}

void invertirIterativo(int arr[], int tam) {
  int inicio = 0;
  int fin = tam - 1;
  
  // Iterar sobre el arreglo intercambiando los valores de inicio y fin
  while (inicio < fin) {
    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;
    inicio++;
    fin--;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int tam = 5;
  
  // Mostrar el arreglo antes de invertirlo
  cout << "Arreglo antes de invertirlo: ";
  for (int i = 0; i < tam; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
  // Invertir el arreglo usando la función recursiva
  invertirRecursivo(arr, 0, tam - 1);
  
  // Mostrar el arreglo después de invertirlo usando la función recursiva
  cout << "Arreglo después de invertirlo (recursivo): ";
  for (int i = 0; i < tam; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
  // Invertir el arreglo usando la función iterativa
  invertirIterativo(arr, tam);
  
  // Mostrar el arreglo después de invertirlo usando la función iterativa
  cout << "Arreglo después de invertirlo (iterativo): ";
  for (int i = 0; i < tam; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
  return 0;
}