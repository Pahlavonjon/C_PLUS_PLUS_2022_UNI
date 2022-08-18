#include <iostream>
#include <string>

using namespace std;

void Spiral(int length, int Two_D_Array[length][length]){
    int up = -1;
    int right = 1;
    int down = 1;
    int left = -1;
    int incrementor = 0;

    int current_direction = up;
    
    while (){
        if (current_direction = up){
            for (int k = (length*(0.5)); k < length; k = k + current_direction){
                for (int g = (length*(0.5)); g < length; g = g + current_direction){
                    Two_D_Array[k][g] = incrementor;
                    incrementor++;
                    for (int r = k; ){
                        for (int t = g)
                    }
                }
            }
            current_direction = right;
            right--;
        }
        else if (current_direction = right){
            for (int k = (length*(0.5)); k < length; k = k + current_direction){
                for (int g = (length*(0.5)); g < length; g = g + current_direction){
                    Two_D_Array[k][g] = incrementor;
                    incrementor++;
                }
            }
        }
        else if (current_direction = down){
            for (int k = (length*(0.5)); k < length; k = k + current_direction){
                for (int g = (length*(0.5)); g < length; g = g + current_direction){
                    Two_D_Array[k][g] = incrementor;
                    incrementor++;
                }
            }
        }
        else if (current_direction = left){
            for (int k = (length*(0.5)); k < length; k = k + current_direction){
                for (int g = (length*(0.5)); g < length; g = g + current_direction){
                    Two_D_Array[k][g] = incrementor;
                    incrementor++;
                }
            }
        }
    }
}

int main(){
    int dimension = 0;
    cout <<"\n Enter dimension: ";
    cin >> dimension;
    int Two_D_Array[dimension][dimension];
    Spiral(dimension, Two_D_Array);
}