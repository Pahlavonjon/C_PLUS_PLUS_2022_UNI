#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
int main(void){
    bool run_main = true;
    unsigned long long int* first_pointer;
    unsigned long long int* second_pointer;
    unsigned long long int size_of_array = 0;
    unsigned long long int initialiser = 1;
    cout << "\n\n How big should the array be at first?\n\n";
    cin >> size_of_array;
    while (size_of_array < 0){
        cout << "\n\n Invalid array length. . . \n\n";
        cout << " Enter a new valid array length: \n";
        cin >> size_of_array;
        if (cin.fail()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            size_of_array = 0;
            return 1;
        }
    }
    first_pointer = new unsigned long long int[size_of_array];
    for (unsigned long long int k = 0; k < size_of_array; k++){
        *(first_pointer+k) = initialiser;
    }
    while (run_main == true){
        initialiser = 1;
        second_pointer = first_pointer;
        // cout << "\n\n previous array: \n\n";
        // for (unsigned long long int k = 0; k < size_of_array; k++){
        //     cout << " "<< first_pointer[k];
        // }
        delete first_pointer;
        size_of_array *= 2;
        first_pointer = new unsigned long long int[size_of_array];
        for (unsigned long long int k = 0; k < size_of_array; k++){
            if (k < size_of_array*0.5){
                *(first_pointer+k) = *(second_pointer+k);
            }
            *(first_pointer+k) = initialiser++;
        }
        cout << "\n\n\n The next bigger array: \n\n";
        for (unsigned long long int k = 0; k < size_of_array; k++){
            cout << " "<< first_pointer[k];
        }
        cout << "\n\n";
        this_thread::sleep_for(chrono::seconds(2));
    }
}