#ifndef UNTITLED_BLACKSCHOLES_H
#define UNTITLED_BLACKSCHOLES_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include "BoxMuller.h"

using namespace std;

void BlackScholesOptionPrice(){

    int i;
    double T, K, So, stdev, r, St, sum=0, z, p, delta=0, iter;

    iter = 1000;

    cout << "Please provide time to maturity: "; cin >> T;
    cout << "Please provide strike price: "; cin >>  K;
    cout << "Please provide price of underlying asset now (at t=0): "; cin >>  So;
    cout << "Please provide standard deviation: "; cin >>  stdev;
    cout << "Please provide risk-free interest rate in a convention that 1 = 0.01 : "; cin >>  r;

    for (i = 0; i < iter; i++) {

        z = boxMuller(0, 1);
        St = So * exp((r - (stdev * stdev) / 2)*T + stdev * sqrt(T) * z);

        p = St-K;
        if (p > 0){
            sum+=p;
            delta++;
        }

    }

    p = exp(-r * T) * sum / iter;
    delta /=iter;

    cout << "Price of a call option according to Black-Scholes formula is: "<< p << endl;
    cout << "And delta is equal to: "<< delta << endl;

}


#endif //UNTITLED_BLACKSCHOLES_H

