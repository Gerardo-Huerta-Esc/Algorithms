/* FUNCIONES RECURSIVAS

toda función recursiva debe tener un caso base para detener la recursividad.
*/


#include <iostream>
using namespace std;

    int factorial(int n){

    if(n==0){
        return 1; // caso base
    }else{
        return n*factorial(n-1);
    }
}


int main(){
    cout << factorial(5);

}