#include <iostream>

using namespace std; 
    
    long long fib(int n){
        long long n1, n2, fibo;
        n1 = n2 = fibo = 1;
   /* if(n == 1 || n == 1)
        cout <<"El fib de "<< n << "es "<< 1<<endl;
    else{*/
        for(int i = 1; i < n; i++){
            fibo = n1 + n2;
            n1 = n2;
            n2 = fibo;
        }
        return fibo;
        }
    void imprimirNFibo(int n){
        for(int i = 0; i < n; i++ )
            cout << fib(i)<< "";
            cout <<endl;
    }



    int main(){
    int n; 
    
    cout << "Ingrese el numero: ";
    cin >> n;

    cout << "El fib es" << fib(n)<< endl;
    return 0;
    }