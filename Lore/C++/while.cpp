#include <iostream>
using namespace std;

int main(){
    //  int i {1};

    //  while(i<=10){
    //     if (i%2==0){
    //         cout << "el numero: " <<i<< " es par" << endl;      
    //     }
    //     else{
    //         cout << "el numero: " <<i<< " no es par" << endl;  
    //     }
    //     i++;
    //  }


  // Ingresa un numero hasta que el numero sea 0

    int num = 1;
    while(num != 0){
        cout << "Introduce un número" << endl;
        cin >> num;
        cout << "El número que ingresaste es: " << num << endl;
    }
    
    if(num == 0){
        cout << "Fin del codigo" << endl;
    }


}
















