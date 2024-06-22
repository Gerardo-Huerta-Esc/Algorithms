/*Escribir un programa que pida al usuario su peso (en kg) y estatura
 (en metros), calcule el índice de masa corporal y lo almacene en una 
 variable, y muestre por pantalla la frase: Tu índice de masa corporal es
  <imc> donde <imc> es el índice de masa corporal calculado redondeando con
   dos decimales.*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    float peso;
    float estatura;
    float imc;

    cout << "ingresa tu peso en kg: " << endl;
    cin >> peso;
    
    cout << "ingresa tu estatura en m: " << endl;
    cin >> estatura;

    imc = peso/pow(estatura,2);
    cout << "IMC: " << fixed << setprecision(2) << imc << endl;

}