/*Hacer un programa que lea un número entero y muestre si el número es 
múltiplo de 10*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "ingresa un número entero: " << endl;
    cin >> num;

    if (num%10 == 0){
        cout << num << " es múltiplo de 10." << endl;
    }
    else{
        cout << num << " no es múltiplo de 10." << endl;
    }
}