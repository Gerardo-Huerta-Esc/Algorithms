#include <iostream>
#include <cmath> // se ocupa para llamar la función pow()
using namespace std;


double elevaPotencia(double base, double exponente); /* Esto es una función prototipo. Lo que hace es informar al compiolador que en algún
 punto del programa vamos a utilizar una función que se llama elevaPotencia con esos parámetros especificados. Así que si la función está 
 definida después de la llamada, el compilador no devolverá un error porque ya sabrá de antemano, con esta línea al principio del 
 programa, que existe una llamada elevaPotencia. Entonces, el flujo de ejecución del programa va a pasar de la llamada de la función a
 buscar en dónde está definida la función.*/




// con las funciones se debe especificar el tipo de dato que va a devolver
double elevaPotencia(double base, double exponente){ // aquí se agregan los argumentos que recibe la función, y el tipo de dato que son.
       
       return pow(base,exponente);  // aquí agregamos lo que queremos que devuelva
}

int main(){
    cout << "El resultado es: " << elevaPotencia(5,3); // desde aquí se hace el llamado a la función.
}

/*Nota:
Se puede utilizar void al inicio de la función, en lugar del double, para declarar que la función no tiene que devolver datos
pero si se hace eso, en la función prototipo también debe decir void al principio para también aclarar que no debe
devolver ningún tipo de dato*/