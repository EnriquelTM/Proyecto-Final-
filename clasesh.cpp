#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona {
    private:
        string dni;
        string telefono;
        string nombre; 
        string apellido;

    public:
        string getDni(){
            return dni;
        }

        void setDni(string dni){
            this->dni = dni;
        }

        string getTelefono(){
            return telefono;
        }
        
        void setTelefono (string telefono){
            this->telefono = telefono;
        }

};

class Habitacion {
    private:
        string idh;
        string tipoh;
        int numh;
        float precio;
    public:
        string idh(){
            return idh;
        }

        void setIdh(string idh){
            this->idh = idh;
        }

        string tipoh(){
            return tipoh;
        }
        
        void setNumh (string telefono){
            this->telefono = telefono;
        }

};


class Pago {
    private:
        string metodoPago;
        string moneda;
        int tipoCambio;
        int montoPago;
};

class Registro{
    private:
        string dni;
        string idh;
        time_t fechaIngreso;
        time_t fechaSalida;

    public:
        double getNumeroDias(){  
            return ceil(difftime(fechaSalida, fechaIngreso)/3600/24);
        }
};