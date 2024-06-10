/*
Esta instrucción switch-case es una instrucción condicional especialmente útil cuando se 
necesita realizar acciones específicas según el valor de una variable, sin la necesidad de 
encadenar múltiples sentencias if-else.

NOTA:

- Típicamente al final de todos los casos se usa un "default", es como un else. Se usa para
decirle al programa qué hacer si no se cumplen ninguna de las condiciones del switch.

- En C++ switch-case sólo funciona con datos tipo int, char, long, etc. Per no con strings a menos
  que se utilice un mapa de hash o alguna otra estructura auxiliar.

- switch va a ejecutar cada caso si es que no se pone un break; al final de cada caso.
*/


// #include <iostream>
// using namespace std;


// ----------------- EJEMPLO -----------------


// int main(){

//     int variable;
//     cout << "ingresa un valor (1/2/3) para la variable" << endl;
//     cin >> variable;

//     switch (variable){
//         case 1: // si valor = 1
//             cout << "El valor de la variable es 1" << endl;
//             break;

//         case 2:// si valor = 2
//              cout << "El valor de la variable es 2. Por lo que debes ingresar dos valoresc" << endl;
//              int a,b;
//              cin >> a >> b;
//              cout << "Un valor ingresado fue: " << a << endl << "y el otro es: " << b << endl;
//              break;

//         case 3:// si valor = 3
//             cout << "El valor de la variable es 3" << endl;
//             break;

//         default: 
//             cout << "opcion no valida";

//     }

#include <iostream>
using namespace std;

// -------------- OTRO EJEMPLO ---------------
int main(){

char idioma;

cout << "Ingresa el idioma (E/I)" << endl;
cin >> idioma;

switch (idioma){
    case 'E':
        cout << "Seleccionaste el idioma Español" << endl;
        break;
        
    case 'I':
        cout << "Seleccionaste el idioma ingles, ahora selecciona una letra (A/B/C)" << endl;
        char letra;
        cin >> letra;
        
        switch (letra)
        {
        case 'A':
            cout << "elegiste la letra A " << endl;
            break;
        case 'B':
            cout << "Elegiste la letra B " << endl;
            break;
        default:
            cout << "Dígito no válido"<< endl;
            break;
        }


       
     }

}

