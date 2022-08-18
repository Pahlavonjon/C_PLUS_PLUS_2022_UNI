#include <iostream>
#include <string>

using namespace std;

extern int secondSmallestSum(int *numbers,int length);

int main(){
    int array_length = 0;
    int negative_to_positive = 0;
    int sub_array_addition = 0;
    cout <<"\n Enter array_length: ";
    cin >> array_length;
    if (array_length < 0){
        negative_to_positive = abs(array_length);
        cout <<"\n"<<negative_to_positive<<" \n";
        int *array = new int[negative_to_positive];
        for (int h = 0; h < negative_to_positive; h++){
        cout<<"\n Enter a number: ";
        cin >> array[h];
    }
    sub_array_addition = secondSmallestSum(array,array_length);
    cout <<"\n The addition of the second smallest contiguous array is: "<<sub_array_addition<<"\n\n";
    }
    else {
    int *array = new int[array_length];
    for (int h = 0; h < array_length; h++){
        cout<<"\n Enter a number: ";
        cin >> array[h];
    }
    sub_array_addition = secondSmallestSum(array,array_length);
    cout <<"\n The addition of the second smallest possible contiguous array is: "<<sub_array_addition<<"\n\n";
    }
}