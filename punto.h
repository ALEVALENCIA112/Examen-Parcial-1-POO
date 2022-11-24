#ifndef PUNTO_H
#define PUNTO_H
#include<iostream>
#include<string.h>

using namespace std;

class Punto
{
private:
    int x;
    int y;

public:
    Punto();
    Punto(int x, int y);
    int getX();
    int getY();

};

#endif // PUNTO_H
