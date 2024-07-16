/*
Crea un programa que pida al usuario 3 números, esos 3 números los debe
mostrar ordenados de mayor a menor.
*/

#include <iostream>
using namespace std;


void sort(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        if(num2 > num3){
           cout << num1 <<  " > "<< num2 <<  " > " << num3 << endl;
        }
        if(num3 > num2){
            cout << num1 <<  " > "<< num3 <<  " > " << num2 << endl;
        }
     }
    else if (num2 > num1 && num2 > num3){
        if(num1 > num3){
            cout << num2 <<  " > "<< num1 <<  " > " << num3 << endl;
        }
        if(num3 > num1){
            cout << num2 <<  " > " << num3 <<  " > " << num1 << endl;
        }
    }
    else if(num3 > num1 && num3 > num2){
        if(num1 > num2){
            cout << num3 <<  " > "<< num1 <<  " > " << num2 << endl;
        }
        if(num2 > num1){
            cout << num3 << " > " << num2 <<  " > " << num1 << endl;
        }
    }
}

int main(){
    int num1 = 100;
    int num2 =5;
    int num3 = -11;

    sort(num1,num2,num3);

}