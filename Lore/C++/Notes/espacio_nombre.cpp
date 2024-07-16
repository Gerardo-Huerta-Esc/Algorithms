#include <iostream>

/*namespace es un espacio de nombres, y se utiliza para asignar a una variable varios nombres
se debe escribir afuera de la función*/

namespace primero{
    int x = 0;
}

namespace segundo{
    int x = 1;
}


int main(){
    // para no estar haciendo referencia en cada línea a que espacio nombre pertenece la variable:
    // se usa esta línea:
    // using namespace primero;

    std::cout<< "x = "<<primero::x; // imprime la x del primer espacio nombre.
    std::cout<< "x ="<<segundo::x;  // imprime la x del segundo espacio nombre.
    

    /* Cuado se quiere imprimir algo se tiene que llamar con std:: Pero par ano hacer eso
    a cada rato, podemos importar el std::, así*/

    using std::string; // ya no debemos usar std:: para declarar un tipo de dato string
    using std::cout;

    string nombre = "Hola"; // aquí ya no se ocupó std:: para declarar la variable tipo string
    cout<<"numero = "<<nombre;
     
    return 0;
}

