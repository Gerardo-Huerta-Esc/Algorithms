/*Escribir una función que reciba un número entero positivo y devuelva su
factorial*/
#include <iostream>
using namespace std;

void factorial(int num){
    int count = 1;

    for (int i=1; i<num+1; i++){
        count *= i;
        cout << i<< endl;
    }
    cout << count;  
}

int main(){
    factorial(10);
}
