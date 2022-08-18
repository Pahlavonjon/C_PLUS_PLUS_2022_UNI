#include <iostream>
#include <string>

// this question is asking for numerical operations using pointers

using namespace std;

int main(){
    int array_length = 42;
    int *array_length_pointer = &array_length;
    *array_length_pointer += 5;
    cout <<"\n The ptr value before is: "<<*array_length_pointer<<"\n\n";
    *array_length_pointer -= 2;
    cout <<"\n The ptr value after is: "<<*array_length_pointer<<"\n\n";
    
}