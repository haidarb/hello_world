#ifndef UNTITLED_PSEUDORANDOMGENERATOR_H
#define UNTITLED_PSEUDORANDOMGENERATOR_H

#include<iostream>
#include<cmath>

using namespace std;

void generateLCG() {

    int i, iter = 1000;
    int x = 2017; //seed
    double xReal;
    int a = 313;
    int c = 127;
    int m = 12323;
    double sum = 0, stdev = 0;

    for (i = 0; i < iter; ++i) {

        x = ((a * x) + c) % m;
        xReal = (double) x / m;

        sum += xReal;
        stdev += xReal * xReal;

    }

    sum /= iter;
    cout << "Mean is supposed to be: 0.5" << endl;
    cout << "..and the sample mean is: " << sum << endl;

    stdev /= iter;
    stdev = stdev - sum * sum;
    stdev = sqrt(stdev);

    cout << "Standard deviation is supposed to be: " << (double) 1 / sqrt(12) << endl;
    cout << "..and the sample standard deviation is: " << stdev << endl;

}


#endif //UNTITLED_PSEUDORANDOMGENERATOR_H
