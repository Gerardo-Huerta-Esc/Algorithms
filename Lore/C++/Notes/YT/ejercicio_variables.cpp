#include <iostream>
using namespace std;

int main(){
    string nombre = "Juan";
    int edad {21};
    float salario;

    cout << "Introduce tu salario:" << endl;
    cin >> salario; // para pedir un input, es como input en
    cout << "El salario es: " << salario << endl<< "El nombre es: " << nombre << endl << "La edad es: " << edad << endl;

    return 0;
}
