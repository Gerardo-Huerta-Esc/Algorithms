#include <iostream>
#include <cmath>
using namespace std;


void ejemploFuncion(int num){ //Esta función cambia el valor del argumento a 50
    num = 50;
}


int main(){

    int minum = 10;
    cout << "El valor original: " << minum << endl;

    ejemploFuncion(minum);
    cout << "valor despues de llamar a la función: " << minum << endl;
}

/* El anteior codigo no funciona, porque minum se divide, en una división se queda el valor real de minum, y la otra copia se manda
a la función de ejemploFuncion, y ahí se hace el cambio. Lo malo es que al llamar a minum para ver que su valor es 50, en 
realidad su valor sigue siendo 10, ya que la copia de minum vale 50, pero no el minum real. A esto se le llama: "paso de parámetro por valor"


Para que funcione, se usa un concepto llamado "paso de parámetro por referencia", para hacerlo simplemente se le pone el simbolo &  al
Argumento de la función ejemploFuncion, así: 

  void ejemploFuncion(int &num){
    num = 50;
}

 */