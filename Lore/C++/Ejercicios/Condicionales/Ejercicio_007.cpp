/*Escribir un programa que pregunte al usuario su edad y muestre por pantalla si es mayor de edad o no.*/

#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "ingresa tu edad: " << endl;
    cin >> edad;

    if(edad <18){
        cout << "Eres menor de edad " << endl;
    }
    else{
        cout << "Eres mayor de edad" << endl;
    }
}