/*Escribir un programa que pida al usuario un número entero y muestre por
pantalla si es par o impar.*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "ingresa un número: " << endl;
    cin >> num;

    if(num%2==0){
        cout << "El número es par." << endl;
    }else{
        cout << "El número es impar. " << endl;
    }
}