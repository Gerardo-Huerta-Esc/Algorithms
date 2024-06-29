/*Pedir dos números y decir cuál es el mayor o si son iguales*/

#include <iostream>
using namespace std;

int main(){
    float num;
    cout << "Ingresa un número flotante: " << endl;
    cin >> num;
    float num2;
    cout << "Ingresa otro número flotante: " << endl;
    cin >> num2;

    if(num==num2){
        cout << "Los  números ingresados son iguales";
    }
    else if(num>num2){
        cout << num << " es mayor que " <<num2 << " ." << endl;
    }
    else{
        cout << num2 << " es mayor que " << num << " ."  << endl;
    }
}