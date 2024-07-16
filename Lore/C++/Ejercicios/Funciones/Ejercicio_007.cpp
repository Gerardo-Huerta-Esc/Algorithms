/*Escribir una función que reciba una muestra de números en una lista y
devuelva otra lista con sus cuadrados.*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


vector<int> function(vector <int> arg){
    vector<int> arg_result;
    for (int i=0; i<arg.size();i++){
        arg_result.push_back(pow(arg[i],2));
    }
        // Imprimir los elementos del vector
    cout << "Resultados del cuadrado de los números:" << endl;
    for (int j = 0; j < arg_result.size(); j++) {
        cout << arg_result[j] << " ";
    }
    cout << endl;
    
    return arg_result;
}


int main(){
    vector <int> lista {1,2,3,4,5,6,7,8,9};
    function(lista);
    return 0;
}