/*
Escribir un programa que pregunte el nombre completo del usuario en la consola y después
muestre por pantalla el nombre completo del usuario tres veces, una con todas las letras 
minúsculas, otra con todas las letras mayúsculas y otra solo con la primera letra del nombre 
y de los apellidos en mayúscula. El usuario puede introducir su nombre combinando mayúsculas 
y minúsculas como quiera.
*/

#include <iostream>
#include <string>
#include <sstream> // Para istringstream
#include <algorithm> // para sst::transform
using namespace std;


// string para_una_palabra(string str) // esta función lo resuelve para una sola palabra
// {
//     std::string nombre;
//     cout <<"Ingresa un nombre: " << endl;
//     cin >> nombre;

//     transform(nombre.begin(),nombre.end(),nombre.begin(), ::toupper); // convertir a mayúsculas
//     cout << nombre << endl;
    

//     transform(nombre.begin(),nombre.end(),nombre.begin(), ::tolower);
//     cout << nombre << endl;

//     if(!nombre.empty()) {
//         nombre[0] = toupper(nombre[0]); // primera letra a mayúscula

//         transform(nombre.begin()+1,nombre.end(),nombre.begin()+1, :: tolower);
//     }
//         cout << nombre << endl;

//     return str; // extra code
// }

void capitalizeEachWord(string &str) { // paso por referencia
    bool capitalize = true;

    for (char &c : str) { //(elemento : contenedor) elemento es un paso por deferencia
        if (isspace(c)) { // isspace verifica si el carcter actual es un espacio en blanco
            capitalize = true;
        }else if (capitalize) {
            c = toupper(c);
            capitalize = false;   
        } else {
            c = tolower(c);
        }
    }
}



int main() {
    string str;
    cout <<"Ingresa un nombre: " << endl;
    getline(cin,str);
    
    string upperCase = str;
    transform(upperCase.begin(),upperCase.end(),upperCase.begin(), ::toupper); // convertir a mayúsculas
    cout << upperCase << endl;
    
    
    string lowerCase = str;
    transform(lowerCase.begin(),lowerCase.end(),lowerCase.begin(), ::tolower);
    cout << lowerCase << endl;

    
    string capitalized = str;
    capitalizeEachWord(capitalized);
    cout << capitalized << endl;


}





// int main(){
//     std::string nombre;
//     cout << "ingresa tu nombre: " << endl;
//     cin >> nombre;
//     int array [3] = {1,2,3};
//     for(int i=0;i<2;i++){
//         cout << nombre << endl;
//     }
// }

/* "The C Programming Language" de Brian Kernighan y Dennis Ritchie, 
y "Embedded Systems Programming in C and C++" de Michael Barr.

Aprender a programar a bajo nivel con C o C++ para trabajar en drivers y sistemas embebidos puede ser un desafío, pero es una habilidad valiosa y gratificante. Aquí tienes algunos recursos que te ayudarán a comenzar:

Aprender a programar a bajo nivel con C o C++ para trabajar en drivers y sistemas embebidos puede ser un desafío, pero es una habilidad valiosa y gratificante. Aquí tienes algunos recursos que te ayudarán a comenzar:

1. Aprende los conceptos básicos de C y C++: Comienza con tutoriales y cursos en línea que te enseñen los fundamentos de la programación en C y C++. 
   Aprende sobre variables, estructuras de control, punteros y gestión de memoria, ya que estos conceptos son fundamentales para programar a bajo nivel.

2. Libros y tutoriales especializados: Busca libros y tutoriales específicos sobre programación a bajo nivel, drivers y sistemas embebidos en C y C++. 
   Algunos libros populares incluyen "The C Programming Language" de Brian Kernighan y Dennis Ritchie, y "Embedded Systems Programming in C and C++" de Michael Barr.
3. Explora la arquitectura de sistemas embebidos: Familiarízate con la arquitectura de los sistemas embebidos y cómo interactúan con el hardware. 
   Aprende sobre registros, periféricos y la interfaz con el hardware a través de buses como UART, I2C, SPI, etc.
4. Práctica con proyectos pequeños: A medida que adquieras conocimientos, comienza a trabajar en proyectos prácticos que involucren la programación a bajo nivel. 
   Puedes intentar crear un driver simple para algún dispositivo o desarrollar una aplicación en un sistema embebido.
5. Participa en comunidades y foros: Únete a comunidades en línea de programadores y entusiastas de sistemas embebidos y drivers. 
   Es una excelente manera de obtener ayuda, compartir conocimientos y estar al tanto de las últimas tendencias y desafíos.
6. Estudia el código fuente abierto: Explora el código fuente abierto de proyectos de sistemas embebidos y drivers para comprender cómo se desarrollan estas 
   aplicaciones a bajo nivel.
7. Kits de desarrollo: Considera obtener un kit de desarrollo o una placa de desarrollo para sistemas embebidos. Estos kits generalmente incluyen documentación y 
   ejemplos de código que te ayudarán a familiarizarte con la programación a bajo nivel.
8. Practica la depuración: Aprende a utilizar herramientas de depuración y herramientas de desarrollo para encontrar y corregir errores en tu código a bajo nivel.

Recuerda que la programación a bajo nivel puede ser compleja y requiere paciencia y práctica. No tengas miedo de experimentar y cometer errores, ya que es parte
 del proceso de aprendizaje. Con dedicación y perseverancia, podrás desarrollar habilidades sólidas en programación a bajo nivel con C o C++ y trabajar en emocionantes proyectos de drivers y sistemas embebidos. ¡Buena suerte en tu aprendizaje!
*/