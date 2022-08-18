#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;
void testing_int(){
    bool stop_main = false;
    int testing = 0;
    int testing_2 = 0;
    int inc = 0;
    while (stop_main == false){
        cout <<"\n Enter int test 1\n";
        cin >> testing;
        if (testing == 987){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout <<"\n Enter int test 2\n";
        cin >> testing_2;
        if (testing_2 == 789){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // stop_main = true;
        if (inc == 2){
            break;
        }
    }
}
void testing_string(){
    bool stop_main = false;
    string testing = "";
    string testing_2 = "";
    int inc = 0;
    while (stop_main == false){
        cout <<"\n Enter string test 1\n";
        cin >> testing;
        if (testing == "poi"){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout <<"\n Enter string test 2\n";
        cin >> testing_2;
        if (testing_2 == "iop"){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // stop_main = true;
        if (inc == 2){
            break;
        }
    }
}
void testing_double(){
    bool stop_main = false;
    double testing = 0;
    double testing_2 = 0;
    int inc = 0;
    while (stop_main == false){
        cout <<"\n Enter double test 1\n";
        cin >> testing;
        if (testing == 987){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout <<"\n Enter double test 2\n";
        cin >> testing_2;
        if (testing_2 == 789){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // stop_main = true;
        if (inc == 2){
            break;
        }
    }
}
void testing_char(){
    bool stop_main = false;
    char testing[3];
    char testing_2[3];
    int inc = 0;
    while (stop_main == false){
        cout <<"\n Enter char test 1\n";
        cin >> testing;
        if (testing == "987"){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout <<"\n Enter char test 2\n";
        cin >> testing_2;
        if (testing_2 == "789"){
            inc++;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // stop_main = true;
        if (inc == 2){
            break;
        }
    }
}
int main(void){
    bool stop_main = false;
    int selection = 0;
    while (stop_main == false){
        cout << "\n\n Enter 1,2,3 or 4\n\n";
        cin >> selection;
        if (selection == 1){
            testing_int();
        }
        else if (selection == 2){
            testing_string();
        }
        else if (selection == 3){
            testing_double();
        }
        else if (selection == 4){
            testing_char();
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << "\n\n";
    return 0;
}

// cin.fail()
// !cin


