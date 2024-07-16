/*Escribir un programa que pregunte al usuario una cantidad a invertir, 
el interés anual y el número de años, y muestre por pantalla el capital 
obtenido en la inversión.*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float inversion;
    float interés_anual;
    float años;
    float proyección;

    cout << "Ingresa la inversión a hacer: " << endl;
    cin >> inversion;

    cout << "Ingresa el interés anual: " << endl;
    cin >> interés_anual;

    cout << "Ingresa los años en inversión: " << endl;
    cin >> años;


    proyección = inversion*(pow(1+interés_anual,años));
    cout << "La proyección de las ganancias es: " << proyección << endl;

}
