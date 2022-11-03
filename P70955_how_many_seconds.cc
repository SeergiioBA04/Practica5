/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file  How many seconds are they? 
  * @author Sergio Borrell Alberto alu0101563015@ull.edu.es
  * @date Nov 3 2022
  * @brief  Al introducir un numero el programa te pasa los anyos, dias, horas,
  * segundos a segundos en total.
  * @bug No exiten fallas
  * @see https://jutge.org/problems/P70955
  */

#include<iostream>

int main() {
  int anyo{0};
  int dias{0};
  int hora{0};
  int minutos{0};
  int segundos{0};
  std::cin >> anyo >> dias >> hora >> minutos >> segundos;
  int total_segundos{0};
  int anyo_en_segundos{0};
  int dias_en_segundos{0};
  int hora_en_segundos{0};
  anyo_en_segundos = ((((anyo * 365)*24)*60)*60);
  dias_en_segundos = (((dias*24)*60)*60);
  hora_en_segundos = ((hora*60)*60);
  minutos_en_segundos = (minutos*60);
  int minutos_en_segundos{0};
  total_segundos = anyo_en_segundos + dias_en_segundos + hora_en_segundos +
  minutos_en_segundos + segundos;
  std::cout << total_segundos << std::endl;
}
