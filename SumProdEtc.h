#ifndef UNTITLED_SUMPRODETC_H
#define UNTITLED_SUMPRODETC_H

#include<iostream>

using namespace std;

void provideSumProdDiffDiv() {

    int firstInteger, secondInteger;

    cout << " Please provide first integer " << endl;
    cin >> firstInteger;
    cout << " Please provide second integer " << endl;
    cin >> secondInteger;
    cout << " Brilliant !" << endl;

    cout << " Here you have their sum : " << firstInteger + secondInteger << endl;
    cout << ".. and their product : " << firstInteger * secondInteger << endl;
    cout << ".. and their difference : " << firstInteger - secondInteger << endl;
    cout << ".. and finally , division : " << (float) firstInteger / secondInteger << endl;
}

#endif //UNTITLED_SUMPRODETC_H
