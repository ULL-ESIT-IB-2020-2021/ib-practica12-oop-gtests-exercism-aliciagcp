
#include <iostream>
#include <sstream>
#include <string>

#include "complejo.h"

Complejo::Complejo(int real, int imaginario) {
  _real = real;
  _imaginario = imaginario;
}

int Complejo::GetReal() { return _real;}

int Complejo::GetImaginario() { return _imaginario;}


void Complejo::print() {
std::cout << GetReal() << "+" << (GetImaginario() > 0)
          << GetImaginario() << "i" << std::endl;
}

Complejo Complejo::Add(Complejo segundo) {
int imaginario_suma{GetImaginario() + segundo.GetImaginario()};
int real_suma{GetReal() + segundo.GetReal()};

Complejo numero{real_suma, imaginario_suma};
return numero;
}

Complejo Complejo::Subtract(Complejo segundo) {
int imaginario_resta{GetImaginario() - segundo.GetImaginario()};
int real_resta{GetReal() - segundo.GetReal()};

Complejo numero{real_resta, imaginario_resta};
return numero;
}

