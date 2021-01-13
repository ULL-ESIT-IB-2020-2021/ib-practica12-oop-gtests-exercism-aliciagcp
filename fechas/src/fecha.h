//Clase
//Base de datos de las fechas

#include <fstream>
#include <string>

class Fecha {
    public:
    Fecha(int dia, int mes, int year);
    int GetDia();
    int GetMes();
    int GetYear();

    int year() const { return _year; }
    int mes() const { return _mes; }
    int dia() const { return _dia; }
    friend std::ostream& operator<<(std::ostream &out, const Fecha &fecha);
	friend bool operator== (const Fecha &d1, const Fecha &d2);
	friend bool operator> (const Fecha &d1, const Fecha &d2);

    bool Fechas_bisiesto(int year)
    {
    if(year%4 == 0) 
        return true;
    else
        return false;
    }

    private:
    int _dia{};
    int _mes{};
    int _year{};
};

std::string ToString(const Fecha $fecha);

