#ifndef UNTITLED_MEANVARETCOF5INT_H
#define UNTITLED_MEANVARETCOF5INT_H

#include<iostream>

using namespace std;

void askForInt(int i) {
    cout << " Please provide " << i + 1 << ". integer " << endl;
}

void provideMeanVarMinMax() {

    int i, mini, maxi, array[5];

    float mean = 0, variance = 0, sum;

    askForInt(0);
    cin >> array[0];
    mini = array[0];
    maxi = array[0];
    sum = array[0];

    for (i = 1; i < 5; ++i) {
        askForInt(i);
        cin >> array[i];
        sum += array[i];
        mini = min(mini, array[i]);
        maxi = max(maxi, array[i]);
    }

    mean = sum / 5;

    for (i = 0; i < 5; ++i) {
        variance += (array[i] - mean) * (array[i] - mean);
    }

    variance /= 5;

    cout << " Here you have their mean : " << mean << endl;
    cout << ".. and variance : " << variance << endl;
    cout << ".. and minimum : " << mini << endl;
    cout << ".. and maximum : " << maxi << endl;
}

#endif //UNTITLED_MEANVARETCOF5INT_H
