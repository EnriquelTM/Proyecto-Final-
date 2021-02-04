#ifndef __HOTEL_H__
#define __HOTEL_H__

class hotel{
    int habitaciones = 10;
    int indice=1;
    
    public:
    void check_in();
    void check_out();
    bool habitacion(int n);

};

#endif
