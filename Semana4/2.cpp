#include <iostream>

using namespace std;

bool esCaracter(char car){
    
    int val = static_cast <int> (car);

    if(val >= 65 && val <= 90 || val >= 97 && val <=122 ){
        cout << "El caracter ingresado es una letra." << endl;
    }else{
        cout << "El caracter ingresado no es una letra." << endl;
    }
}
int main(){
    char n;
    cout << "Ingrese un caracter: ";
    cin >> n;

}

