/*Pedir al usuario dos números y crear un programa que compare esos dos números
   y diga si ambos son pares o impares.*/

#include <iostream>
using namespace std;

int main(){
    int num1;
    cout << "ingresa un número: " << endl;
    cin >> num1;

    int num2;
    cout << "ingresa otro número: " << endl;
    cin >> num2;

    if (num1%2==0 && num2%2 == 0 ){
        cout << num1 << " y " << num2 << " son pares" << endl;
    } else {
        cout << "Algunos de los números o ambos no son pares." << endl;
    }
}