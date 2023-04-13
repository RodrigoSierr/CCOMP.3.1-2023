#include <iostream>

using namespace std;

long long fact(int n){
    if(n == 0 )
    return 1;
    else 
    return n*fact(n-1);
}

int main(){
    int n;
    cout <<"Ingrese el numero: ";
    cin >> n;

    cout <<"El factorial de" << n << "es"<< fact(n)<<endl;
    return 0;
}