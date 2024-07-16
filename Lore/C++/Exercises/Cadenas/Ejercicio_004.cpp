/*Escribir un programa que pida al usuario un número entero y muestre por
pantalla si es par o impar.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Give an integer number n" << endl;
    cin >> n;

    if(n%2==0){
        cout << n << " is a even" << endl;
    }else{
        cout << n << " is odd" << endl;
    }
}