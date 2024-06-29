/*
Escribir un programa que lea un entero positivo $n$, introducido por el 
usuario y después muestre en pantalla la suma de todos los enteros desde 1
hasta $n$. La suma de los $n$ primeros enteros positivos puede ser calculada
de la siguiente forma:

$$suma = \frac{n(n+1)}{2}$$
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int suma;
    cout << "Ingresa un entero positivo: ";
    cin >> n;

    suma = (n*(n+1))/2;
    cout << "Suma: " << suma << endl;
}