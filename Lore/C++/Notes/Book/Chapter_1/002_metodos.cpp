
#include <string>
#include <iostream>
using namespace std;



class CCuenta
{                         
    private: string nombre; 
    private: string cuenta;
    private: double saldo;
    private: double tipoDeInteres;





// declaración del método. Obviamente necesita estar dentro de una clase
public : void asignarNombre(string nom) // Método tipo public. Accesible para cualquier otra calse, subclase o función externa que lo llame.
{                       // los parentesis indican a C++ que asifnarnombre es un método y no un atrubuto.
    if (nom.length() == 0)
    {
        cout << "Error: cadena vacía\n";
        return;
    }
    nombre = nom;
}


// otra clase

public : double estado()
{
    return saldo;
}


};

//  CREAMOS UNA INSTANCIA

int main(){


    CCuenta cuenta01; // Crea un objeto instanciado de La clase CCuenta, llamado: "cuenta01" 

    cuenta01.asignarNombre("Perrito"); // establecemos el estado para el método

    cout << cuenta01.estado() << endl; // llamamos al método estado



    return 0;
}