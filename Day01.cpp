#include "Day01.h"
Day01::Day01()
{
}

void Day01::selfPrint()
{
    int a = 100, b = 200;
    int* p = &a;
    int* q;
    q = &b;

    int* t = p;
    p = q;
    q = t;

    std::cout << *p << "       " << *q << "\n";


    int c[6] = { 1,2,3 };
    int* d = &c[0];
    int* e = c;

    std::cout << *d << "       " << *e << "\n";
}
