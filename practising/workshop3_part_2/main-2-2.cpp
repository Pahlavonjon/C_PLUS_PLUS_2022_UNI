#include <iostream>
#include <string>

// this question is asking to use the * (de-referencing operator)

using namespace std;

int main(){
    int array_length = 10;
    int *array_length_pointer = &array_length;
    cout <<"\n The address of the variable was: "<<*(array_length_pointer)<<"\n\n";
}