/*FUNCIONES INLINE

Funciones cuyo cuerpo se sitúa en el mismo punto del código que la llamada

Funcions declarando la funcion como inline y hacer la llamda en el mismo lugar en el que se define la funcion inline
La principal utilidad es reducir el consumo de recursos, lo cual es especialmente útil para
funciones pequeñas a las que se le hacen muchas llamadas. Ventajas:
         -Optimización de rendimiento.
         - Menor tiempo de ejecución.
         -  El compulador decide (parace que el compilador decide si se ejecuta como inline o no)

         sintaxys: simplemente se pone inline enfrente de la funcion, es todo.
         */


#include <iostream>
using namespace std;



inline int suma(int a, int b){
    int resultado = a + b;
    cout << resultado << endl;
    return resultado;
}


int main(){

    int a = 1;
    int b = 2;
    suma(a,b);

}
