/*Escribir un programa que pregunte el nombre del usuario en la consola y después de que el 
usuario lo introduzca muestre por pantalla <NOMBRE> tiene <n> letras, donde <NOMBRE> es el 
nombre de usuario en mayúsculas y <n> es el número de letras que tienen el nombre.*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    
    string nombre;
    cout << "Ingresa tu nombre de usuario: " << endl;
    cin >> nombre;
    
    transform(nombre.begin(),nombre.end(),nombre.begin(), ::toupper);
  
    int j = 0;
    for (char i: nombre ){
        j++;
    }

    cout << nombre << " Tiene: " << j << " letras ";
}