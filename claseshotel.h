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

        string  getNombre (){
            return nombre;
        }

        void setNombre (){
            this->nombre=nombre;
        }

        string getApellido  (){
            return apellido;
        }

        void setApellido (){
            this-> apellido=apellido;
        }


};

class Habitacion {
    private:
        string idh;
        string tipoh;
        int numh;
        float precio;
    public:
        string getIdh(){
            return idh;
        }

        void setIdh(string idh){
            this->idh = idh;
        }

        string getTipoh(){
            return tipoh;
        }
        
        void setTipoh (string tipoh){
            this->tipoh = tipoh;
        }

        int getNumh (){
            return numh;
        }
        void setNumh (int numh){
            this ->numh = numh; 
        }

        float getPrecio (){
            return precio;
        }
        void setPrecio (float precio){
            this -> precio = precio;
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
        string idh;
        time_t fechaIngreso;
        time_t fechaSalida;

    public:
        double getNumeroDias(){  
            return ceil(difftime(fechaSalida, fechaIngreso)/3600/24);
        }

};