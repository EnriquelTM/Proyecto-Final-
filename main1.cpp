#include<iostream>
#include<stdlib.h>//exit
#include<fstream> //acceder a ficheros
#include <stdio.h>
#include <conio.h>
#include "hotel_avance.h"
#include "hotel_avance.cpp"

using namespace std;

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
        h1.check_in(); 
        break;

    case 2:
        h1.check_out();
        break;

    case 3:
        break;

    default:
        cout << "Esta opción no existe. ";
        break;
    }
}


int main(){
    
    inicio();
    return 0;
}