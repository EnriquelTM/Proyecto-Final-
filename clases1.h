#include <iostream>
#include <string>
#include <ctime>
#include <math.h>

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

        string  getNombre (){
            return nombre;
        }

        void setNombre (string nombre){
            this->nombre=nombre;
        }

        string getApellido  (){
            return apellido;
        }

        void setApellido (string apellido){
            this-> apellido=apellido;
        }


};

class Habitacion {
    private:
        string numeroHabitacion;
        string tipoHabitacion;      
        float precio;
        bool disponible;

    public:
        string getNumeroHabitacion(){
            return numeroHabitacion;
        }

        void setNumeroHabitacion(string idh){
            this->numeroHabitacion = idh;
        }

        string getTipoHabitacion(){
            return tipoHabitacion;
        }
        
        void setTipoHabitacion (string tipoh){
            this->tipoHabitacion = tipoh;
        }

        float getPrecio (){
            return precio;
        }
        void setPrecio (float precio){
            this -> precio = precio;
        }

        bool getDisponible(){
            return disponible;
        }

        void setDisponible(bool disponible){
            this->disponible = disponible;
        }
};


class Pago {
    private:
        string metodoPago;
        string moneda;
        int tipoCambio;
        int montoPago;
    public :
        string getMetodoPago(){
            return metodoPago;
        }
        void setMetodoPago(string metodoPago){
            this -> metodoPago=metodoPago;
        }
        string getMoneda (){
            return moneda;
        }
        void setMoneda(string moneda){
            this-> moneda= moneda;
        }
        int getTipoCambio(){
            return tipoCambio;
        }
        void setTipoCambio(int tipoCambio){
            this -> tipoCambio=tipoCambio;
        }
        int getMontopago(){
            return montoPago;
        }
        void setMontoPago(int montoPago){
            this->montoPago=montoPago;
        }
};

class Registro{
    private:
        string dni;
        time_t fechaIngreso;
        time_t fechaSalida;

    public:
        double getNumeroDias(){  
            return ceil(difftime(fechaSalida, fechaIngreso)/3600/24);
        }
        string getDni(){
            return dni;
        }

        void setDni(string dni){
            this->dni = dni;
        }

};