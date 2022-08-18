#include <iostream>
#include <string>

using namespace std;

extern void print_until_down(int *vals, int len);

int main(){
    int array_length = 0;
    cout <<"\n Enter array length: ";
    cin >>array_length;
    int *array = new int[array_length];
    for (int k = 0; k < array_length; k++){
        cout <<"\n Enter number: ";
        cin >> *(array+k);
    }
    print_until_down(array,array_length);
}