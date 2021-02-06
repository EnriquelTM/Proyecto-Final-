#include<iostream>
#include<cstdlib>//exit
#include<fstream> //acceder a ficheros
#include <cstdio>
#include <conio.h>
#include "hotel.h"
using namespace std;

void hotel::check_in(){
   

   string dni;
   string nombre;
   string apellido;
   string telefono;

    printf("HOTEL SAN MARINO");
    
    do{
        printf("\nDocumento del cliente:");
        scanf("%s", dni);

        printf("\nNombre del cliente:");
        scanf("%s", nombre);

        printf("\nApellido del cliente:");
        scanf("%s", apellido);

        printf("\nTelefono del cliente:");
        scanf("%s", telefono);
        
        Persona* huesped = new Persona();

        huesped->setDni(dni);
        huesped->setNombre(nombre);
        huesped->setApellido(apellido);
        huesped->setTelefono(telefono);

        fHuespedes = fopen("huespedes.txt", "a+");
        //fprintf(fHuespedes, "%s","Nombre del cliente: ");
        fprintf(fHuespedes, "%s \n", dni);
        fprintf(fHuespedes, "%s \n", telefono);
        fprintf(fHuespedes, "%s \n", nombre);
        fprintf(fHuespedes, "%s \n", apellido);

        fclose(fHuespedes);

        string tipoHabi;
        cout<<"Ingrese el tipo de habitación que desea:"<<endl;
        cout<<"1. Habitación Simple"<<endl;
        cout<<"2. Habitación Doble"<<endl;
        cout<<"3. Habitación triple"<<endl;
        cout<<"4. Habitación Matrimonial"<<endl;
        cin>>tipoHabi;

        Habitacion habitacionDisponible = getHabitacionDisponible(tipoHabi);
        cout << "La habitación que se proporcionará al cliente es la "<<habitacionDisponible.getNumeroHabitacion();
        habitacionDisponible.setDisponible(false);

        printf("\nCuantas noches?:");
        scanf("%d", noches);
        
        printf("\nHabitacion: %d",n);
        --n;

        printf("\nDesea agregar otro cliente?  s/n");
        resp = getch();

        


        //fprintf(checkin, "%s","Noches: ");
        //fprintf(checkin, "%s \n", noches);
        //fprintf(checkin, "%s","Habitación: ");
        //fprintf(checkin, "%d \n\n", n);
        

    } while(resp == 's' || resp == 'S');

    
}

void hotel::check_out(){
    checkout = fopen("checkout.txt", "a+");
    printf("HOTEL SAN MARINO");
    
    char cliente[30];
    char resp;

    do{
        printf("\nNombre del cliente:");
        scanf("%s", cliente);

        printf("\nDesea eliminar al cliente?  s/n");
        resp = getch();

    } while(resp == 's' || resp == 'S');

    fclose(checkout);
}

Habitacion hotel::getHabitacionDisponible(string tipoHabitacion){
    for(Habitacion h: habitaciones){
        if(h.getDisponible()&&h.getTipoHabitacion().compare(tipoHabitacion)){
            return h;
        }
    }

    return;
}