/*Guillermo tiene N dólares. (Es decir, el usuario tiene que poner la cantidad que tiene Guillermo),
 Luis tiene la mitad de lo que posee Guillermo.
Juan tiene la mitad de lo que poseen Luis y Guillermo juntos. Hacer un 
programa que calcule e imprima la cantidad de dinero que tienen entre los tres.*/

/*
Guillermo = N
Luis = N/2
Juan = 3/4*N
Total = Guillermo + Luis + Juan
*/

#include <iostream>
using namespace std;



int main(){
    float N;

    cout << "Ingresa un numero: " << endl;
    cin >> N;

    float Guillermo = N; 
    float Luis = N/2;
    float Juan = (3.0/4.0)*N;

    float Total = Guillermo + Luis + Juan;
    cout << "La cantidad total es: " << Total << endl;
}