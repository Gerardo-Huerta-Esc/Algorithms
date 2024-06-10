/* 
Los vectores sí pueden crecer o decrecer en tamaño de forma dinámica
- Tamaño dinámico
- Los elementos almacenados deben ser del mismo tipo
- tiene n elementos y los índices van de 0 a -n
*/

#include <iostream>
#include <vector> // se necesita esta línea para trabajar con vectores.
using namespace std;

int main(){
    vector <int> vector1; 
// palabra reservada "vector"
// int es el tipo de dato que incluye
// al final se escribe el nombre del vector.



//se puede establecer un tamaño de vector, como:
vector <char> vector2(5); // tiene 5 elementos pero al no espeficicar cuales son, por defecto son todos 0.
// El tipo de dato que almacena es un char

// vectores con valores:
vector <int> vector3 {1,2,3,4,5};     // aquí no se especificó su tamaño, ya que los vectores son dinámicos.
vector <char> vector4 {'x','y','z'}; // vector conteniendo char
vector <double> vector5 (350,25.5);  // vector con 350 elementos, y en cada elemento tiene un valor de 25.5. Nota que es con paréntesis ()






// ----------------- método at() ------------------------



// vamos a acceder a la posición 3 del vector3
cout << vector3[2]; // se puede hacer así. Aquím si le pasamos un rango fuera del vector nos va a pasar un dato en posición de memoria sin localizar
cout << vector3.at(2); // el método at() comprueba los límites del rango del vector. No devuelve un dato en posicion de memoria sin localizar

// para reasignar un elemento podemos hacerlo así:
vector3[2]=75; // este método no tiene en cuenta el rango del vector
vector3.at(2) = 81; // este método sí tiene en cuenta el rango del vector a la hora de asignar un valor


// ----------------- método push_back() -----------------

// este método se utiliza para agregar elementos a un vector. No de manera posicional, lo agrega a la cola
// es algo así como el .append() en lista de python:

vector3.push_back(102); // ya se agregó el elemento al final del vector





// -----------------------------------------------------------------------------
// ----------------------------- Ejercicio -------------------------------------
// --------------- Hay que generar un vector vacio e irlo llenando -------------
// --------------------- AL final imprimos el tamaño del vector5 ---------------


vector <int>  vector6 {};

for (int i=0; i<5; i++){
   int valor;

   cout << "ingresa un valor" << endl;
   cin >> valor;

   vector6.push_back(valor);

}
cout << "el tamaño del vector es" << vector6.size();


cout << "A continuación se muestran los elemen tos almacenados en vector6" << endl;

for (int j=0; j<vector6.size();j++ ){
    cout<<vector6[j] <<endl;
}

cout << "El tamaño del vector6: " << vector6.size() << endl;

}

