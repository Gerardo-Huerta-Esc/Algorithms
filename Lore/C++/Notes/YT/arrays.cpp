#include <iostream>
using namespace std;

/* 
 son de la forma:
                 int mi_matriz [n];  // Esta es una declaracion del array
                el índice va de 0 hasta n-1
                  
 se declara el tipo de datos que contendrá y n es la cantidad de datos. No se pueden crear arrays con distintos tipos de datos, solo uno.f
 Los array son estáticos, no dinámicos (no cambian durante la ejecución). Sólo los vectores son dinámicos.
 
*/

// -------------- declarando e inisializando arrays --------------------



int array1 [5] {1,2,3,4,5};
int array2 [5] {1,2,3}; // si el tamaño es 5, pero solo se pasan 3 datos. Se asume que el valor del resto son ceros.
int array3 []  {1,2,3,4,5,6}; // aquí no se especifíca el tamaño


//definir tamaño del array mediante una constante:
const int salarios = 5;
int array4 [salarios] = {1,2,3,4,5};


// ----------------- arrays uni-dimensionale ------------------------------

int main(){
    int edades[10] {15,20,25};
    cout << edades[0] << endl; // Para ver el primer elemento de el array
    

    // Para sobreescribir los valores de un array:
    edades[7] = 45; // accedemos al elemento 7 y lo cambiamos por 45.
    cout << edades[7];

    //Ahora se va a pedir al usuario que ingrese el nuevo valor para edades[8]
    cout << endl<< "ingresa un  nuevo valor para edades[8]" << endl;
    cin >> edades[8];
    cout << "El nuevo valor de edades[8] es: " << edades[8];



//-------------------- arrays bi-dimensionales -------------------------------
    // el orden es rows x colums
    int array_2D[4][5] {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };

    cout << array_2D[0][0];

  
//-------------------- arrays tri-dimensionales -------------------------------

        // el orden es: capas x rows x columns
    int array_3D[3][4][5] {         // hay 3 capas, 4 rows y 5 columns
    {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    },
    {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    },
    {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    }
    };

    cout << array_3D[0][0][0];





 }



















