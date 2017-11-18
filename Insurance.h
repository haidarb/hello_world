#ifndef UNTITLED_INSURANCE_H
#define UNTITLED_INSURANCE_H

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void probOfDefault() {

    int n, i, j;
    double prob, lim = 0, x, sum, premium;
    srand((unsigned) time(0));

    cout << "Please provide" << endl;
    cout << " premium (value between 0 and 1): ";
    cin >> premium;

    if (premium >= 1 || premium <= 0) {
        cout << "Premium should be between 0 and 1!" << endl;
        exit(0);
    }

    cout << " probability of an accident (value between 0 and 1): ";
    cin >> prob;

    if (prob >= 1 || prob <= 0) {
        cout << "Probability should be between 0 and 1!" << endl;
        exit(0);
    }

    cout << " probability precision parameter (number of iterations, large integer): ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of iterations must be positive!" << endl;
        exit(0);
    }

    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            x = (double) rand() / RAND_MAX;
            if (x < prob) {
                sum++;
            }
        }
        if (sum > n * premium) {
            lim++;
        }
    }

    lim /= n;

    cout << "Probability of default is: " << lim << endl;
}


#endif //UNTITLED_INSURANCE_H
