/*¿Como interactual los punteros con las contantes?
Estos se dividen en tres casos:

-punteros a contantes:
    Es un puntero que apunta a una constante. Esto significa que el valor al que apunta no puede
    ser modificado a través del puntero aunque el puntero sí puede cambiar y apuntar a otra dirección.

-punteros  constantes:
    Puntero cuya dirección de memoria no puede cambiar después de su inicialización; sin embargo, 
    el valor al que apunta sí puede ser modificado, a menos que sea una constante.

-punteros constantes a constantes:
    Combinación de los dos casos anteriores. No se puede cambiar la dirección a la que apunta ni modificar
    el valor almacenado en esa dirección*/

#include <iostream>
using namespace std;

int main(){

    // ---------------------------- PUNTERO A CONSTANTE: -----------------------

    const  int edad = 10;
    const int *ptr = &edad; // se pone const int porque es el tipo de constante a la que apunta el puntero
                           // mas no le da la naturaleza de "puntero constante".
    cout << *ptr << endl; // imprime el valor al que apunta el puntero

    //  *ptr = 15;   esto no se puede hacer ya que al valor que apunta no se puede cambiar!!
    
    // Lo que sí se puede hacer es cambiar la dirección a la que el puntero apunta
    
    const int edad_2 = 15;
    const int *ptr = &edad_2;


    // -------------------------- PUNTERO CONSTANTE ---------------------------

    int edad_3 = 10;
    
    int *const ptr_2 = &edad_3;  // con esta sintxys el puntero es constante. Así que no se puede
                                // modificar nuevamente a qué dirección apunta el puntero
    *ptr_2 = 25; // ahora sí se puede cambiar el valor al que está apuntando el puntero, al contrario 
                // de lo que pasaba en el caso de "puntero a constante"
    // ptr_2 = &edad; // pero esto no se puede hacer ya que es un puntero constante, y por tanto
                      // no se puede cambiar la dirección a la que apunta, solo el valor al que apunta.



    // ----------- PUNTEROS CONSTANTE A CONSTANTE ---------------

    const int edad_4 = 20;
    const int * const ptr_3 = &edad_4; // sintaxys de un puntero constante a constante

    //*ptr_3 = edad; // esto no se puede hacer, es decir, no se puede cambiar el valor al que está apuntando 
    //ptr_3 = &edad; // esto tampoco funciona, ya que no se puede cambiar la dirección a la que apunta el puntero






}