/*Escribir un programa que muestre por pantalla el resultado de la siguiente operación aritmética 
 
$$ \left( \frac{3+2}{2*5}  \right)^2$$*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float base = (3.0+2.0)/(2.0*5.0);
    float exponente = 2.0;
    float resultado = pow(base,exponente);
    cout << "Resultado: " << resultado << endl;
}