#ifndef LINEA_H
#define LINEA_H

#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

#include "punto.h"

class Linea
{
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
public:
    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD();
    float getM();
    Punto *getP1();
    Punto *getP2();
    string toString();

    static int NUM_LINEAS;
};

#endif // LINEA_H
