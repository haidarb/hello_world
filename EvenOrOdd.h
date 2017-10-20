#ifndef UNTITLED_EVENORODD_H
#define UNTITLED_EVENORODD_H

#include<iostream>

using namespace std;

void isEven() {

        int n;

        cout << "provide number to verify";
        cin >> n;

        while (n > 1) {
            n -= 2;
        }

        if (n == 1) {
            cout << "the number is odd";
        } else if (n == 0) {
            cout << "the number is even";
        }
}

void isEvenShort() {

    int n, r;

    cout << "provide number to verify";
    cin >> n;

    r = n % 2;

    if (r == 1) {
        cout << "the number is odd";
    } else if (r == 0) {
        cout << "the number is even";
    }
}


#endif //UNTITLED_EVENORODD_H

