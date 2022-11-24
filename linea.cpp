#include "linea.h"

Linea::Linea()
{

}

Linea::Linea(Punto *p1, Punto *p2)
{

    int x, y;
    x = p2->getX() - p1->getX();
    y = p2->getY() - p1->getY();
    d = sqrt(pow(2,x) + pow(2,y));

    m = (p2->getY() - p1->getY()) / (p2->getX() - p1->getX());
};

float Linea::getD()
{

    return d;
}

float Linea::getM()
{

    return m;
}

Punto *Linea::getP1()
{
    return p1;
}

Punto *Linea::getP2()
{
    return p2;
}

string Linea::toString()
{
    return "L1[ P1 (" /*+ to_string(Linea::getP1()) + ") - " +
            "P2 ("+ to_string(getP2()); */" , d= " + to_string(getD()) +
            " , m= " + to_string(getM());
}
