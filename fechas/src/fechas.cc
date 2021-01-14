/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Alicia G. Cruz Pérez
 * @date 10/01/2021
 * @brief Date class Implementation
 *        Having all the member function definitions inside the class can make the class harder to manage and work with
 *        It’s common to separate class declaration / implementation
 *        For classes used in multiple files, or intended for general reuse, 
 *        define them in a .h file that has the same name as the class
 *        Trivial member functions (trivial constructors or destructors, access functions, etc…) can be defined inside the class.
 *        Non-trivial member functions should be defined in a .cc file that has the same name as the class.
 */

#include <iostream>
#include <sstream>
#include <string>

#include "fecha.h"


int main() {

  // Objeto
  Fecha uno{1, 7, 2020};
  Fecha dos{29, 8, 2002};
  Fecha tres{8, 5, 2002};
  Fecha cuatro{5, 3, 1921};
  Fecha cinco{1, 9, 1600};

  int _year = 2020;
  int _dia = 1;
  int _mes = 7;
  if(uno.Fechas_bisiesto())
    std::cout << _dia << "/" << _mes << "/" << _year << " es bisiesto" << std::endl;
  else
    std::cout << _dia << "/" << _mes << "/" << _year << " no es bisiesto" << std::endl;

  
  int _year2 = 2002;
  int _dia2 = 29;
  int _mes2 = 8;
  if(dos.Fechas_bisiesto())
    std::cout << _dia2 << "/" << _mes2 << "/" << _year2 << " es bisiesto" << std::endl;
  else
    std::cout << _dia2 << "/" << _mes2 << "/" << _year2 << " no es bisiesto" << std::endl;


  int _year3 = 2002;
  int _dia3 = 8;
  int _mes3 = 5;
  if(tres.Fechas_bisiesto())
    std::cout << _dia3 << "/" << _mes3 << "/" << _year3 << " es bisiesto" << std::endl;
  else
    std::cout << _dia3 << "/" << _mes3 << "/" << _year3 << " no es bisiesto" << std::endl;



  int _year4 = 1921;
  int _dia4 = 5;
  int _mes4 = 3;
  if(cuatro.Fechas_bisiesto())
    std::cout << _dia4 << "/" << _mes4 << "/" << _year4 << " es bisiesto" << std::endl;
  else
    std::cout << _dia4 << "/" << _mes4 << "/" << _year4 << " no es bisiesto" << std::endl;



  int _year5 = 1600;
  int _dia5 = 1;
  int _mes5 = 9;
  if(cinco.Fechas_bisiesto())
    std::cout << _dia5 << "/" << _mes5 << "/" << _year5 << " es bisiesto" << std::endl;
  else
    std::cout << _dia5 << "/" << _mes5 << "/" << _year5 << " no es bisiesto" << std::endl;

}

