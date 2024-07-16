/*Hacer un programa que lea un carácter por teclado y conmpruebe si es una
letra mayúscula*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout << "ingresa un carácter: " << endl;
    cin >> str;
    string copy_str = str;

    string upperCase = str;
    transform(upperCase.begin(),upperCase.end(),upperCase.begin(), ::toupper);

    if (upperCase == copy_str){
        cout << "La letra ingresada es mayúscula." << endl;
    } else{cout << "La letra ingresada es minúscula" << endl; 
    }
}