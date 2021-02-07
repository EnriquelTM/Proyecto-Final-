#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;



class Checkin {
    private:
        string dni;
        string telefono;
        string nombre; 
        string apellido;
        string noches;

    public:
        Checkin ();
        void setCheckin(string, string, string , string, string);
        string getDni();
        string getTelefono();
        string getNombre ();
        string getApellido ();
        string getNoches ();
};

    Checkin :: Checkin (){
    }

    //establecemos valores a los atribu
    void Checkin :: setCheckin (string _dni, string _telefono, string _nombre, string _apellido, string _noches){
        dni = _dni;
        telefono =  _telefono;
        nombre = _nombre;
        apellido = _apellido;
        noches = _noches;
    }

    string Checkin ::getDni(){
        return dni;
    }

    string Checkin ::getTelefono(){
        return telefono;
    }

    string Checkin :: getNombre (){
        return nombre;
    }

    string Checkin :: getApellido (){
        return apellido;
    }

    string Checkin :: getNoches (){
        return noches;
    }   