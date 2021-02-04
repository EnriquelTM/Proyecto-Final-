#include<iostream>
#include<cstdlib>//exit
#include<fstream> //acceder a ficheros
#include <cstdio>
#include <conio.h>
#include "hotel.h"
using namespace std;

void hotel::check_in(){
    checkin = fopen("checkin.txt", "a+");
    printf("HOTEL SAN MARINO");

    do{
        printf("\nNombre del cliente:");
        scanf("%s", nombre);

        printf("\nCuantas noches?:");
        scanf("%d", noches);
        
        printf("\nHabitacion: %d",n);
        --n;

        printf("\nDesea agregar otro cliente?  s/n");
        resp = getch();


        fprintf(checkin, "%s","Nombre del cliente: ");
        fprintf(checkin, "%s \n", nombre);
        fprintf(checkin, "%s","Noches: ");
        fprintf(checkin, "%s \n", noches);
        fprintf(checkin, "%s","Habitación: ");
        fprintf(checkin, "%d \n\n", n);

    } while(resp == 's' || resp == 'S');

    fclose(checkin);
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
