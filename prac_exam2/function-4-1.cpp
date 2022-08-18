#include <iostream>
#include <string>

using namespace std;

int* min_max(int **vals,int num_rows, int num_cols){
    int *array_new = new int[2];
    int smallest = vals[1][1];
    int largest = vals[1][1];
    for (int k = 0; k < num_rows; k++){
        for (int j = 0; j < num_cols; j++){
            if (smallest > *(*(vals+k)+j)){
                smallest = *(*(vals+k)+j);
            }
        }
    }
    for (int k = 0; k < num_rows; k++){
        for (int j = 0; j < num_cols; j++){
            if (largest < *(*(vals+k)+j)){
                largest = *(*(vals+k)+j);
            }
        }
    }
    array_new[0] = smallest;
    array_new[1] = largest;
    return array_new;
}