/*Construye un programa que tome como entrada un número total de horas y calcule
 la cantidad equivalente en semanas, días y horas. Por ejemplo, si se ingresan 1000
 horas, el programa debe mostrar que esto equivale a 5 semanas, 6 días y 16 horas.*/

 #include <iostream>
 using namespace std;

// suponiendo que, semana  = 7 días y que 1 día  = 24 horas
// hay 168 horas en una semana

 int main(){
    int horas;
    cout << "ingresa un número de horas: " << endl;
    cin >> horas;

    cout << "Semanas: " << horas/168 << endl;

    cout << "Días: " << (horas%168)/24 << endl; 

    cout << "Horas: "  << (horas%24) << endl;

 }