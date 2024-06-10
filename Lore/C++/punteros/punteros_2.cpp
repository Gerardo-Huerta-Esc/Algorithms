#include <iostream>
using namespace std;

int main(){

    int * int_ptr{nullptr}; // ptr es como se abrevia un puntero. 
                            // aquí el puntero se inicializa pero aún no apunta a nada, por eso se le pasa el argumento nullptr.

    int_ptr = new int;  //  hace que int_ptr apunte a un nuevo bloque de memoria en el heap que puede almacenar un entero.
                       // El operador new reserva suficiente memoria en el heap (montón) para almacenar un entero y devuelve un puntero a esa memoria.
                      // El puntero se almacena en el stack, pero apunta al espacio de memoria en el heap.

    cout << int_ptr << endl; // imprime la dirección de memoria a la que apunta en el heap
 

    *int_ptr = 10; // asignamos un valor a ese espacio de  memoria reservada a la que apunta el puntero int_ptr
    cout << "Valor antes del delete: " << *int_ptr << endl;

    delete int_ptr; // libera la memoria ocupada
         // en este punto el puntero es un puntero colgante, porque ya no tiene contenido pero sigue apuntando al espacio de memoria ahora vacío.

    int_ptr = nullptr; // esto se pone para decirle al puntero que ya no apunte a ningún espacio de memoria en el heap
    
  
    


}                      