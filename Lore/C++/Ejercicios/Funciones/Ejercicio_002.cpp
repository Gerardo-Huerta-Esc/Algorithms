/*Escribir una función a la que se le pase una cadena <nombre>y muestre por
pantalla el saludo ¡hola <nombre>!.*/

#include <iostream>
using namespace std;


void Hola(){
    string name;
    cout << "give a name: " << endl;
    cin >> name;
    cout << "¡Hola " <<name<< "!" << endl;
}

int main(){
    
    Hola();

}