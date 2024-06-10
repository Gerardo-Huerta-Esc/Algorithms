/*Las referencias son como alias para una variable
cualquier operación sobre el alias afecta directamente a la 
variable original.

Usar esto mejora el rendimiento porque evita copias del dato en memoria*/ 

#include <iostream>
#include <string>
using namespace std;


// --------- EJEMPLO 1 ----------------

void intercambio(int &a, int &b){
    int temporal = a;
    a=b;
    b=temporal;
}

int main(){
    int variable1 = 10;
    int variable2 = 20;

    cout << "Antes del intercambio, variable1: " << variable1 << " variable2: " << variable2 << endl;

    intercambio(variable1,variable2);

    cout << "Después del intercambio, variable1: " << variable1 << " variable2: " << variable2 << endl;

}
