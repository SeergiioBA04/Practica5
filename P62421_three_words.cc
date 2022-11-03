/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P62421_three_words.cc
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 3 2022
* @brief Escribe un programa que lee tres palabras a, b y c, e imprima una línea con c, b y a en este orden. 
* @see https://jutge.org/problems/P62421_en
*/

#include<iostream>

int main() {
  std::string primera_palabra, segunda_palabra, tercera_palabra;
  std::cin >> primera_palabra >> segunda_palabra >> tercera_palabra;
  std::cout << tercera_palabra << " " << segunda_palabra << " " << primera_palabra << std::endl;
}
