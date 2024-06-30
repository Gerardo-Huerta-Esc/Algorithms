/*Imagina que acabas de abrir una nueva cuenta de ahorros que te ofrece
el 4% de interés al año. Estos ahorros debido a intereses, que no se 
cobran hasta finales de año, se te añaden al balance final de tu cuenta 
de ahorros. Escribir un programa que comience leyendo la cantidad de dinero 
depositada en la cuenta de ahorros, introducida por el usuario. Después el 
programa debe calcular y mostrar por pantalla la cantidad de ahorros tras 
el primer, segundo y tercer años. Redondear cada cantidad a dos decimales.*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float capital;
    int años [3] {1,2,3};
    float ahorros;
    cout << "Introduce el capital: "<< endl;
    cin >> capital;
    int contador; 

    for(int i=0;i<3;i++){
    ahorros = capital*(pow(1+0.04,años[i]));
    contador =i;
    cout << "El ahorro en: " << contador+1 << " años será de: " << fixed << setprecision(2) << ahorros << endl;
    } 
                                                    /*std::fixed: Fuerza a std::cout a usar notación de punto fijo.
                                                    std::setprecision(2): Establece la precisión a 2 decimales. 
                                                    Cuando se usa junto con std::fixed, controla el número de dígitos 
                                                    después del punto decimal.*/

    // cout << años[0];//1
    // cout << años[2];//3    
}
