cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp CleanThisCode.h EvenOrOdd.h SumProdEtc.h MeanVarEtcOf5Int.h ExchangeTwoValues.h GenerateRandomIntGuess.h GenerateRandomReal.h ApproximatingPi.h PseudorandomGenerator.h BoxMuller.h BlackScholes.h BubbleSorting.h Insurance.h)
add_executable(untitled ${SOURCE_FILES})