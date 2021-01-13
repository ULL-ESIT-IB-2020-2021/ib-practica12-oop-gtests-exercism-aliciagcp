//Clase
//Base de datos de los complejos

#include <fstream>
#include <string>

class Complejo {

    public:
    Complejo(int real, int imaginario);
    int GetReal();
    int GetImaginario();

    static Complejo Subtract(Complejo primero, Complejo segundo);
    static Complejo Add(Complejo primero, Complejo segundo);
    void print();

   
    private:
    int _real;
    int _imaginario;
};
