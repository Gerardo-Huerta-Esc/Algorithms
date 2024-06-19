/*
La calificación final de un estudiante de informática se determina en función de sus 
calificaciones en cuatro aspectos de su rendimiento académico: participación, primer
 examen parcial, segundo examen parcial y examen final. Las ponderaciones para cada 
 aspecto son las siguientes: Participación: 10\% , primer examen parcial: 25\%, segundo 
 examen parcial: 25\%, examen final: 40\%. Desarrolla un programa que solicite al usuario 
 ingresar las calificaciones obtenidas en cada uno de estos aspectos. El programa debe calcular
  e imprimir la calificación final del estudiante basándose en las ponderaciones mencionadas.
*/

#include <iostream>
using namespace std;

int main(){
    float examen_1;
    float examen_2;
    float examen_3;
    float participación;
    float total;
    
    cout << "Ingresa la calificación del examen 1: " << endl;
    cin >> examen_1;

    cout << "Ingresa la calificación del examen 2: " << endl;
    cin >> examen_2;

    cout << "Ingresa la calificación del examen 3: " << endl;
    cin >> examen_3;

    cout << "Ingresa la calificación de las participaciones: " << endl;
    cin >> participación;

    total = examen_1*0.25 + examen_2*0.25 + examen_3*0.4 + participación*0.1;
    cout << "La calificación final es: " << total << endl;

}