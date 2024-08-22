/*Escribir una función que reciba una muestra de números en una lista y
devuelva un diccionario con su media, varianza y desviación típica*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std; // aquí se tiene que utilizar esta estructura de datos que simula un diccionario de python

vector<int> function(vector<int> arg) {
    vector<int> arg_result;
    int contador = 0;  // Inicializar la variable contador
    for (int i = 0; i < arg.size()+1; i++) {
        contador += i;
    }
    cout << "La media es :" <<  contador / arg.size() << endl;

    return arg_result;
}

// Almenos hasta aquí ya logré escribir la parte de la media

int main() {
    vector<int> lista{1, 2, 3, 4, 5, 6, 7, 8, 9}; // lista que va a recibir
    function(lista);

    unordered_map<string, int> diccionario;
    diccionario["uno"] = 1;
    diccionario["dos"] = 2;
    diccionario["tres"] = 3;

    cout << "El valor de 'dos' es: " << diccionario["dos"] << endl;

    return 0;
}
