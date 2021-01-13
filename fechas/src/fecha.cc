#include <iostream>
#include <sstream>
#include <string>

#include "fecha.h"

// Overloaded insertion operator
std::ostream& operator<< (std::ostream &out, const Fecha& fecha) {
 out << fecha.dia() << "/" << fecha.mes() << "/" << fecha.year(); // actual output done here
 return out; // return std::ostream so we can chain calls to operator<<
}


// Convierte una Fecha en string
std::string ToString(const Fecha fecha) {
	std::string resultado{""};
  std::stringstream os;

	// resultado = resultado + fecha.GetDia() + "/" + fecha.GetMes() + "/" + fecha.GetYear();
	os << fecha.dia() << "/" << fecha.mes() << "/" << fecha.year();
  os >> resultado;

	return resultado;
}

bool operator== (const Fecha &d1, const Fecha &d2) {
  return (d1.dia() == d2.dia() && d1.mes() == d2.mes() && d1.year() == d2.year());
}

bool operator> (const Fecha &d1, const Fecha &d2) {
	if (d1.year() > d2.year()) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.mes() > d2.mes())) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.mes() == d2.mes()) && (d1.dia() > d2.dia())) {
		return true;
	}
	return false;
}



Fecha::Fecha(int dia, int mes, int year) {
  _dia = dia;
  _mes = mes;
  _year = year;
}

int Fecha::GetDia() { return _dia; }

int Fecha::GetMes() { return _mes; }

int Fecha::GetYear() { return _year; }

