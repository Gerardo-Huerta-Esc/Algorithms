#include <iostream>
#include <list>
#include <algorithm> // para usar reverse y leer myList al revés.
using namespace std;



bool isPalindrome(int x)
{
    bool  booleano = true;
    if(x<0){
        booleano = false;
        //cout << booleano;
    }
    else
    {
        list<int> myList;
        while(x>0)
        { 
            myList.push_back(x%10);
            x = x / 10; // en C++ si los numeros son enteros esto devuelve la división entera como // en python
        }
        
        list<int> myListReverse = myList; // copiar la lista original
        reverse(myListReverse.begin(), myListReverse.end()); // invertir la lista original. Con los operadores .begin y .end
                                                            //le decimos a la funcion que invierta los elementos
                                                           // que se encuentran en el rango que marcan esos parámetros
        if (myList == myListReverse){                                                                                 
            //cout << booleano;
            booleano = true;
         }
        else{
            booleano = false;
            //cout << booleano;
        }
    }
    return booleano;
}



int main(){
    //cout << isPalindrome(121); // esto imprime 1 si es true y 0 si es false
    cout << boolalpha; // esto configura el cout para que los booleanos se impriman como true o false
    cout << isPalindrome(-121);
}


