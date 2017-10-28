#include <iostream>
#include "CleanThisCode.h"
#include "MeanVarEtcOf5Int.h"
#include "GenerateRandomIntGuess.h"
#include "GenerateRandomReal.h"
#include "ApproximatingPi.h"
#include "PseudorandomGenerator.h"

using namespace std;

int main() {

    cout << "Approximation of pi:" << providePi(100000) << endl;
    generateLCG();
}



