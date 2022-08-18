#include <iostream>
#include <string>

// this question is asking to use dereferencing to print the array;

using namespace std;

int main(){
    int array_length = 0;
    cout <<"\n Enter array length: ";
    cin >> array_length;
    int *array = new int[array_length];
    for (int k = 0; k < array_length; k++){
        cout <<"\n Enter integer: ";
        cin >> *(array+k);
    }
    cout << "\n The array elements are: \n";
    for (int k = 0; k < array_length; k++){
        cout <<"\n "<<*(array+k);
    }
    cout <<"\n\n";
    
}