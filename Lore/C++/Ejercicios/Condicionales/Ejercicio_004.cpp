/*En MegaPlaza se hace un 20% de descuento a los clientes cuya compra supere los $300. 
Diseña un programa que solicite al usuario el total de su compra y determine la cantidad 
que debe pagar Si la compra es elegible para el descuento, muestra el monto total con el 
descuento aplicado. Si no es elegible para el descuento, informa al usuario que no se aplica 
el descuento y muestra la cantidad que debe pagar.*/

#include <iostream>
using namespace std;

int main(){
    float compra;
    cout << "Ingresa tu compra total: " << endl;
    cin >> compra;

    if (compra <= 300.0){
        cout << "total a pagar: " << compra;
    }
    else{
        compra = compra*0.8;
        cout << "Total a pagar: " << compra << endl;
    }
}