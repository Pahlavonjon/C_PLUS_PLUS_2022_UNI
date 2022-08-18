#include <iostream>
#include <string>

using namespace std;

extern int count_next_element_matches(int vals[], int length);

int main(){
    int array_length = 0;
    cout <<"\n Enter array length: ";
    cin >>array_length;
    int *array = new int[array_length];
    for (int k = 0; k < array_length; k++){
        cout <<"\n Enter number: ";
        cin >> *(array+k);
    }
    cout << "\n"<<count_next_element_matches(array,array_length)<<"\n";
    int array_length_2 = 0;
    cout <<"\n Enter array length: ";
    cin >>array_length_2;
    int *array_2 = new int[array_length_2];
    for (int k = 0; k < array_length_2; k++){
        cout <<"\n Enter number: ";
        cin >> *(array_2+k);
    }
    cout << "\n"<<count_next_element_matches(array_2,array_length_2)<<"\n";

}