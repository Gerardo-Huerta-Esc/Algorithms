/*Escribir un programa que pregunte el nombre del usuario en la consola y
después de que el usuario lo introduzca muestre por pantalla <NOMBRE>tiene
<n>letras, donde <NOMBRE>es el nombre de usuario en mayúsculas y <n>es
el número de letras que tienen el nombre*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string name;
    cout << "Insert a name: " << endl;
    cin >> name;
    
    int j =0;
    for (char n: name ){
        j++;
    }

    transform(name.begin(),name.end(),name.begin(),::toupper);
    
    cout << "The name: " << name << " have: " << j << " letters." << endl;
}