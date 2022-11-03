/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P15613_temperatures
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 3 2022
* @brief  Programa que lee un número entero que representa una temperatura dada
*         en grados Celsius y dice si hace calor, si hace frío o si está bien.
*         Supongamos que hace calor si la temperatura es superior a 30 grados, que hace
* frío si la temperatura es inferior a 10 grados y que está bien en caso
* contrario. Además, advierte si con la temperatura dada el agua herviría o si
* el agua se congelaría. Suponiendo que el agua hierve a 100 o más grados y que el agua se congela a 0 o menos grados.
* @see https://jutge.org/problems/P15613_en
*/

#include<iostream>

int main() {
  int grados{0};
  std::cin >> grados;  
  if (grados > 30) {
    std::cout << "it's hot" << std::endl;
  }
  else if (grados < 10) {
    std::cout << "it's cold" << std::endl;
  }
  else {
    std::cout << "it's ok" << std::endl;
  }
  // hierve el agua o lo contrario
  if (grados <= 0) {
    std::cout << "water would freeze" << std::endl;
  }
  else if (grados >= 100) {
    std::cout << "water would boil" << std::endl;
  }
}
