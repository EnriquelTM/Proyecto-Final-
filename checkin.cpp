#include <stdlib.h>
#include <fstream>
#include <time.h>
#include "checkin.h"
#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

void hotel::ci(){
    Checkin checkin1;
    checkprueba = fopen("checkin1.txt", "a+");
    checkin1.setCheckin(dni1,telefono1,nombre1,apellido1,noches1,dato);
    fprintf(checkprueba, "%s", "\t\t\t\tHOTEL SAN MARINO CHECK-IN");
    

    srand(time(NULL));//generar un numero aleatorio
    dato= 10 + rand ()% (120);

    do{
    printf("Ingrese DNI del cliente: ");
    scanf("%d",dni1);
    printf("Ingrese telefono del cliente: ");
    scanf("%d",telefono1);
    printf("Ingrese nombre del cliente: ");
    scanf("%s",nombre1);
    printf("Ingrese apellido del cliente: ");
    scanf("%s",apellido1);
    printf("Ingrese el numero de noches: ");
    scanf("%d",noches1); 
    cout << "Habitacion: " << dato << endl;
    printf("\nDesea agregar otro cliente?  s/n");
    resp = getch();
    
    

    fprintf(checkprueba, "\nDatos del cliente ");
    fprintf(checkprueba, "\nDNI: ");
    fprintf(checkprueba, "%d", dni1);
    fprintf(checkprueba, "\nTelefono: ");
    fprintf(checkprueba, "%d", checkin1.getTelefono());
    fprintf(checkprueba, "\nNombre: ");
    fprintf(checkprueba, "%s", checkin1.getNombre());
    fprintf(checkprueba, "\nApellido: ");
    fprintf(checkprueba, "%s", checkin1.getApellido());
    fprintf(checkprueba, "\nNumero de noches: ");
    fprintf(checkprueba, "%d", checkin1.getNoches());
    fprintf(checkprueba, "\nNumero de habitacion: ");
    fprintf(checkprueba, "%d", checkin1.getHabitacion());

    } while(resp == 's' || resp == 'S');

    printf("\nClientes Registrados");

    if (!checkprueba){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }

    fclose(checkprueba);//cerrar el archivo
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