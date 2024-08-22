/*Escribir una función que reciba una muestra de números en una lista y
devuelva un diccionario con su media, varianza y desviación típica*/

#include <iostream>
#include <unordered_map>
using namespace std; // aquí se tiene que utilizar esta estructura de datos que simula un diccionario de python

int main() {
    unordered_map< string, int> diccionario;
    diccionario["uno"] = 1;
    diccionario["dos"] = 2;
    diccionario["tres"] = 3;

    std::cout << "El valor de 'dos' es: " << diccionario["dos"] << std::endl;

    return 0;
}