#include <iostream>

using namespace std; 

int main(){
    int n; 
    
    cout << "Ingrese el numero: ";
    cin >> n;

    int n1, n2, fib;
    n1 = n2 = 1
    if(n == 1 || n == 1)
        cout <<"El fib de "<< n << "es "<< 1<<endl;
    else{
        for(int i = 1; i < n; i++){
            fib = n1 + n2;
            n1 = n2;
            n2 = fib;
        }
        cout <<"El fib de "<< n << "es "<< 1<<endl;
    }







    return 0;
}