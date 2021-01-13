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
  Fecha dos{8, 5, 2002};
  Fecha tres{29, 8, 2002};
  Fecha cuatro{5, 3, 1921};
  Fecha cinco{1, 9, 1600};

  int year = 2020;
  if(uno.Fechas_bisiesto(year))
    std::cout << year << "es bisiesto" << std::endl;
  else
    std::cout << year << "no es bisiesto" << std::endl;
  

}

