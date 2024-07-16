/*Un obrero necesita calcular su salario semanal, el cual se obtiene de 
la siguiente manera:

-si trabaja 40 horas o menos, se le paga \$16 por hora

-si trabaja más de 40 horas, por cada hora extra se le paga \$20 

Crea un programa que pregunte al usuario las horas que ha trabajado y que le muestre su pago total 
de acuerdo a lo que trabajó.*/

#include <iostream>
using namespace std;

int main(){

    int salario_total;

    int pago1 = 16; // si trabaja 40>
    int pago2 = 20; // si trabaja 40<
    
    int horas;
    cout << "Ingresa las horas trabajadas: " << endl;
    cin >> horas;

    if (horas <= 40){
        salario_total = horas*pago1;
        cout << "El salario es: " << salario_total;
    }
    else{
        int salario1 = 40*16;
        int salario2 = (horas-40)*20;
        int salario_total_2 = salario1 + salario2;
        cout << "El salario es: " << salario_total_2;
    }
    
}