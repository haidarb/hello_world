#ifndef UNTITLED_BOXMULLER_H
#define UNTITLED_BOXMULLER_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>

using namespace std;

// FUNCTION BOX MULLER TO GENERATE NORMALLY DISTRIBUTED RANDOM VARIABLES
double boxMuller(double pmean, double pvar){

    double x, y, s, z, p;

    do {
        x = ((double) rand() * 2 / RAND_MAX) - 1;
        y = ((double) rand() * 2 / RAND_MAX) - 1;
        s = x * x + y * y;
    } while (s > 1);

    z = x * sqrt(-2 * log(s) / s);
    p = sqrt(pvar) * z + pmean;

    return p;
}


void checkBoxMullerFunction() {

    int i, iter = 10000;
    double p, desiredMean, desiredVar, sum = 0, var = 0;

    srand((unsigned)time(0));

    cout << "Please provide desired mean of parametrised normal distribution: ";
    cin >> desiredMean;
    cout << "Please provide desired variance of parametrised normal distribution: ";
    cin >>  desiredVar;

    for (i = 0; i < iter; ++i) {
        p = boxMuller(desiredMean, desiredVar);
        sum += p;
        var += p * p;
    }

    cout << "Mean is supposed to be: " << desiredMean << endl;
    cout << "..and the sample mean is: " << sum / iter << endl;

    var /= iter;
    var = var - sum * sum / (iter * iter);

    cout << "Variance is supposed to be: " << desiredVar << endl;
    cout << "..and the sample variance is: " << var << endl;

}

#endif //UNTITLED_BOXMULLER_H
