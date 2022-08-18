#include <iostream>
#include <string>

using namespace std;

void print_until_down(int *vals, int len){
    for (int k = 0; k < len; k++){
        if (k == 0){
            cout << *(vals+k)<<" ";
        }
        else if (*(vals+k) >= *(vals+k-1)){
            if (k == len-1){
                cout << *(vals+k);
            }
            else{
            cout << *(vals+k)<<" ";
            }
        }
    }
    cout <<endl;
}