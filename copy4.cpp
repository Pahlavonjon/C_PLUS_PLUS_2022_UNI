#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int sub_array(int *array, int length){
    if (length < 0){
        return 0;
    }
    int summation = 0;
    int summation_incrementor = 0;
    for (int f = 0; f < length; f++){
        if (f == 0){
            summation += length-1;
            cout <<" "<<length-1;
        }
        else {
            summation += length - summation_incrementor;
            cout <<" "<<length - summation_incrementor;
        }
        cout <<"\n";
        summation_incrementor++;
    }
    cout <<"\n\n The total array combinations was: "<<summation<<"\n\n";
    int largest = 0;
    int sub_array_elements_sum[summation];
    int array_addition_inc = 0;
    for (int t = 0; t < length; t++){
        if (length == 1){
            largest = *(array+0);
            return largest;
        }
        int incrementor = 0;
        for (int h = t; h < length; h++){
            int addition_first = 0;
            if (h == 0){
                for (int g = t; g < length-1-incrementor; g++){
                    addition_first += *(array+g);
                }
                *(sub_array_elements_sum+array_addition_inc) = addition_first;
                array_addition_inc++;
                incrementor++;
            }
            else {
                for (int g = t; g < length-incrementor; g++){
                    addition_first += *(array+g);
                }
                *(sub_array_elements_sum+array_addition_inc) = addition_first;
                array_addition_inc++;
                incrementor++;
            }
        }
    }
    largest = *(sub_array_elements_sum);
    for (int k = 0; k < summation; k++){
        if (largest < *(sub_array_elements_sum+k)){
            largest = *(sub_array_elements_sum+k);
        }
    }
    return largest;
}