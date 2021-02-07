#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "checkin.h"
using namespace std;

void escribir ();

int main()
{
    
    string dni1, telefono1, nombre1, apellido1, noches1;
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

    Checkin checkin1;

    checkin1.setCheckin(dni1,telefono1,nombre1,apellido1,noches1);

    void escribir ();{
    ofstream checkprueba;
    
    checkprueba.open("check.txt",ios::out);//abriendo el archivo
    if (checkprueba.fail()){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }
    checkprueba<<"\t\t\t\t\tHOTEL SAN MARINO CHECK-IN"<<endl;
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

    checkprueba.close();//cerrar el archivo
    return 0;
}
}