/*Escribir una función que calcule el total de una factura tras aplicarle el IVA.
La función debe recibir la cantidad sin IVA y el porcentaje de IVA a aplicar, y
devolver el total de la factura. Si se invoca la función sin pasarle el porcentaje
de IVA, deberá aplicar un 21*/


#include <iostream>
using namespace std;


void factura(float cantidad, float IVA=0.21){ // IVA debe estar en  %
    char letra;
    cout << "¿Desea ingresar un IVA? Y/N" << endl;
    cin>> letra;
    if (letra== 'Y'){
        float IVA_2;
        cout << "ingresa el IVA: " << endl;
        cin >> IVA_2;
        cout << "IVA aplicado: " << IVA_2 <<".\n" << "Total: " << cantidad*(1+IVA_2) << endl;
    }else{
        cout << "IVA aplicado: " << IVA <<".\n" << "Total: " << cantidad*(1+IVA) << endl; 
    }
}



int  main(){
    factura(100,0.85);
    factura(100);
}