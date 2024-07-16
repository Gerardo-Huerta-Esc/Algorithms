/*Escribir un programa que almacene la cadena de caracteres contraseña en
una variable, pregunte al usuario por la contraseña e imprima por pantalla si
la contraseña introducida por el usuario coincide con la guardada en la variable
sin tener en cuenta mayúsculas y minúsculas.*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string contraseña = "PASSWORD";
    string str;
    cout << "ingresa contraseña: " << endl;
    //cin >>str;
    getline(cin, str);  // Usa getline para leer toda la línea
    
    string upperCase = str;
    transform(upperCase.begin(),upperCase.end(),upperCase.begin(), ::toupper);
    
    if (contraseña == upperCase){
        cout << "La contraseña es correcta. Puede ingresar" << endl;
    }else{
        cout << "Contraseña incorrecta" << endl;
    }

}


