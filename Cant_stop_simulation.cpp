#include <iostream>
#include <string>
#include <random>
#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int roll_die_1(){
    return rand()%6 + 1;
}
int roll_die_2(){
    return rand()%6 + 1;
}
int roll_die_3(){
    return rand()%6 + 1;
}
int roll_die_4(){
    return rand()%6 + 1;
}
void print_4_dice_result(int *roll_die_1, int *roll_die_2, int *roll_die_3, int *roll_die_4){
    cout << "Dice 1 rolls:  "<<*roll_die_1<<"\n";
    cout << "Dice 2 rolls:  "<<*roll_die_2<<"\n";
    cout << "Dice 3 rolls:  "<<*roll_die_3<<"\n";
    cout << "Dice 4 rolls:  "<<*roll_die_4<<"\n";
}
void Clear_Terminal(){
    cout << "\n\n\n\n\n\n\n\n\n";
}
void End_formater(){
    cout << "\n\n\n";
}
void Dice_Randomiser(bool *run_game, int *dice1, int *dice2, int *dice3, int *dice4){
    srand(time(0));
    while (*run_game == true){
        this_thread::sleep_for(chrono::milliseconds(1));
        *dice1 = roll_die_1();
        *dice2 = roll_die_2();
        *dice3 = roll_die_3();
        *dice4 = roll_die_4();
    }
}
bool check_for_busting(){

    return true;
}
void Player_1_turn(){

}
int getNearest(int x, int y, int target) {
   if (target - x >= y - target)
      return y;
   else
      return x;
}
int getNearestElement(int arr[], int n, int target) {
   if (target <= arr[0])
      return arr[0];
   if (target >= arr[n - 1])
      return arr[n - 1];
   int left = 0, right = n, mid = 0;
   while (left < right) {
      mid = (left + right) / 2;
      if (arr[mid] == target)
         return arr[mid];
      if (target < arr[mid]) {
         if (mid > 0 && target > arr[mid - 1])
            return getNearest(arr[mid - 1], arr[mid], target);
            right = mid;
      } else {
         if (mid < n - 1 && target < arr[mid + 1])
            return getNearest(arr[mid], arr[mid + 1], target);
         left = mid + 1;
      }
   }
   return arr[mid];
}
void print_board_progress(int board_col_2[], int board_col_3[], int board_col_4[], int board_col_5[], int board_col_6[], int board_col_7[], int board_col_8[], int board_col_9[], int board_col_10[], int board_col_11[], int board_col_12[]){                                  
    cout << "\n\n Board progress:\n\n";
    for (int f = 0; f < 2; f++){
        cout << " "<<board_col_2[f];
    }
    cout << "\n";
    for (int f = 0; f < 4; f++){
        cout << " "<<board_col_3[f];
    }
    cout << "\n";
    for (int f = 0; f < 6; f++){
        cout << " "<<board_col_4[f];
    }
    cout << "\n";
    for (int f = 0; f < 8; f++){
        cout << " "<<board_col_5[f];
    }
    cout << "\n";
    for (int f = 0; f < 10; f++){
        cout << " "<<board_col_6[f];
    }
    cout << "\n";
    for (int f = 0; f < 11; f++){
        cout << " "<<board_col_7[f];
    }
    cout << "\n";
    for (int f = 0; f < 10; f++){
        cout << " "<<board_col_8[f];
    }
    cout << "\n";
    for (int f = 0; f < 8; f++){
        cout << " "<<board_col_9[f];
    }
    cout << "\n";
    for (int f = 0; f < 6; f++){
        cout << " "<<board_col_10[f];
    }
    cout << "\n";
    for (int f = 0; f < 4; f++){
        cout << " "<<board_col_11[f];
    }
    cout << "\n";
    for (int f = 0; f < 2; f++){
        cout << " "<<board_col_12[f];
    }
    cout << "\n\n\n";
}
void reset_board(int board_col_2[], int board_col_3[], int board_col_4[], int board_col_5[], int board_col_6[], int board_col_7[], int board_col_8[], int board_col_9[], int board_col_10[], int board_col_11[], int board_col_12[]){
    for (int f = 0; f < 2; f++){
        board_col_2[f] = 0;
    }
    for (int f = 0; f < 4; f++){
        board_col_3[f] = 0;
    }
    for (int f = 0; f < 6; f++){
        board_col_4[f] = 0;
    }
    for (int f = 0; f < 8; f++){
        board_col_5[f] = 0;
    }
    for (int f = 0; f < 10; f++){
        board_col_6[f] = 0;
    }
    for (int f = 0; f < 11; f++){
        board_col_7[f] = 0;
    }
    for (int f = 0; f < 10; f++){
        board_col_8[f] = 0;
    }
    for (int f = 0; f < 8; f++){
        board_col_9[f] = 0;
    }
    for (int f = 0; f < 6; f++){
        board_col_10[f] = 0;
    }
    for (int f = 0; f < 4; f++){
        board_col_11[f] = 0;
    }
    for (int f = 0; f < 2; f++){
        board_col_12[f] = 0;
    }
}
void switch_player_1_selection(int column_selection, int board_col_2[], int board_col_3[], int board_col_4[], int board_col_5[], int board_col_6[], int board_col_7[], int board_col_8[], int board_col_9[], int board_col_10[], int board_col_11[], int board_col_12[], int *two_column_progress, int *three_column_progress, int *four_column_progress, int *five_column_progress, int *six_column_progress, int *seven_column_progress, int *eight_column_progress, int *nine_column_progress, int *ten_column_progress, int *eleven_column_progress, int *twelve_column_progress){                                        

            switch (column_selection){
                case 2:
                    if (board_col_2[1] == 0){
                        board_col_2[(*two_column_progress)] = 1;
                        (*two_column_progress)++;
                    }
                    break;
                case 3:
                    if (board_col_3[3] == 0){
                        board_col_3[(*three_column_progress)] = 1;
                        (*three_column_progress)++;
                    }
                    break;
                case 4:
                    if (board_col_4[5] == 0){                   
                        board_col_4[(*four_column_progress)] = 1;
                        (*four_column_progress)++;
                    }
                    break;
                case 5:
                    if (board_col_5[7] == 0){
                        board_col_5[(*five_column_progress)] = 1;
                        (*five_column_progress)++;
                    }
                    break;
                case 6:
                    if (board_col_6[9] == 0){
                        board_col_6[(*six_column_progress)] = 1;
                        (*six_column_progress)++;
                    }
                    break;
                case 7:
                    if (board_col_7[10] == 0){
                        board_col_7[(*seven_column_progress)] = 1;
                        (*seven_column_progress)++;
                    }
                    break;
                case 8:
                    if (board_col_8[9] == 0){
                        board_col_8[(*eight_column_progress)] = 1;
                        (*eight_column_progress)++;
                    }
                    break;
                case 9:
                    if (board_col_9[7] == 0){
                        board_col_9[(*nine_column_progress)] = 1;
                        (*nine_column_progress)++;
                    }
                    break;
                case 10:
                    if (board_col_10[5] == 0){
                        board_col_10[(*ten_column_progress)] = 1;
                        (*ten_column_progress)++;
                    }
                    break;
                case 11:
                    if (board_col_11[3] == 0){
                        board_col_11[(*eleven_column_progress)] = 1;
                        (*eleven_column_progress)++;
                    }
                    break;
                case 12:
                    if (board_col_12[1] == 0){
                        board_col_12[(*twelve_column_progress)] = 1;
                        (*twelve_column_progress)++;
                    }
                    break;
            }
}

void simulation(){
        dice_1_p1 = dice_1_next;
        dice_2_p1 = dice_2_next;
        dice_3_p1 = dice_3_next;
        dice_4_p1 = dice_4_next;

          
    if (first_sum == first_column){
        switch_player_1_selection(first_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
    }

    if (second_sum == second_column){
        switch_player_1_selection(second_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
    }

    if (third_sum == third_column){
        switch_player_1_selection(third_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
    }

    if ((first_sum != ) && (second_sum != second_column) && (third_sum != third_column)){
        busting = true;
        {(dice_1_p1+dice_2_p1), (dice_3_p1+dice_4_p1), (dice_2_p1+dice_3_p1)};
    }
}


int main(){
    
    bool run_game = true;
    bool run_main = true;

    bool busting = false;

    int player_1_ID = 1;
    int player_2_ID = 2;

    int Player_1_SET = 3;
    int Player_2_SET = 4;

    // Empty game board at the start
    

    // The randomised future dices, these dices are rolled on another thread non_stop
    int dice_1_next = 0;
    int dice_2_next = 0;
    int dice_3_next = 0;
    int dice_4_next = 0;

    // After player 1 makes the decision, these dices are then selected from the future dices from the other thread
    int dice_1_p1 = 0;
    int dice_2_p1 = 0;
    int dice_3_p1 = 0;
    int dice_4_p1 = 0;

    // After player 1 makes the decision, these dices are then selected from the future dices from the other thread
    int dice_1_p2 = 0;
    int dice_2_p2 = 0;
    int dice_3_p2 = 0;
    int dice_4_p2 = 0;

    // running thread
    thread Run____Dice_Randomiser___THREAD(Dice_Randomiser,&run_game, &dice_1_next, &dice_2_next, &dice_3_next, &dice_4_next);
    Run____Dice_Randomiser___THREAD.detach();
    string player_1_decision = "";
    string player_2_decision = "";

            int player_1_pair_selection_first = 0;
            int player_1_pair_selection_second = 0;
            int player_1_pair_selection_third = 0;

            int first_column = 0;
            int second_column = 0;
            int third_column = 0;

            int Busting_Failure[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
           

            int two_column_progress = 0;
            int three_column_progress = 0;
            int four_column_progress = 0;
            int five_column_progress = 0;
            int six_column_progress = 0;
            int seven_column_progress = 0;
            int eight_column_progress = 0;
            int nine_column_progress = 0;
            int ten_column_progress = 0;
            int eleven_column_progress = 0;
            int twelve_column_progress = 0;

            bool first_roll = true;

        // cout << "\n\n\n";



            int board_col_2[2] = {0, 0};
            int board_col_3[4] = {0, 0, 0, 0};
            int board_col_4[6] = {0, 0, 0, 0, 0, 0};
            int board_col_5[8] = {0, 0, 0, 0, 0, 0, 0, 0};
            int board_col_6[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int board_col_7[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int board_col_8[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int board_col_9[8] = {0, 0, 0, 0, 0, 0, 0, 0};
            int board_col_10[6] = {0, 0, 0, 0, 0, 0};
            int board_col_11[4] = {0, 0, 0, 0};
            int board_col_12[2] = {0, 0};





        //  int number_of_rolls = 0;

        for (int k = 1; k < 101; k++){
            reset_board(board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12);
            busting = false;
            this_thread::sleep_for(chrono::milliseconds(5));
             
            int number_of_rolls = 0;

            dice_1_p1 = dice_1_next;
            dice_2_p1 = dice_2_next;
            dice_3_p1 = dice_3_next;
            dice_4_p1 = dice_4_next;

            // print_4_dice_result(&dice_1_p1, &dice_2_p1, &dice_3_p1, &dice_4_p1);
            // cout << "\n\n";

            // cout << "\n\n There are 3 dice pair combinations: \n";
            // cout << " 1  " << dice_1_p1 <<" and "<< dice_2_p1 << "  ("<<dice_1_p1+dice_2_p1<< ") \n";
            // cout << " 2  " << dice_3_p1 <<" and "<< dice_4_p1 << "  ("<<dice_3_p1+dice_4_p1<< ") \n";
            // cout << " 3  " << dice_2_p1 <<" and "<< dice_3_p1 << "  ("<<dice_2_p1+dice_3_p1<< ") \n";
            // cout << "\n\n";
            
            int closet_to_7[3] = {(dice_1_p1+dice_2_p1), (dice_3_p1+dice_4_p1), (dice_2_p1+dice_3_p1)};

            bool swapped = false;
            for (int i = 0; i < 3-1; i++){
                swapped = false;
                for (int j = 0; j < 3-i-1; j++){
                    if (closet_to_7[j] > closet_to_7[j+1]){
                    swap(closet_to_7[j], closet_to_7[j+1]);
                    swapped = true;
                    }
                }
            }
            int closet_first = getNearestElement(closet_to_7,3,7);

            for (int j = 0; j < 3; j++){
                if (closet_first == closet_to_7[j]){
                    closet_to_7[j] = -99;
                }
            }
            bool swapped_second = false;
            for (int i = 0; i < 3-1; i++){
                swapped_second = false;
                for (int j = 0; j < 3-i-1; j++){
                    if (closet_to_7[j] > closet_to_7[j+1]){
                    swap(closet_to_7[j], closet_to_7[j+1]);
                    swapped_second = true;
                    }
                }
            }
            int closet_second = getNearestElement(closet_to_7,3,7);

            for (int j = 0; j < 3; j++){
                if (closet_second == closet_to_7[j]){
                    closet_to_7[j] = -109;
                }
            }
            bool swapped_third = false;
            for (int i = 0; i < 3-1; i++){
                swapped_second = false;
                for (int j = 0; j < 3-i-1; j++){
                    if (closet_to_7[j] > closet_to_7[j+1]){
                    swap(closet_to_7[j], closet_to_7[j+1]);
                    swapped_second = true;
                    }
                }
            }
            int closet_third = getNearestElement(closet_to_7,3,7);

            if (closet_first >=2 && closet_first <= 12){
                player_1_pair_selection_first = closet_first;
            }
            if (closet_second >=2 && closet_second <= 12){
                player_1_pair_selection_second = closet_second;
            }
            if (closet_third >= 2 && closet_third <= 12){
                player_1_pair_selection_third = closet_third;
            }

             if (first_roll == true){
                first_column = player_1_pair_selection_first;
                switch_player_1_selection(first_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
                second_column = player_1_pair_selection_second;
                switch_player_1_selection(second_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
                third_column = player_1_pair_selection_third;
                switch_player_1_selection(third_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
                first_roll = false;
            }

            // cout << "\n\n\n Chosen columns are: \n";
            // cout << " "<<first_column<<"\n";
            // cout << " "<<second_column<<"\n";
            // cout << " "<<third_column<<"\n";











            while (busting == false){
                this_thread::sleep_for(chrono::milliseconds(5));
                number_of_rolls++;
                dice_1_p1 = dice_1_next;
                dice_2_p1 = dice_2_next;
                dice_3_p1 = dice_3_next;
                dice_4_p1 = dice_4_next;

                // print_4_dice_result(&dice_1_p1, &dice_2_p1, &dice_3_p1, &dice_4_p1);
                // cout << "\n\n";

                // cout << "\n\n There are 3 dice pair combinations: \n";
                // cout << " 1  " << dice_1_p1 <<" and "<< dice_2_p1 << "  ("<<dice_1_p1+dice_2_p1<< ") \n";
                // cout << " 2  " << dice_3_p1 <<" and "<< dice_4_p1 << "  ("<<dice_3_p1+dice_4_p1<< ") \n";
                // cout << " 3  " << dice_2_p1 <<" and "<< dice_3_p1 << "  ("<<dice_2_p1+dice_3_p1<< ") \n";
                // cout << "\n\n";
                
                closet_to_7[0] = (dice_1_p1+dice_2_p1);
                closet_to_7[1] = (dice_3_p1+dice_4_p1); 
                closet_to_7[2] = (dice_2_p1+dice_3_p1);
            
                bool swapped = false;
                for (int i = 0; i < 3-1; i++){
                    swapped = false;
                    for (int j = 0; j < 3-i-1; j++){
                        if (closet_to_7[j] > closet_to_7[j+1]){
                        swap(closet_to_7[j], closet_to_7[j+1]);
                        swapped = true;
                        }
                    }
                }
                int closet_first = getNearestElement(closet_to_7,3,7);

                for (int j = 0; j < 3; j++){
                    if (closet_first == closet_to_7[j]){
                        closet_to_7[j] = -99;
                    }
                }
                bool swapped_second = false;
                for (int i = 0; i < 3-1; i++){
                    swapped_second = false;
                    for (int j = 0; j < 3-i-1; j++){
                        if (closet_to_7[j] > closet_to_7[j+1]){
                        swap(closet_to_7[j], closet_to_7[j+1]);
                        swapped_second = true;
                        }
                    }
                }
                int closet_second = getNearestElement(closet_to_7,3,7);

                for (int j = 0; j < 3; j++){
                    if (closet_second == closet_to_7[j]){
                        closet_to_7[j] = -109;
                    }
                }
                bool swapped_third = false;
                for (int i = 0; i < 3-1; i++){
                    swapped_second = false;
                    for (int j = 0; j < 3-i-1; j++){
                        if (closet_to_7[j] > closet_to_7[j+1]){
                        swap(closet_to_7[j], closet_to_7[j+1]);
                        swapped_second = true;
                        }
                    }
                }
                int closet_third = getNearestElement(closet_to_7,3,7);
                int first_sum = 0;
                int second_sum = 0;
                int third_sum = 0;

                if (closet_first >=2 && closet_first <= 12){
                    first_sum = closet_first;
                }
                if (closet_second >=2 && closet_second <= 12){
                    second_sum = closet_second;
                }
                if (closet_third >= 2 && closet_third <= 12){
                    third_sum = closet_third;
                }

                if (first_roll == false){
                    if (first_sum == first_column){
                        switch_player_1_selection(first_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
                    }

                    if (second_sum == second_column){
                        switch_player_1_selection(second_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
                    }

                    if (third_sum == third_column){
                        switch_player_1_selection(third_column, board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12, &two_column_progress, &three_column_progress, &four_column_progress, &five_column_progress, &six_column_progress, &seven_column_progress, &eight_column_progress, &nine_column_progress, &ten_column_progress, &eleven_column_progress, &twelve_column_progress);
                    }
                }

                if ((first_sum != first_column) && (second_sum != second_column) && (third_sum != third_column)){
                    busting = true;
                    // cout << "\n\n\n BUSTED!!!!! after "<< number_of_rolls<< " rolls   \n\n";
                    switch (number_of_rolls){
                        case 1:
                            Busting_Failure[0] = Busting_Failure[0] +1;
                            break;
                        case 2:
                            Busting_Failure[1] = Busting_Failure[1] +1;
                            break;
                        case 3:
                            Busting_Failure[2] = Busting_Failure[2] +1;
                            break;
                        case 4:
                            Busting_Failure[3] = Busting_Failure[3] +1;
                            break;
                        case 5:
                            Busting_Failure[4] = Busting_Failure[4] +1;
                            break;
                        case 6:
                            Busting_Failure[5] = Busting_Failure[5] +1;
                            break;
                        case 7:
                            Busting_Failure[6] = Busting_Failure[6] +1;
                            break;
                        case 8:
                            Busting_Failure[7] = Busting_Failure[7] +1;
                            break;
                        case 9:
                            Busting_Failure[8] = Busting_Failure[8] +1;
                            break;
                        case 10:
                            Busting_Failure[9] = Busting_Failure[9] +1;
                            break;
                        case 11:
                            Busting_Failure[10] = Busting_Failure[10] +1;
                            break;
                        case 12:
                            Busting_Failure[11] = Busting_Failure[11] +1;
                            break;
                    }
                }
                //print_board_progress(board_col_2, board_col_3, board_col_4, board_col_5, board_col_6, board_col_7, board_col_8, board_col_9, board_col_10, board_col_11, board_col_12);
            }
        }
    End_formater();
    for (int j = 0; j < 12; j++){
        cout << " " << Busting_Failure[j]<<"\n";
    }
    End_formater();
    return 0;
}