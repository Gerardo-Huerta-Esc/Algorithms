/*Escribir un programa que pida al usuario dos números y muestre por pantalla
su división. Si el divisor es cero el programa debe mostrar un error.*/

#include <iostream>
using namespace std;

int main (){
    float num1;
    cout << "Introduce un número: " << endl;
    float num2;
    cin >> num1;
    cout << "Introduce otro número " << endl;
    cin >> num2;

    if(num2==0){
        cout << "Error, no se puede dividir por cero" << endl; 
    }else{cout << num1/num2;}

}