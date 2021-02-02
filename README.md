# Proyecto-Final-
Base de datos.
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

class cliente{
    string nombre;
    string apellido;
    int dni;
    int noches;
    int fecha;
    
    public:
        void inicio();
        void pago();
        void check_in();
        void check_out();
};

void cliente::inicio()
{
    int opcion;
    do
    {
        cout << "HOTEL" << endl;
        cout<<"1. Cancelados" << endl;
        cout<<"2. check_in" << endl;
        cout<<"3. check_out" << endl;
        cout<<"4. SALIR" << endl;
        cin>>opcion;
        switch(opcion)
        {
        default:
            cout << "Esta opción no es valida." << endl;
            break;

        case 1:
            pago();
            break;

        case 2:
            check_in();
            break;

        case 3:
            check_out();
            break;

        case 4:
            break;
        }
    }
    while(opcion!=6);
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
