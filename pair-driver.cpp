#include "pair.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "\nBelow you will see a list of problems that need to be solved..." << endl;
    cout << "\t1. (1, 3) + (0, 0)" << endl;
    cout << "\t2. 7 * (9, 2)" << endl;
    cout << "\t3. (1, 3) * (3, 8)" << endl;
    cout << "\t4. (((4, 9) * (6, 7)) * (4, 1)) - ((1, 3) + (2, 4))" << endl;
    cout << "\t5. (((3, 10) * (1, 17)) * (4, 1)) + ((1, 3) - (2, 4))\n" << endl;
    cout << "RESULTS:" << endl;

    // Number 1 - Addition
    Pair a(1, 3);
    Pair b(0, 0);
    cout << "1. " << a + b; // (1, 3)

    // Subtraction
    Pair c(1, 3);
    Pair d(0, 0);
    cout << "*** Just to show that subtraction works both ways... ***" << endl;
    cout << '\t' << c - d << '\t' << d - c; // // (1, 3) and (-1, -3)

    // Number 2 - Multiplication with a double
    Pair e(9, 2);
    cout << "2. " << 7 * e; // (63, 14)

    // Number 3 - Multiplication of pairs
    // 1*3 = 3  3*8 = 24    3 + 24 = 27
    Pair f(1, 3);
    Pair g(3, 8);
    cout << "3. " << f * g << '\n' << endl; // (3, 24)

    // Number 4 
    Pair h(4, 9);
    Pair i(6, 7);
    Pair j(4, 1);
    Pair k(1, 3);
    Pair l(2, 4);
    cout << "4. " << (h * i * j) - (k + l);

    // Number 5
    Pair m(3, 10);
    Pair n(1, 17);
    Pair o(4, 1);
    Pair p(1, 3);
    Pair q(2, 4);
    cout << "5. " << (m * n * o) + (p - q);

    Pair r(2, 3);
    Pair s(2, 3);
    cout << "Two equal vectors ('1' will print if true): " << '\n' << r << s << (r == s);

    Pair t(8, 4);
    Pair u(1, 5);
    cout << "\n\nTwo unequal vectors: " << '\n' << t << u << (t == u);
}
