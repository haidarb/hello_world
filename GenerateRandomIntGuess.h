#ifndef UNTITLED_GENERATERANDOMINTGUESS_H
#define UNTITLED_GENERATERANDOMINTGUESS_H

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void guessRandom() {

    int answer, guess, lBound, uBound;

    cout << "Choose lower bound! " << endl;
    cin >> lBound;
    cout << "Choose upper bound! " << endl;
    cin >> uBound;

    if (uBound <= lBound) {
        cout << "Upper bound should be bigger than lower bound. Run program again." << endl;
        exit(0);
    }

    srand((unsigned) time(0)); // use this to change seed

    answer = lBound + rand() % (uBound - lBound + 1); //this will allow to generate uniform dist on the interval
    guess = uBound + 2;

    while (answer != guess) {
        cout << "Guess a number!" << endl;
        cin >> guess;
        if (answer < guess) {
            cout << "Less" << endl;
        } else if (answer > guess) {
            cout << "More" << endl;
        }
    }
    cout << "Bravo!" << endl;

}

#endif //UNTITLED_GENERATERANDOMINTGUESS_H
