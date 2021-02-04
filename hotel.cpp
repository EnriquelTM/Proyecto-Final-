#include<iostream>
#include<stdlib.h>//exit
#include<fstream> //acceder a ficheros
#include "hotel.h"
using namespace std;

void hotel::check_in(){
    ofstream checkin;
    string habitacion;
    checkin.open("d://proyecto//checkin.txt",ios::app);

    if(checkin.fail()){
        cout << "No se pudo abrir el archivo ";
        exit(1);
    }

    checkin << "\t\t\t\t\tHOTEL SAN MARINO" << endl;
    checkin << "¿Que habitacion desea?";
    cout << "¿Que habitacion desea?";
    cin >> habitacion;
    getline(cin, habitacion);
    checkin.close();
   
}

void hotel::check_out(){
    ofstream checkout;
    ifstream checkin;
    string habitacion;
    checkout.open("d://proyecto//checkout.txt",ios::app);
    checkin.open("d://proyecto//checkin.txt",ios::in);

    if(checkout.fail()){
        cout << "No se pudo abrir el archivo ";
        exit(1);
    }

    checkout << "\t\t\t\t\tHOTEL SAN MARINO" << endl;
    checkout << "¿En que habitacion estaba?";
    cout << "¿En que habitacion estaba?";
    cin >> habitacion;
    getline(cin, habitacion);
    checkout.close();
    checkin.close();
}


bool hotel::habitacion(int n){
    for (indice; indice <= habitaciones; indice++){
        if (n == indice){
            return true; 
        } else {return false;}
    }
}