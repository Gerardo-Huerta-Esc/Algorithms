
#include <iostream>
using namespace std;

int main(){

    float precio_calidad_media = 35.5;
    float precio_calidad_alta = 55.3;
    float metros_calidad_media;
    float metros_calidad_alta;
    float total;
    const float IVA = 0.21;

    cout << "Cuántos metros quieres instalar con calidad media?" << endl;
    cin >> metros_calidad_media;

    cout << "cuántos metros quieres instalar con calidad alta?" << endl;
    cin >> metros_calidad_alta;
    
    total = (precio_calidad_media*metros_calidad_media + precio_calidad_alta*metros_calidad_alta)*IVA;
    
    cout << "El total del precio es: " << total << endl << "Se tienen 30 días de validez" << endl;
    return 0;
}
