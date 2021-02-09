#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstdio>
#include <conio.h>
#include "hotel.h"
using namespace std;

class Checkin : public hotel{

    public:
        int dni;
        int telefono;
        string nombre; 
        string apellido;
        int noches;
        int habitacion;
    
        Checkin ();
        void setCheckin(int, int, string , string, int, int);
        int getDni();
        int getTelefono();
        string getNombre ();
        string getApellido ();
        int getNoches ();
        int getHabitacion();
};

    Checkin :: Checkin (){
    }

    //establecemos valores a los atribu
    void Checkin :: setCheckin (int _dni, int _telefono, string _nombre, string _apellido, int _noches, int _habitacion){
        dni = _dni;
        telefono =  _telefono;
        nombre = _nombre;
        apellido = _apellido;
        noches = _noches;
        habitacion = _habitacion;
    }

    int Checkin ::getDni(){
        return dni;
    }

    int Checkin ::getTelefono(){
        return telefono;
    }

    string Checkin :: getNombre (){
        return nombre;
    }

    string Checkin :: getApellido (){
        return apellido;
    }

    int Checkin :: getNoches (){
        return noches;
    }   

    int Checkin :: getHabitacion (){
        return habitacion;
    }