#include <iostream>

using namespace std; 
    
    int fib(int n){
        int n1, n2, fibo;
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
    
    int main(){
    int n; 
    
    cout << "Ingrese el numero: ";
    cin >> n;

    cout << "El fib es" << fib(n)<< endl;
    return 0;
    }

    