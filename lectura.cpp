#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void lectura();
string linea;
string id;
int main(){
ifstream archivo ("checkin1.txt");
getline(archivo,linea);
getline(archivo,linea);
getline(archivo,linea);
getline(archivo,linea);
getline(archivo,linea);

id= id + linea;

cout<<id<<endl;

    getchar();
    return 0;
}