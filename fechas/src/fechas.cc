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
#include <vector>


int main(int argc, char** argv) {

  std::string in_file_name{argv[1]};
  std::string out_file_name{argv[2]};

  std::ifstream in_file(in_file_name, std::ifstream::in);
  std::ofstream out_file(out_file_name, std::ofstream::out);

  std::vector<Fecha> fechas;
  for (std::string line; std::getline(in_file, line);) {
    fechas.emplace_back(Fecha{line});
  }

  for (auto fecha : fechas) {
    out_file << fecha << std::endl;
  }

  return 0;
}

