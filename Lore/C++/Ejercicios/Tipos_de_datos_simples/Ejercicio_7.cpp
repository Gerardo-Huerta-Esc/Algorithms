/*Escribir un programa que pregunte al usuario por el número de horas trabajadas
y el coste por hora. Después debe mostrar por pantalla la paga que le corresponde.*/

#include <iostream>
using namespace std;

int main(){
    int horas;
    int coste_hora;


    cout << "¿Cuál es el num de horas trabajadas? " << endl;
    cin >> horas;

    cout << "cuál es el coste por hora? " << endl;
    cin >> coste_hora;
    
    int salario = horas*coste_hora;
    cout << "Salario:" << salario << endl;
}