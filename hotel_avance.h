#ifndef __HOTEL_H__
#define __HOTEL_H__
#include<iostream>
#include<stdlib.h>//exit
#include<fstream>
#include "clases.h"
#include <vector>

using namespace std;

class hotel{
    
    FILE *fHuespedes;
    FILE *fHabitaciones;
    FILE *fPagos;
    FILE *fRegistros;
    vector<Persona> huespedes;
    vector<Habitacion> habitaciones;
    vector<Pago> pagos;
    vector<Registro> registros;
    
    public:
    void check_in();
    void check_out();
    Habitacion getHabitacionDisponible(string tipoHabitacion);

};

#endif