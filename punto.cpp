#include "punto.h"

Punto::Punto()
{

}

Punto::Punto(int x, int y): x(x), y(y)
{

}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}
