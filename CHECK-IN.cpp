#include <iostream>
#include <stdlib.h>
#include <fstream>
#include<time.h>
#include "checkin.h"
using namespace std;

void escribir ();

int main()
{
    int numero, dato, dato2;

    srand(time(NULL));//generar un numero aleatorio
    dato= 10 + rand ()% (120);
    dato2= (10 + rand ()% (120))-(dato);
    
    string dni1, dni2, telefono1, telefono2, nombre1, nombre2, apellido1, apellido2, noches1,noches2, p="si",r;
    cout << "Ingrese DNI del cliente: ";
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
    cout <<"Desea agregar otro cliente: ";
    cin>>r;

    if (r == p){
        cout << "Ingrese DNI del cliente: ";
            cin>>dni2;
        cout << "Ingrese telefono del cliente: ";
            cin>>telefono2;
        cout << "Ingrese nombre del cliente: ";
            cin>>nombre2;
        cout << "Ingrese apellido del cliente: ";
            cin>>apellido2;
        cout << "Ingrese el numero de noches: ";
            cin>>noches2; 
        cout<< "Habitacion: "<<dato2<<endl;
        cout<<"Clientes Registrados";
        
    }
    else {
        cout<<"Cliente Registrado";
    }
    
    Checkin checkin1;

    checkin1.setCheckin(dni1,telefono1,nombre1,apellido1,noches1,dato);

    void escribir ();{
    ofstream checkprueba;
    
    checkprueba.open("checkin1.txt",ios::out);//abriendo el archivo
    if (checkprueba.fail()){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }
    checkprueba<<"\t\t\t\tHOTEL SAN MARINO CHECK-IN"<<endl;
    checkprueba<<"\nDatos del cliente "<<endl;
    checkprueba<<"\nDNI: ";
    checkprueba<<checkin1.getDni()<<endl;
    checkprueba<<"\nTelefono: ";
    checkprueba<<checkin1.getTelefono()<<endl;
    checkprueba<<"\nNombre: ";
    checkprueba<<checkin1.getNombre()<<endl;
    checkprueba<<"\nApellido: ";
    checkprueba<<checkin1.getApellido()<<endl;
    checkprueba<<"\nNumero de noches: ";
    checkprueba<<checkin1.getNoches()<<endl;
    checkprueba<<"\nNumero de habitación: ";
    checkprueba<<checkin1.getHabitacion()<<endl;

    Checkin checkin2;

    checkin2.setCheckin(dni2,telefono2,nombre2,apellido2,noches2,dato2);

    void escribir ();{
    ofstream checkprueba;
    
    checkprueba.open("checkin2.txt",ios::out);//abriendo el archivo
    if (checkprueba.fail()){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }
    checkprueba<<"\t\t\t\tHOTEL SAN MARINO CHECK-IN"<<endl;
    checkprueba<<"\nDatos del cliente "<<endl;
    checkprueba<<"\nDNI: ";
    checkprueba<<checkin2.getDni()<<endl;
    checkprueba<<"\nTelefono: ";
    checkprueba<<checkin2.getTelefono()<<endl;
    checkprueba<<"\nNombre: ";
    checkprueba<<checkin2.getNombre()<<endl;
    checkprueba<<"\nApellido: ";
    checkprueba<<checkin2.getApellido()<<endl;
    checkprueba<<"\nNumero de noches: ";
    checkprueba<<checkin2.getNoches()<<endl;
    checkprueba<<"\nNumero de habitación: ";
    checkprueba<<checkin2.getHabitacion()<<endl;
    checkprueba.close();
    }

    checkprueba.close();//cerrar el archivo
    return 0;
}
}
