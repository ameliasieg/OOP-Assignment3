#include "pair.h"
#include <iostream>

Pair::Pair() // Default constructor
{
    X = 0;
    Y = 0;
}

Pair::Pair(double _X, double _Y) // Two parameter constructor
{
    X = _X;
    Y = _Y;
}

Pair::Pair(double _X) // Conversion constructor for X
{
    X = _X;
}

ostream& operator<<(ostream& o, Pair p) // << operator overload
{
    o << "(" << p.GetX() << ", " << p.GetY() << ")\n" << endl;

    return o;
}

Pair operator+(Pair one, Pair two) // Addition operator
{
    Pair temp;
    temp.X = one.X + two.X;
    temp.Y = one.Y + two.Y;
    
    return temp;
}

Pair operator-(Pair one, Pair two) // Subtraction operator 
{
    Pair temp;
    temp.X = two.X - one.X;
    temp.Y = two.Y - one.Y;

    temp.X = one.X - two.X;
    temp.Y = one.Y - two.Y;
    
    return temp;
}

Pair operator*(double value, Pair one) // Multiplication operator 1
{
    Pair temp;
    temp.X = value * one.X;
    temp.Y = value * one.Y;

    return temp;
}

float operator* (const Pair& one, const Pair& two) // Multiplication operator 2
{
    return ((one.X * two.X) + (one.Y * two.Y));
}

bool operator==(Pair one, Pair two)
{
    return (one.X == two.X && one.Y == two.Y);
}

// Getters and setters for X and Y
double Pair::GetX()
{
    return X;
}

void Pair::SetX(double x)
{
    X = x;
}

double Pair::GetY()
{
    return Y;
}

void Pair::SetY(double y)
{
    Y = y;
}