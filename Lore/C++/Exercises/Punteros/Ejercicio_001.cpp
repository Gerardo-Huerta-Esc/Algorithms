/*Ejercicio: Intercambio de Valores Usando Punteros
Escribe un programa en C++ que intercambie los valores de dos variables usando punteros.

Instrucciones:
Define dos variables enteras y asígnales valores.
Define dos punteros que apunten a estas dos variables.
Escribe una función swap que reciba como parámetros dos punteros a enteros y que intercambie los valores de las variables a las que apuntan.
Muestra los valores de las variables antes y después de llamar a la función swap.*/

#include <iostream>
using namespace std;


int swap(int * puntero_1, int * puntero_2){
    int x = 1;
    int y = 2;

    cout << "Valor asignado al puntero 1: " << *puntero_1 << endl;
    cout << "Valor asignado al puntero 2: "  << *puntero_2 << endl;

    *puntero_1 = y;
    *puntero_2 = x;

        
    cout << "Intercambio de valores asingnados a los punteros: " << endl;

    cout << "Valor asignado al puntero 1: " << *puntero_1 << endl;
    cout << "Valor asignado al puntero 2: "  << *puntero_2 << endl;

    return *puntero_1;
}



int main(){

    int x = 1;
    int y = 2;

    int * puntero_x;
    puntero_x = &x;

    int * puntero_y;
    puntero_y = &y;

    swap(puntero_x,puntero_y);
}