#include <iostream>
#include <string>

// this question is asking to use dereferencing to print the 2d array;

using namespace std;

int main(){
    int array_length_row = 0;
    int array_length_col = 0;
    cout <<"\n Enter array row length: ";
    cin >> array_length_row;
    cout <<"\n Enter array col length: ";
    cin >> array_length_col;

    int **array = new int*[array_length_row];
    for (int k = 0; k < array_length_row; k++){
        *(array+k) = new int[array_length_col];
    }
    for (int j = 0; j < array_length_row; j++){
        for (int k = 0; k < array_length_col; k++){
            cout <<"\n Enter integer: ";
            cin >> *(*(array+j)+k);
        }
    }
    cout <<"\n The array elements were: \n\n";
    for (int j = 0; j < array_length_row; j++){
        for (int k = 0; k < array_length_col; k++){
            cout <<" "<<*(*(array+j)+k);
        }
        cout <<"\n";
    }
    cout <<"\n\n";
    
}