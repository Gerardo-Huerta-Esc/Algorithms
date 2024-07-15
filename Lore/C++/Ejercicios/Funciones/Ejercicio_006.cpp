/*Escribir una función que reciba una muestra de números en una lista y
devuelva su media.*/
#include <iostream>
#include <vector>
using namespace std;

float mean(vector <float> arg ){
    float count = 0.0;
    for (int i = 0; i<arg.size();i++){
        count += arg[i]; 
    }

    float mean = count/arg.size();
    cout << mean << endl;
    return mean;  

}

int main(){
    vector <float> lista {1,2,3,4,5.0,6}; 
    mean(lista);
}



