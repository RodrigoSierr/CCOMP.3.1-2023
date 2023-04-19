#include <iostream>

using namespace std; 

int fibonacci(int n){
    if (n == 0 || n == 1)
        return 1;
    else 
        return fibonacci(n-2)+fibonacci(n-1);
}

void imprimirNFibo(int n){
        for(int i = 0; i < n; i++ )
            cout << fibonacci(i)<< "";
            cout <<endl;
}

int main(){
    int n;
    cout << "ingrese su numero; ";
    cin >> n;

    imprimirNFibo(n);
    //cout << "El fib es "<< fibonacci(n)<< endl;
    
    return 0;
}
/*#include <iostream>

using namespace std;

bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n = 2000000;
  long long sum = 0;

  for (int i = 2; i < n; i++) {
    if (is_prime(i)) {
      sum += i;
    }
  }

  cout << "La suma de todos los números primos por debajo de dos millones es: " << sum << endl;

  return 0;
}
*/