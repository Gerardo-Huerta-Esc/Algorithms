#include <iostream>
using namespace std;

int main(){


    // ----------- Ejercicio 1 ------------------

    for(int i=0;i<10;i++){
        cout << "Hola perritos" << endl;
    }


    // ----------- Ejercicio 2 ------------------
    int array00[] = {1,2,3,4,5};
    
    for(int i=0; i<5  ;i++){
        cout << "Edad: " << array00[i] << endl;
    }


    // ---------- Ejercicio 3 -------------------

    int array000[2][2] = {
        {1,2},
        {4,5}
    };

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        {
        cout << array000[i][j] << endl;
        }
    }
   




}