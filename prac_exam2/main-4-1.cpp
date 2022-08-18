#include <iostream>
#include <string>

using namespace std;

extern int* min_max(int **vals,int num_rows, int num_cols);

int main(){
    int array_length_1 = 0;
    int array_length_2 = 0;
    cout <<"\n Enter array row: ";
    cin >>array_length_1;
    cout <<"\n Enter array col: ";
    cin >>array_length_2; 
    int **arrayS = new int*[array_length_1];
    for (int k = 0; k < array_length_1; k++){
        *(arrayS+k) = new int[array_length_2];
    }
    for (int k = 0; k < array_length_1; k++){
        for (int j = 0; j < array_length_2; j++){
            cout <<"\n Enter number: ";
            cin >> *(*(arrayS+k)+j);
        }
    }
    int *array_3; 
    array_3 = min_max(arrayS,array_length_1,array_length_2);
    cout <<"\n The result is: \n";
    cout <<" "<<*(array_3+0);
    cout <<" "<<*(array_3+1);
    cout <<"\n\n";
    
}