#ifndef UNTITLED_APPROXIMATINGPI_H
#define UNTITLED_APPROXIMATINGPI_H


#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>

using namespace std;

double providePi(long precision) {

    int i;
    double x, y, pi = 0, c;

    srand((unsigned) time(0));

    for (i = 0; i < precision; ++i) {

        x = (double) rand() / RAND_MAX;
        y = (double) rand() / RAND_MAX;
        c = x * x + y * y;
        if (c <= 1) {
            pi++;
        }
    }

    pi /= precision;
    pi *= 4;

    return pi;
}

#endif //UNTITLED_APPROXIMATINGPI_H
