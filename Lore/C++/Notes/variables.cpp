#include <iostream> 



int main()
{
    int x;  //Declara la variable y el tipo de dato
    x = 5;  // asigna un valor a la variable
 
    int y = 6; // declaración y asignación en una sóla línea


    
 
    int suma = x + y; //sumar dos variables 
    std::cout<<suma; //mostrar la suma de las variables


    // float y double

    double valor1 = 7.5; // taza de bits 64, puede almacenar 15 dígitos
    
    float valor2 = 7.5; // taza de bits: 32, puede almacenar 7 decimales. Genera más margen de error.


    // char 

    char valor3 = 'A'; //solo almacena un caracter. Tiene tamaño de 1byte

    // booleanos ('Bool')

    bool valor4 = true; // solo acepta true o false

    // string
    
    std::string valor5 = " Geralt"; // sólo acepta doble comilla. Necesariamente se tiene que poner std::
    
    //Para concatener string y texto

    std::cout<<"Hola "<<valor5;

    const double PI = 3.1415169; // con const se le dice al compilador que esa variable no cambia a lo largo del programa
     // en C++, una variable con mayúsculas significa que es una constante que no cambia en la ejecución.
     // una constante se debe declarar e inicializar en la misma línea, al mismo tiempo.
     // una constante con const en C++ se refiere a que el dato no puede cambiar, pero no tiene aque ser un int
     // puede ser un string  no cambie nunca.

     /*
    float
            Precisión: float es un tipo de dato de punto flotante de precisión simple.
            Tamaño: Generalmente ocupa 4 bytes (32 bits) de memoria.
            Precisión decimal: Puede representar aproximadamente 7 dígitos decimales significativos.


    double
            Precisión: double es un tipo de dato de punto flotante de doble precisión.
            Tamaño: Generalmente ocupa 8 bytes (64 bits) de memoria.
            Precisión decimal: Puede representar aproximadamente 15-16 dígitos decimales significativos.
    */





}


