#include <iostream>
using namespace std;



int main(){

    int a = 5;
    int b = 5;

//  SUMA

    a+=b;//a a se le suma b, por lo que a ya  vale 15.


// RESTA ASIGNACIÓN
  
    a -= b;


// MULTIPLICACIÓN ASIGNACIÓN
    
    a *= b;


// DIVISION ASIGNACIÓN

    a /= b;

// DIVISION ENTERA 

     a / b; // es como la división // en python

// MÓDULO
 
    a % b; // parece que es como % de python. 

// INCREMENTO SUFIJO

    a++;

// DECREMENTO SUFIJO

    a--; 

// INCREMENTO PREFIJO

    ++a; 

// DECREMENTO PREFIJO
   
    --a;

// NEGACIÓN

  // ! 


// Y LÓGICO

   a && b;


// O LÓGICO

   a || b;

// -------------------- Ejemplo -------------------

int z = ++a; // asigna a z el valor de 1 + "a", pero también suma 1 + a

cout << "Valor de a: " << a << endl;
cout << "Valor de z: " << z << endl;


int w = b++; // asigna a z el valor de b sin aplicar 1 + b, luego aplica 1 + b.

cout << "Valor de b: " << b << endl; // Output: 6
cout << "Valor de w: " << w << endl; // Output: 5
 
/* 
--------------- ASIGNACIÓN AUTOMÁTICA DE TIPOS --------------------------
Si los operandos son de diferente tipo, C++ convertirá uno de ellos:

- La regla general de conversión es que el tipo de dato del resultado será el tipo de dato más "amplio" o "preciso"
  de los operandos involucrados enla operación. 

       ---------- ejemplo ------------
*/

   auto a1 = 3; // si no sabes el tipo de dato, se usa auto para que C++ le asigne un tipo de dato por defecto.
            // en este ejemplo, C++ le asigna int, pero debería asignarle double. Quizá es porque hay mucho código aquí
            // pero definitivamente double es el tipo de dato más preciso, y por eso es le que debería haberle asignado.
   float b1 = 4.0f;

   double c1 = 8.0;

   cout << typeid(a1).name()   <<endl ; // imprime el tipo de dato de a1. Output: i,  ya que corresponde a int 

 //       --------- EJERCICIO CONDICIONALES -----------------

//    int edad;
//    string examen;

//    cout << "Ingresa tu edad" << endl;
//    cin >> edad;

//    cout << "¿Pasaste el examen?" << endl;
//    cin >> examen;

//    if (edad >= 18 || examen == "si"){ // No funciona si uso tilde en la í
//     cout << "Puedes tramitar la licencia para conducir " << endl;
//    }
//    else {
//     cout << "No puedes tramitar la licencia para conducir. " << endl;
//    }



// -------------     OTRO EJERCICIO ---------------

/* Se da beca si su calificación es superior a 8 o
   si la distancia del domicilio al centro es superior a 20 km y si además los ingresos familiares son
   inferiores a 20000
*/

int calif, distancia, ingresos;


cout << "Ingresa tu calificación"  << endl;
cin >> calif;

cout << "Ingresa tu distancia"  << endl;
cin >> distancia;

cout << "Ingresa tu ingreso"  << endl;
cin >> ingresos;


if (calif > 8 || distancia > 20000 && ingresos < 20000){
    cout << "Se te ortorgará la beca" << endl;
}else{
    cout << "No se te otorgará la beca" << endl;
}








}