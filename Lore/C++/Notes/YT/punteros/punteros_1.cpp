/*Lo punteros son una característica fundamental en C++ que permiten una gestión eficiente y detallada
de la memoria y otros recursos de hadware. Los punteros son variables cuya función principal es almacenar
direcciones de memoria.

¿Qué puede haber en estas direcciones de memoria almacenadas por los punteros?

- Variables primitivas
-Arrays
-clases
-Otro puntero
-Funciones
-Bloque de memoria dinámica
-Bloque de memoria reservada
-Etc...

Ventajas:

-Control directo de la memoria.
-Flexibilidad en el manejo de datos.
-Interacción con el hadware a bajo nivel.
-Paso de parámetros por referencia.
-Compatibilidad con C.
*/

#include <iostream>
using namespace std;

int main(){
    int variable = 10;

    int * puntero; // ese ya es la declaración del puntero
    puntero = &variable; //Asigna el espacio de memoria en el que "variable" se encuentra al puntero.

    cout << variable  << endl; // imprime la variable
    cout << &variable << endl; // imprime la representación del espacio en memoria de la variable
    cout << puntero << endl; // imprime el espacio en memoria en donde esta la variable a la que el puntero se asignó.
              // en resumen, las ultimas dos lineas imprimen lo mismo.
    cout << *puntero << endl; // imprime el valor asignado al puntero
    cout << &puntero << endl; // dirección de memoria donde se almacena el puntero en sí mismo


// como *puntero accede al valor al que se le asignó, entonces podemos cambiar dicho valor:
    
    *puntero = 55;
    cout << variable << endl; // el valor de la variable ahora es 55 
}
