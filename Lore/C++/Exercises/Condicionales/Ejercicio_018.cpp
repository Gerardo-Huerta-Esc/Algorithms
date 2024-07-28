/*Pedir un número al usuario entre 0 y 99999 y el programa le debe decir al
usuario después de ingresar el número cuántas cifras tiene.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cout << "into a number: " << endl;
    cin >> num;

    string num_string = to_string(num);
    cout << "El número: " << num <<" tiene: " << num_string.length() << " cifras." << endl;
}