#include <iostream>
#include <string>

using namespace std;

void Print_Array(int length, int Array[4][4]){
    cout<<"\n\n";
    for (int k = 0; k < length; k++){
        for (int g = 0; g < length; g++){
            cout <<" "<<Array[k][g];
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Swipe_Right(int length, int Array[4][4]){ // adding all the elements from left to right
    for (int k = 0; k < length; k++){
        for (int g = length-1; g > -1; g--){
            if (Array[k][g] != 0){
                if (Array[k][g] == Array[k][g-1]){
                    bool row_addition_complete = false;
                    for (int col = 1; col < length+1; col++){
                        if (Array[k][length-col] == 0 && row_addition_complete == false){
                            Array[k][length-col] = Array[k][g] + Array[k][g-1];
                            Array[k][g-1] = 0; // resettting the numbers after addition
                            Array[k][g] = 0;
                            row_addition_complete = true;
                        }
                    }
                }
                else {
                    bool row_addition_complete = false;
                    for (int col = 1; col < length+1; col++){ // col must equal 1!
                        if (Array[k][length-col] == 0 && row_addition_complete == false){
                            Array[k][length-col] = Array[k][g];
                            Array[k][g] = 0;
                            row_addition_complete = true;
                        }
                    }
                }
            }
        }
    }
}

void Swipe_Left(int length, int Array[4][4]){
    for (int k = 0; k < length; k++){
        for (int g = 0; g < length; g++){
            if (Array[k][g] != 0){
                if (Array[k][g] == Array[k][g+1]){
                    bool row_addition_complete = false;
                    for (int col = 0; col < length; col++){
                        if (Array[k][col] == 0 && row_addition_complete == false && Array[k][col] == Array[k][g+1]){
                            Array[k][col] = Array[k][g] + Array[k][g+1];
                            Array[k][g+1] = 0; // resettting the numbers after addition
                            Array[k][g] = 0;
                            row_addition_complete = true;
                        }
                        else if (Array[k][col] == Array[k][g] && row_addition_complete == false && col == (g-1)){
                            Array[k][col] = Array[k][g] + Array[k][g+1];
                            Array[k][g+1] = 0; // resettting the numbers after addition
                            // Array[k][g] = 0;
                            row_addition_complete = true;
                        }
                    }
                }
                else {
                    bool row_addition_complete = false;
                    for (int col = 0; col < length; col++){ // col must equal 1!
                        if (Array[k][col] == 0 && row_addition_complete == false){
                            Array[k][col] = Array[k][g];
                            Array[k][g] = 0;
                            row_addition_complete = true;
                        }
                    }
                }
            }
        }
    }
}

// void Swipe_Down(){
    
// }

void Swipe_Up(int length, int Array[4][4]){
    for (int k = 0; k < length; k++){// column               // adding from top to bottom
        for (int g = 0; g < length; g++){ // row
            if (Array[g][k] != 0){
                if (Array[g][k] == Array[g-1][k]){
                    bool col_addition_complete = false;
                    for (int col = 0; col < length; col++){
                        if ((Array[col][k] == 0 && col_addition_complete == false)){
                            Array[col][k] = Array[g][k] + Array[g-1][k];
                            Array[g-1][k] = 0; // resettting the numbers after addition
                            if (k != 0){
                                Array[g][k] = 0;
                            }
                            col_addition_complete = true;
                        }
                        else if (Array[col][k] != 0 && col == 0){
                            Array[col][k] = Array[g][k];
                        }
                    }
                }
                else {
                    bool col_addition_complete = false;
                    for (int col = 0; col < length; col++){ // col must equal 1!
                        if (Array[col][k] == 0 && col_addition_complete == false){
                            Array[col][k] = Array[g][k];
                            if (k != 0){
                                Array[g][k] = 0;
                            }
                            col_addition_complete = true;
                        }
                    }
                }
            }
        }
    }
}


int main(){
    int Array[4][4] = {0};
    int Range_row = rand()%3;
    int Range_col = rand()%3;

    for (int k = 0; k < 4; k++){
        for (int g = 0; g < 4; g++){
            Array[Range_row][Range_col] = 2;
        }
    }
    
    Range_row = rand()%3;
    Range_col = rand()%3;

    for (int k = 0; k < 4; k++){
        for (int g = 0; g < 4; g++){
            Array[Range_row][Range_col] = 4;
        }
    }

    Range_row = rand()%3;
    Range_col = rand()%3;

    for (int k = 0; k < 4; k++){
        for (int g = 0; g < 4; g++){
            Array[Range_row][Range_col] = 8;
        }
    }
    Range_row = rand()%3;
    Range_col = rand()%3;

    for (int k = 0; k < 4; k++){
        for (int g = 0; g < 4; g++){
            Array[Range_row][Range_col] = 32;
        }
    }
    Array[1][2] = 2;
    Array[0][1] = 32;
    Array[1][3] = 2;
    Array[2][2] = 8;
    for (int k = 0; k < 4; k++){
        Array[0][k] = 2;
    }
    string user_input = "";
    cout <<"\n\n Welcome to 2048!\n\n";
    Print_Array(4,Array);
    cout <<"\n Enter w,a,s,d   up, left, down, up\n ";
    cin >> user_input;
    while (user_input == "d" || user_input == "w" || user_input == "a" || user_input == "s"){
        while (user_input == "d" || user_input == "right"){
            Swipe_Right(4, Array);
            Print_Array(4,Array);
            cout <<"\n Enter w,a,s,d   up, left, down, up\n ";
            cin >> user_input;
        }
        while (user_input == "w" || user_input == "up"){
            Swipe_Up(4, Array);
            Print_Array(4,Array);
            cout <<"\n Enter w,a,s,d   up, left, down, up\n ";
            cin >> user_input;
        }
        
        while (user_input == "a" || user_input == "left"){
            Swipe_Left(4,Array);
            Print_Array(4,Array);
            cout <<"\n Enter w,a,s,d   up, left, down, up\n ";
            cin >> user_input;
        }
    }
}