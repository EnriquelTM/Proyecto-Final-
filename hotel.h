#ifndef __HOTEL_H__
#define __HOTEL_H__
#include<iostream>
#include<stdlib.h>//exit
#include<fstream>

class hotel{
    
    FILE *checkin;
    FILE *checkout;
    char nombre[30];
    char resp;
    int n=10;
    char noches[2];
    
    public:
    void check_in();
    void check_out();
};

#endif
