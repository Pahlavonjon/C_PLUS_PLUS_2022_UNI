#include <iostream>
#include <string>

using namespace std;

extern string lookup_month(int month);

int main(){
    int array_length = 0;
    cout <<"\n Enter a number from 1-12 inclusive: ";
    cin >> array_length;
    
    cout << lookup_month(array_length) <<"\n";
}