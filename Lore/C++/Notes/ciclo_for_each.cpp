/* 
Se usa para recorrer coleccoiines, como los arrays o los contenedores (vector, list, set, map), el bucle for es determinado, 
es decir, se deben saber los elementos del contenedor, pero el bucle for-each es literalmente "por cada", por lo que
el bucle for-each recorre el contenedor aún si es incremental como un vector, que es dnámico en C++.
Sintaxys:
     for (declaración :  contenedor { cuerpo } )
*/

#include <iostream>
#include <vector>
using namespace std;



// --------------- Ejercicio 1 ---------------
int main(){
    int edades[] = {1,2,3,4,5}; 
    for(int i:edades){ // nohay necesidad de especificar cuál es el tamaño del objeto a recorrer para delimitar los indices del for
        cout << "edad: "<< i << endl; // el valor del array se guarda directamente en el iterador, no hay necesidad de llamarlo como:
    }  
                                   //                                                                                        edades[i]










}