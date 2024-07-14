/*Escribir una función que calcule el área de un círculo y otra que calcule el
volumen de un cilindro usando la primera función.*/

#include <iostream>
#include <cmath>
using namespace std;



float area(float r, bool print = true) {
    constexpr double pi = 3.14159265358979323846;
    float numero = pi * pow(r, 2);
    if (print) {
        cout << "El valor de area del círculo es: " << numero << endl;
    }
    return numero;
}



float volumen(float r,float h){
    float area_circulo = area(r,false);
    float volumen_cilindro = area_circulo*h;
    cout << "El volumen del cilindro es: " << volumen_cilindro << endl;
    return volumen_cilindro;
}


int main(){
    volumen(1.0,2.0);
}