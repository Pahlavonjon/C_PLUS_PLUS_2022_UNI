#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int secondSmallestSum(int *numbers,int length){
    if (length < 1){
        return 0;
    }
    int summation = 55;
    // cout <<"\n The total sub array combinations were: "<<summation<<"\n\n";
    int *sub_array_copy = new int[length*length*length];
    int *sub_array_addition = new int[summation];
    int array_inc = 0;
    int smallest = *(sub_array_addition+3);
    int sub_array_length = 0;
    int addition_inc = 0;
    int negative_count = 0;
    int array_length = 0;
    for (int k = 0; k < length; k++){
        if (*(numbers+k) < 0){
            negative_count++;
            if (negative_count == length){
                return 0;
            }
        }
    }
    for (int t = 0; t < length; t++){
        if (length == 1){
            smallest = *(numbers+0);
            return smallest;
        }
        int incrementor = 0;
        for (int h = t; h < length; h++){
             int addition_first = 0;
            if (t == 0){
                for (int g = t; g < (length-1-incrementor); g++){
                    addition_first += *(numbers+g);
                    *(sub_array_copy+array_inc) = *(numbers+g);
                    array_inc++;
                }
                *(sub_array_addition+addition_inc) = addition_first;
                addition_inc++;
                incrementor++;
                array_length++;
        }
        else {
             int addition_second = 0;
                for (int g = t; g < (length-incrementor); g++){
                    addition_second += *(numbers+g);
                    *(sub_array_copy+array_inc) = *(numbers+g);
                    sub_array_length++;
                    array_inc++;
                }
                *(sub_array_addition+addition_inc) = addition_second;
                addition_inc++;
                incrementor++;
                array_length++;
            }
        }
    }
    cout <<"\n The array length was: "<<array_length<<"\n\n";
    for (int h = 0; h < summation; h++){
        if (smallest > *(sub_array_addition+h)){
        smallest = *(sub_array_addition+h);
        } 
    }
    cout <<"\n The smallest is: "<<smallest<<"\n\n";
    int zeros = 0;
    for (int h = 0; h < summation; h++){
        if (*(sub_array_addition+h) == 0){
            zeros++;
        }
    }
    cout <<"\n The expmty elements were: "<<zeros<<"\n\n";
    for (int h = 0; h < summation; h++){
        cout <<"\n "<<sub_array_addition[h];
    }
    cout <<"\n\n\n";
    sort(sub_array_addition, sub_array_addition+summation);
    for (int h = 0; h < summation; h++){
        cout <<"\n "<<sub_array_addition[h];
    }
    cout <<"\n\n";
    int second_smallest = smallest;
    for (int k = 0; k < summation; k++){
        if (second_smallest < *(sub_array_addition+k)){
        second_smallest = *(sub_array_addition+k);
        return second_smallest;
        }
    }
    return second_smallest;
}