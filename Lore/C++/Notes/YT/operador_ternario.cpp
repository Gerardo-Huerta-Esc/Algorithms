/*
sintaxis: (condición a evaluar)? Valor si es verdadero : Valor si es falso

- Similar a la estructura if-else.
- Todo lo que podemos hacer con if-else lo podemos hacer con el operador ternario y viceversa.

   Ayuda para ser más concisos en asignaciones simples
   a diferiencia de if, el operador ternario es una expresión, no una sentencia.
*/

#include <iostream>
using namespace std;

// dice si el número es par o no.
int main(){
    
    int num;
    cout << "Introduce un número entero: " << endl;
    cin >> num;

    if (num%2==0){
        cout << "El número: " << num << " es par" << endl;
    }else{
        cout << "El número: " << num << " es impar" << endl;
    }
// Esto mismo se puede hacer con operador ternario, que es como una contracción de listas:

    int num2;
    cout << "introduce un numero entero";
    cin >> num2;
    cout << num2 << "es " << ((num2%2==0)? "es par " :  "es impar ");
       


}