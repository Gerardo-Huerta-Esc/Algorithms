/* Utilizado cuando necesitas realizar una operación un número indeterminado de veces y la condición
de parada depende de algún cálculo o entrada del usuario que ocurre dentro del bucle. Pero si también, 
necesitas que el cuerpo del búcle se ejecute la menos una vez
 Sintaxys:
    do {
        // cuerpo del bucle
    } while (condición);
*/

#include <iostream>
using namespace std;

int main(){
    int opcion;
    
    do{
        cout << "menu de opciones:\n";

        cout << "Opción 1\n";
        cout << "Opción 2\n";
        cout << "Opción 3\n";
        
        cout << "Ingresa una opción: ";
        cin >> opcion;
        
        if(opcion != 3){
            cout << "has elefido la opcion " << opcion <<  ".\n";

        } 
    }while(opcion!=3);
    cout << "has elegido salir";
    

}