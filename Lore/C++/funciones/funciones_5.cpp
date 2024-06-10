
// ---------------- auto return -----------------

/* Cuando utilizamos esto, ya no es necesario establecer el tipo de dato que la funcion debe de
retornar. El compilador va a dejar a la funcion sin una asignacion de datos a retornar.*/

#include <iostream>
using namespace std;

auto suma(int a, int b){ //auto nos permite usar la funcion sin tener que establecer ningun tipo de dato que la funcion debe devolver
    return a+b;
}

int main(){
    int a=5, b=6;
    int resultado = suma(a,b);
    cout << resultado ;
}