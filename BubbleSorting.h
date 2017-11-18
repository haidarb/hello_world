#ifndef UNTITLED_BUBBLESORTING_H
#define UNTITLED_BUBBLESORTING_H

#include <iostream>

using namespace std;

void bubbleSort() {

    int i, j, temp;

    int arr[5] = {1,7,-5,50,2};

    for (i=0; i<5; i++){
        for (j=0; j<i; j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "bubble sorted arr: ";
    for (i=0; i<5; i++){
        cout << arr[i] << ",";
    }


}

#endif //UNTITLED_BUBBLESORTING_H
