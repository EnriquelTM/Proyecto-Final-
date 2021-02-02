#include <iostream>
#include "cliente.h"
#include "hotel.h"
using namespace std;

void hotel::inicio(){
    int opcion;
    do {
        cout << "HOTEL" << endl;
        cout<<"1. Habitaciones disponibles" << endl;
        cout<<"2. Cancelados" << endl;
        cout<<"3. check_in" << endl;
        cout<<"4. check_out" << endl;
        cout<<"5. SALIR" << endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            habitaciones();
            break;

        case 2:
            pagos_cancelados();
            break;

        case 3:
            check_in1();
            break;

        case 4:
            check_out1();
            break;

        default:
            cout << "Esta opción no es valida." << endl;
            break;}
    }
    while (opcion != 5);
}

void hotel::habitaciones(){
    return habitaciones - (cliente.get_habitacion);
}

