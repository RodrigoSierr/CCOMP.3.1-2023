#include <iostream>

using namespace std;

bool esCaracter(char car){
    
    int val = static_cast <int> (car);

    if(val >= 65 && val <= 90 || val >= 97 && val <=122 ){
        return true;
    }
        else
    return false;
}
    int main(){
    char car;
    cout << "Ingrese un caracter: ";
    cin >> car;
    
    cout << esCaracter(car)<<endl;
    return 0;
}