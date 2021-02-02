#include <iostream>
using namespace std;

class cliente{
    string nombre;
    string apellido;
    int dni;
    int noches;
    int habitacion;
    int fecha;

    public:
        void habitacion();
        int get_habitacion(){
            return habitacion;
        };
        void pago();
        void check_in();
        void check_out();
};