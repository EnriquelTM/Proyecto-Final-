#include <iostream>
#include "cliente.h"
using namespace std;

void cliente::habitacion(){
    int habitacion;
    cout << " Habitación asignada: ";
    cin >> habitacion;
}

void cliente::pago(){
    cout << "¿Cuantas noches se hospedara? ";
    cin >> noches;
    for (int noche=20; noche>=20; noche = noche*noches){
        cout << "El monto a pagar será de: " << noche;
    }
}

void cliente::check_in(){
    cout << "Nombre del cliente:  ";
    cin >> nombre;
    cout << "Apellido del cliente:  ";
    cin >> apellido;
    cout << "Número de D.N.I. : ";
    cin >> dni;
    cout << "Día de registro : ";
    cin >> fecha;
    cout << "Se debe retirar el día" << fecha + noches << endl;
}

void cliente::check_out(){
    int fecha1;
    cout << "Día de registro : ";
    cin >> fecha1;
    cout << "Nombre del cliente:  ";
    cin >> nombre;
    cout << "Apellido del cliente:  ";
    cin >> apellido;
    cout << "Número de D.N.I. : ";
    cin >> dni;
    if (fecha + noches == fecha1){
        cout << "se puede ir";
    }
}

