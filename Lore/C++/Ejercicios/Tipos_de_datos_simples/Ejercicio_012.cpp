/*
Una juguetería tiene mucho éxito en dos de sus productos: payasos y muñecas.
Suele hacer venta por correo y la empresa de logística les cobra por peso de
cada paquete así que deben calcular el peso de los payasos y muñecas que 
saldrán en cada paquete a demanda. Cada payaso pesa 112 g y cada muñeca 75 g. 
Escribir un programa que lea el número de payasos y muñecas vendidos en el 
último pedido y calcule el peso total del paquete que será enviado.
*/

#include <iostream>
using namespace std;

int main(){
    int payasos = 15; // 112 gr
    int muñecas = 35; // 75 gr
    int peso_payasos = 112*payasos;
    int peso_muñecas = 75*muñecas; 



    cout << "La cantidad de payasos es: "<< payasos << endl
        << "El peso de los payasos es: " << peso_payasos << " gr" << endl
        << "La cantidad de muñecas es: " << muñecas << endl
        << "El peso de las muñecas es: " << peso_muñecas << " gr"<< endl;

}
