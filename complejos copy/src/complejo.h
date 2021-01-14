//Clase
//Base de datos de los complejos

#include <fstream>
#include <string>

class Complejo {

    public:
    Complejo(int real, int imaginario);
    int GetReal();
    int GetImaginario();

    Complejo Subtract(Complejo segundo);
    Complejo Add(Complejo segundo);
    void print();

	friend Complejo operator* (Complejo &complejo, int real);
	
   
    private:
    int _real;
    int _imaginario;
};
