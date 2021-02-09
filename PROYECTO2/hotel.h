#ifndef __HOTEL_H__
#define __HOTEL_H__
#include<iostream>
#include<stdlib.h>//exit
#include<fstream>
using namespace std;

class hotel{
   
    FILE *checkprueba;
    int numero, dato, dni1,telefono1,noches1;
    char resp;
    string   nombre1, apellido1;

    public:
        void ci();
        void check_out();
};

#endif
