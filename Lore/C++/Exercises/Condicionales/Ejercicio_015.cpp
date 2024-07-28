/*Escribir un programa para una empresa que tiene salas de juegos para todas
las edades y quiere calcular de forma automática el precio que debe cobrar a sus
clientes por entrar. El programa debe preguntar al usuario la edad del cliente
y mostrar el precio de la entrada. Si el cliente es menor de 4 años puede entrar
gratis, si tiene entre 4 y 18 años debe pagar 5€ y si es mayor de 18 años, 10€.*/


#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;

    if(edad<4){
        cout << "Puedes entrar gratis.";
    }
    else if (4<edad && edad <18)
    {
        cout << "Debes pagar 5€. " << endl;
    }
    else
    {
        cout << "Ya que eres mayor de 18 años debes pagar 10€" << endl;
    }  
    
}