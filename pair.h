#include <iostream>
using namespace std;

class Pair
{
    friend Pair operator+(Pair, Pair);
    friend Pair operator-(Pair, Pair);
    friend Pair operator*(double, Pair);
    // friend Pair operator*(Pair, Pair);
    friend float operator*(const Pair&, const Pair&);
    friend ostream& operator<<(ostream&, Pair);
    friend ostream& operator==(ostream&, Pair);
    friend bool operator==(Pair, Pair);

    public:

    double GetX();
    void SetX(double);
    double GetY();
    void SetY(double);

    Pair(); // Default constructor
    Pair(double, double); // Two parameter constructor
    Pair(double); // Conversion constructor

    private:

    double X;
    double Y;

};