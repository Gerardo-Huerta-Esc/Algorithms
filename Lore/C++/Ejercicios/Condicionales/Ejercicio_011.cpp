/*Para tributar un determinado impuesto se debe ser mayor de 16 años y tener
unos ingresos iguales o superiores a 1000 € mensuales. Escribir un programa
que pregunte al usuario su edad y sus ingresos mensuales y muestre por pantalla
si el usuario tiene que tributar o no*/

#include <iostream>
using namespace std;

int main(){
    cout << "Ingresa tu edad: " << endl;
    int edad;
    cin >> edad;

    cout << "Ingresa tus ingresos mensuales: " << endl;
    int ingresos;
    cin >> ingresos;

    if(edad > 16 && ingresos > 1000){
        cout << "Tienes que tributar." << endl;}

    else{cout << "No debes tributar." << endl;}
}