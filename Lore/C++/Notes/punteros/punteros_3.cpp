/*En C++ un array es básicamente un puntero al primer elemento del array*/

#include <iostream>
using namespace std;

int main(){
    int cifras0[]={1,2,3}; // ejemplo de como un array funciona como un puntero al primer elemento del mismo array
    cout << cifras0 << endl; // es verdad, el output de esta linea genera una dirección en la memoria
    cout << *cifras0 << endl; // siguiendo la sintaxys de los arrays esto debería devolver el valor numérico del primer elemento

/* --------------------- ARITMETICA DE PUNTEROS ----------------------

los punteros son variables que almacenan direcciones de memoria, y la aritmetica de punteros 
se utliza para calcular direcciones de memoria, lo que permite acceder y manipular datos en 
diferentes posiciones de un array o bloque de memoria.*/


     int cifras[]={10,20,30}; 
     int *ptr_cifras {cifras}; // declara un puntero a entero. Por defecto en C++, este puntero va a 
                              // apuntar al primer elemento del array
     cout << ptr_cifras[0]; // imprime el primer valor del array
     cout << ptr_cifras; // imprime la direccion de memoria del primer elemento del array
     cout << *ptr_cifras; // accede al valor del primer elemento del array


}