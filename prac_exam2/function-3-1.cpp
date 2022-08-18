#include <iostream>
#include <string>

using namespace std;

int count_next_element_matches(int vals[], int length){
    int same = 0;
    for (int k = 0; k < length; k++){
        if (*(vals+k) == *(vals+k+1)){
            same++;
        }
    }
    return same;
}