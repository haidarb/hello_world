#ifndef UNTITLED_GENERATERANDOMREAL_H
#define UNTITLED_GENERATERANDOMREAL_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>

using namespace std;

void generateRandomReal() {

    int lBound, uBound, iter = 10000, i;
    double rReal, sum = 0, stdev = 0, mean;

    cout << "Choose lower bound! " << endl;
    cin >> lBound;
    cout << "Choose upper bound! " << endl;
    cin >> uBound;

    if (uBound <= lBound) {
        cout << "Upper bound should be bigger than lower bound. Run program again." << endl;
        exit(0);
    }

    srand((unsigned) time(0));

    // TASK - CHECK IF MEAN AND VARIANCE OF THIS IS EQUAL TO THEORETICAL VALUES

    for (i = 0; i < iter; i++) {

        rReal = rand();
        rReal /= RAND_MAX; // <=>  rReal = rReal / RAND_MAX;
        rReal = lBound + ((uBound - lBound) * rReal);

        sum += rReal;
        stdev += rReal * rReal;
    }

    mean = sum / iter;
    stdev /= iter;
    stdev -= mean * mean;
    stdev = sqrt(stdev);

    cout << "Theoretical mean should be: " << (double) (uBound + lBound) / 2 << endl;
    cout << "and the generated mean is equal to: " << mean << endl;

    cout << "theoretical standard deviation should be equal to: " << (uBound - lBound) / sqrt(12) << endl;
    cout << "and the generated stdev is equal to: " << stdev << endl;

}

#endif //UNTITLED_GENERATERANDOMREAL_H
