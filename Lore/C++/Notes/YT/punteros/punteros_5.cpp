/* PASO POR REFERENCIAS VS PASO DE PUNTEROS*/

#include <iostream>
using namespace std;


void cambiarValor(int *puntero){
    (*puntero)+=5; // el valor al que apunta el puntero es incrementado en 5
                  // el uso explícito de paréntesis mejora la claridad del código,
                 //  haciendo más evidente la intención de desreferenciar el puntero antes de realizar la operación aritmética. 
}    

int main(){

 int num = 5;

 cout << "Antes de llamar a la función: " << num << endl;

 cambiarValor(&num);

 cout << "Después de llamar a la función: " << num << endl;

}
/*Con todo esto, estamos modificando el valor de la variable num               (cambiando el valor de la variable mediante su dirección de memoria)
trabajando con su dirección de memoria y sin necesidad de hacer copia
de esta variable en tiempo de ejecución para modificar su valor.
De no hacer esto con punteros, tendríamos que generar un return en la función, y
resignar eso a otro valor para finalmente cambiar lo que está almacenado
en la variable, lo que en teoría es menos eficiente.
 */