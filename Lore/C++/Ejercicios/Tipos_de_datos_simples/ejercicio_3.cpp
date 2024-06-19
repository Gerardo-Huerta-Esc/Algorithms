/*Escribir un programa que pregunte el nombre del usuario en la consola y después de 
que el usuario lo introduzca muestre por pantalla la cadena 
¡Hola <nombre>!, donde <nombre> es el nombre que el usuario haya introducido.*/

 #include <iostream>
 using namespace std;

 int main(){

    std::string nombre;
    cout << "Ingresa un nombre" << endl;
    cin >> nombre;
    cout << "¡Hola "<< nombre << "!";
 }