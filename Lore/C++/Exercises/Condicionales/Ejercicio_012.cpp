/*Los alumnos de un curso se han dividido en dos grupos A y B de acuerdo
al sexo y el nombre. El grupo A esta formado por las mujeres con un nombre
anterior a la M y los hombres con un nombre posterior a la N y el grupo B
por el resto. Escribir un programa que pregunte al usuario su nombre y sexo, y
muestre por pantalla el grupo que le corresponde.*/

#include <iostream>
using namespace std;

int main(){
    string nombre;
    string sexo;

    cout << "Ingresa tu nombre: " << endl;
    cin >> nombre;

    cout << "Ingresa tu sexo, Hombre o Mujer: " << endl;
    cin >> sexo;
    
    char letra;
    letra = nombre[0];
    
    if(sexo == "Mujer" && letra < 'M' || sexo == "Hombre" && letra >'N'){
        cout << "Perteneces al grupo A." << endl;
    }else{
        cout << "Perteneces al grupo B" << endl;
    }
}
