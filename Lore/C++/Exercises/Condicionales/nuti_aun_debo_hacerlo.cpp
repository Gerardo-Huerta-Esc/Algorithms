/*Escribe un programa que seleccione un número aleatorio entre 1 y 100, y que permita al 
usuario adivinar el número. El programa debe dar pistas al usuario si el número es mayor 
o menor que la suposición, y debe contar el número de intentos.*/















































// #include <iostream>
// #include <cstdlib>  // Para usar la función rand()
// #include <cstdint>  // Para los tipos uint32_t y uint16_t

// int main ()
// {
//   uint32_t r;
//   uint32_t n32;
//   uint32_t p;
//   uint16_t i = 0;
  
//     r = rand ();

//     n32 = r % 19 + 3;

//     std::cout << "Estoy pensando en un numero de 3 a 21, Cual es?\n";

//     while (true)
//     {

//       std::cout << "proponme un numero?\n";
    
//       std::cin  >> p;
//       i++;
    
//       if (p == n32)
//       { 
//          break; 
//       } 
//       else if (p > n32)
//       {
//         std::cout << "No, dame uno menor\n";
//       }
//       else if (p < n32)
//       {
//         std::cout << "No, dame uno mayor\n";
//       }
//       else
//       {
//         std::cout << "situacion desconocida:ERROR!!!\n";
//       }

//     }
//     std::cout << "Adivinaste en " << i << " intentos\n";
// }
