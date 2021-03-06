#include <stdlib.h>
#include <fstream>
#include <time.h>
#include "hotel.h"
#include "checkin.h"
#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;


void hotel::ci(){
    Checkin checkin1;
    ofstream checkprueba;
    checkprueba.open("checkin1.txt",ios::app);
    checkin1.setCheckin(dni1,telefono1,nombre1,apellido1,noches1,dato);
    checkprueba<<"\t\t\t\tHOTEL SAN MARINO CHECK-IN"<<endl;

    srand(time(NULL));//generar un numero aleatorio
    dato= 10 + rand ()% (120);

    do {
        cout << "\nIngrese DNI del cliente: ";
        cin>>dni1;
        cout << "Ingrese telefono del cliente: ";
        cin>>telefono1;
        cout << "Ingrese nombre del cliente: ";
        cin>>nombre1;
        cout << "Ingrese apellido del cliente: ";
        cin>>apellido1;
        cout << "Ingrese el numero de noches: ";
        cin>>noches1; 
        cout<< "Habitacion: "<<dato<<endl;
        cout <<"Desea agregar otro cliente: s/n";
        resp = getch();

        checkprueba<<"\nDatos del cliente "<<endl;
        checkprueba<<"\nDNI: ";
        checkprueba<<dni1<<endl;
        checkprueba<<"\nTelefono: ";
        checkprueba<<telefono1<<endl;
        checkprueba<<"\nNombre: ";
        checkprueba<<nombre1<<endl;
        checkprueba<<"\nApellido: ";
        checkprueba<<apellido1<<endl;
        checkprueba<<"\nNumero de noches: ";
        checkprueba<<noches1<<endl;
        checkprueba<<"\nNumero de habitacion: ";
        checkprueba<<dato<<endl;

    } while(resp == 's' || resp == 'S');

    cout<<"\nCliente Registrado";

    if (checkprueba.fail()){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }
    checkprueba.close();
}


void inicio(){
    hotel h1;
    int option;
    cout << "\t\t\t\t\tHOTEL SAN MARINO" << endl;
    cout << "1) Check-in " << endl;
    cout << "2) Check-out " << endl;
    cout << "3) Salir " << endl;
    cin>>option;

    switch (option)
    {
    case 1:
        h1.ci();
        break;

    case 2:

        break;

    case 3:
        break;

    default:
        cout << "Esta opción no existe. ";
        break;
    }
}


int main()
{   
    inicio();
    return 0;
}