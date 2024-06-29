#include <iostream>
#include <cmath>
using namespace std;


    void mostrarMensaje(string mensage, int veces=1){
        for (int i=0;i<veces;i++){
            cout << mensage << endl;
        }
    }


int main(){
    mostrarMensaje("Hola amigos"); // es opcional ponerle el segundo argumento, ya que por defecto es 1
    mostrarMensaje("hola amigos",5); // aquí le pasamos el segundo argumento = 5, asi que el mensaje lo imprime 5 veces.
}


