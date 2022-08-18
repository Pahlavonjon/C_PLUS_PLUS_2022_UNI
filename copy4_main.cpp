#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

extern int sub_array(int *array, int length);

int main(){
    int array_length = 0;
    cout <<"\n Enter array length: ";
    cin >> array_length;
    int *array = new int[array_length];
    for (int k = 0; k < array_length; k++){
        cout <<"\n Enter number: ";
        cin >> *(array+k);
    }
    int largest = sub_array(array, array_length);
    cout <<"\n\n The largest sub array sum is: "<< largest<<"\n\n";

    delete[] array;
}