#include <iostream>
#include <string>
#include <random>
#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>
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
        this_thread::sleep_for(chrono::milliseconds(10));
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
void Player_2_turn(){

}

int main(){

    bool run_game = true;
    bool run_main = true;

    int player_1_ID = 1;
    int player_2_ID = 2;

    int Player_1_SET = 3;
    int Player_2_SET = 4;

    // Empty game board at the start
    int board_col_2[2] = {0, 0};
    int board_col_3[4] = {0, 0, 0, 0};
    int board_col_4[6] = {0, 0, 0, 0, 0, 0};
    int board_col_5[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int board_col_6[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int board_col_7[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int board_col_8[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int board_col_9[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int board_col_10[6] = {0, 0, 0, 0, 0, 0};
    int board_col_11[4] = {0, 0, 0, 0};
    int board_col_12[2] = {0, 0};

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

    // The main while loop
    while (run_main == true){
        Clear_Terminal();
        cout << "\n\n P1   Roll a dice!  enter: r / R / roll\n\n ";
        cin >> player_1_decision;
        if (cin.fail()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            player_1_decision = "";
        }
        int player_1_pair_selection_first = 0;
        int player_1_pair_selection_second = 0;

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

        if (player_1_decision == "r" || player_1_decision == "R" || player_1_decision == "roll"){
            dice_1_p1 = dice_1_next;
            dice_2_p1 = dice_2_next;
            dice_3_p1 = dice_3_next;
            dice_4_p1 = dice_4_next;
            cout << "\n\n There are 4 dice pair combinations: \n";
            cout << " 1  " << dice_1_p1 <<" and "<< dice_2_p1 << "  ("<<dice_1_p1+dice_2_p1<< ") \n";
            cout << " 2  " << dice_3_p1 <<" and "<< dice_4_p1 << "  ("<<dice_3_p1+dice_4_p1<< ") \n";
            cout << " 3  " << dice_2_p1 <<" and "<< dice_3_p1 << "  ("<<dice_2_p1+dice_3_p1<< ") \n";
            cout << " 4  " << dice_1_p1 <<" and "<< dice_4_p1 << "  ("<<dice_1_p1+dice_4_p1<< ") \n";

            // if ((dice_1_p1 + dice_2_p1) != )

            cout << "\n\n Select first pair combination from above: \n ";
            cin >> player_1_pair_selection_first;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                player_1_pair_selection_first = 0;
            }
            cout << "\n\n Select second pair combination from above: \n ";
            cin >> player_1_pair_selection_second;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                player_1_pair_selection_second = 0;
            }
            if (player_1_pair_selection_first == player_1_pair_selection_second){
                cout << "\n\n The second selection cannot be the same!  Try again . . .\n ";
                cin >> player_1_pair_selection_second;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    player_1_pair_selection_second = 0;
                }
            }
           
    
            switch (player_1_pair_selection_first){
                case 2:
                    board_col_2[two_column_progress] = 1;
                    two_column_progress++;
                    break;
                case 3:
                    board_col_3[three_column_progress] = 1;
                    three_column_progress++;
                    break;
                case 4:
                    board_col_4[four_column_progress] = 1;
                    four_column_progress++;
                    break;
                case 5:
                    board_col_5[five_column_progress] = 1;
                    five_column_progress++;
                    break;
                case 6:
                    board_col_6[six_column_progress] = 1;
                    six_column_progress++;
                    break;
                case 7:
                    board_col_7[seven_column_progress] = 1;
                    seven_column_progress++;
                    break;
                case 8:
                    board_col_8[eight_column_progress] = 1;
                    eight_column_progress++;
                    break;
                case 9:
                    board_col_9[nine_column_progress] = 1;
                    nine_column_progress++;
                    break;
                case 10:
                    board_col_10[ten_column_progress] = 1;
                    ten_column_progress++;
                    break;
                case 11:
                    board_col_11[eleven_column_progress] = 1;
                    eleven_column_progress++;
                    break;
                case 12:
                    board_col_12[twelve_column_progress] = 1;
                    twelve_column_progress++;
                    break;
            }


            switch (player_1_pair_selection_second){
                case 2:
                    board_col_2[two_column_progress] = 1;
                    two_column_progress++;
                    break;
                case 3:
                    board_col_3[three_column_progress] = 1;
                    three_column_progress++;
                    break;
                case 4:
                    board_col_4[four_column_progress] = 1;
                    four_column_progress++;
                    break;
                case 5:
                    board_col_5[five_column_progress] = 1;
                    five_column_progress++;
                    break;
                case 6:
                    board_col_6[six_column_progress] = 1;
                    six_column_progress++;
                    break;
                case 7:
                    board_col_7[seven_column_progress] = 1;
                    seven_column_progress++;
                    break;
                case 8:
                    board_col_8[eight_column_progress] = 1;
                    eight_column_progress++;
                    break;
                case 9:
                    board_col_9[nine_column_progress] = 1;
                    nine_column_progress++;
                    break;
                case 10:
                    board_col_10[ten_column_progress] = 1;
                    ten_column_progress++;
                    break;
                case 11:
                    board_col_11[eleven_column_progress] = 1;
                    eleven_column_progress++;
                    break;
                case 12:
                    board_col_12[twelve_column_progress] = 1;
                    twelve_column_progress++;
                    break;
            }



            cout << "\n Enter your selection: \n ";
        }

        cout << "\n\n P2   Roll a dice!  enter r/R/roll\n\n ";
        cin >> player_2_decision;
        if (cin.fail()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            player_2_decision = "";
        }

    }
    End_formater();
    return 0;
}



            // int closet_to_7_difference[6];
            // closet_to_7_difference[0] = (dice_1_p1+dice_2_p1)-7;
            // closet_to_7_difference[0] = abs(closet_to_7_difference[0]);
            // cout << " the abs number is now: "<<closet_to_7_difference[0]<<"\n";

            // closet_to_7_difference[1] = (dice_3_p1+dice_4_p1)-7;
            // closet_to_7_difference[1] = abs(closet_to_7_difference[1]);
            // cout << " the abs number is now: "<<closet_to_7_difference[1]<<"\n";

            // closet_to_7_difference[2] = (dice_2_p1+dice_3_p1)-7;
            // closet_to_7_difference[2] = abs(closet_to_7_difference[2]);
            // cout << " the abs number is now: "<<closet_to_7_difference[2]<<"\n";

            // closet_to_7_difference[3] = (dice_1_p1+dice_4_p1)-7;
            // closet_to_7_difference[3] = abs(closet_to_7_difference[3]);
            // cout << " the abs number is now: "<<closet_to_7_difference[3]<<"\n";

            // closet_to_7_difference[4] = (dice_1_p1+dice_3_p1)-7;
            // closet_to_7_difference[4] = abs(closet_to_7_difference[4]);
            // cout << " the abs number is now: "<<closet_to_7_difference[4]<<"\n";

            // closet_to_7_difference[5] = (dice_4_p1+dice_2_p1)-7;
            // closet_to_7_difference[5] = abs(closet_to_7_difference[5]);
            // cout << " the abs number is now: "<<closet_to_7_difference[5]<<"\n";

            int closet_to_7[6] = {(dice_1_p1+dice_2_p1), (dice_3_p1+dice_4_p1), (dice_2_p1+dice_3_p1), (dice_1_p1+dice_4_p1), (dice_1_p1+dice_3_p1), (dice_4_p1+dice_2_p1)};

            cout << "\n\n There are 6 dice pair combinations: \n";
            cout << " 1  " << dice_1_p1 <<" and "<< dice_2_p1 << "  ("<<dice_1_p1+dice_2_p1<< ") \n";
            cout << " 2  " << dice_3_p1 <<" and "<< dice_4_p1 << "  ("<<dice_3_p1+dice_4_p1<< ") \n";
            cout << " 3  " << dice_2_p1 <<" and "<< dice_3_p1 << "  ("<<dice_2_p1+dice_3_p1<< ") \n";
            cout << " 4  " << dice_1_p1 <<" and "<< dice_4_p1 << "  ("<<dice_1_p1+dice_4_p1<< ") \n";
            cout << " 5  " << dice_1_p1 <<" and "<< dice_3_p1 << "  ("<<dice_1_p1+dice_3_p1<< ") \n";
            cout << " 6  " << dice_4_p1 <<" and "<< dice_2_p1 << "  ("<<dice_4_p1+dice_2_p1<< ") \n";


            int closet_to_7_difference[6];
            closet_to_7_difference[0] = (dice_1_p1+dice_2_p1)-7;
            closet_to_7_difference[0] = abs(closet_to_7_difference[0]);
            cout << " the abs number is now: "<<closet_to_7_difference[0]<<"\n";

            closet_to_7_difference[1] = (dice_3_p1+dice_4_p1)-7;
            closet_to_7_difference[1] = abs(closet_to_7_difference[1]);
            cout << " the abs number is now: "<<closet_to_7_difference[1]<<"\n";

            closet_to_7_difference[2] = (dice_2_p1+dice_3_p1)-7;
            closet_to_7_difference[2] = abs(closet_to_7_difference[2]);
            cout << " the abs number is now: "<<closet_to_7_difference[2]<<"\n";

            closet_to_7_difference[3] = (dice_1_p1+dice_4_p1)-7;
            closet_to_7_difference[3] = abs(closet_to_7_difference[3]);
            cout << " the abs number is now: "<<closet_to_7_difference[3]<<"\n";

            closet_to_7_difference[4] = (dice_1_p1+dice_3_p1)-7;
            closet_to_7_difference[4] = abs(closet_to_7_difference[4]);
            cout << " the abs number is now: "<<closet_to_7_difference[4]<<"\n";

            closet_to_7_difference[5] = (dice_4_p1+dice_2_p1)-7;
            closet_to_7_difference[5] = abs(closet_to_7_difference[5]);
            cout << " the abs number is now: "<<closet_to_7_difference[5]<<"\n";

            bool swapped_first = false;
            for (int i = 0; i < 6-1; i++){
                swapped_first  = false;
                for (int j = 0; j < 6-i-1; j++){
                    if (closet_to_7_difference[j] > closet_to_7_difference[j+1]){
                    swap(closet_to_7_difference[j], closet_to_7_difference[j+1]);
                    swapped_first  = true;
                    }
                }
            }

            cout << "\n\n";
            for (int j = 0; j < 6; j++){
                cout << " "<<closet_to_7_difference[j]<<"\n";
            }
            cout << "\n\n";

            bool swapped = false;
            for (int i = 0; i < 6-1; i++){
                swapped = false;
                for (int j = 0; j < 6-i-1; j++){
                    if (closet_to_7[j] > closet_to_7[j+1]){
                    swap(closet_to_7[j], closet_to_7[j+1]);
                    swapped = true;
                    }
                }
            }

            cout << "\n\n";
            for (int j = 0; j < 6; j++){
                cout << " "<<closet_to_7[j]<<"\n";
            }
            cout << "\n\n";


             
            int closet_to_7[6] = {(dice_1_p1+dice_2_p1), (dice_3_p1+dice_4_p1), (dice_2_p1+dice_3_p1), (dice_1_p1+dice_4_p1), (dice_1_p1+dice_3_p1), (dice_4_p1+dice_2_p1)};
            bool swapped = false;
            for (int i = 0; i < 6-1; i++){
                swapped = false;
                for (int j = 0; j < 6-i-1; j++){
                    if (closet_to_7[j] > closet_to_7[j+1]){
                    swap(closet_to_7[j], closet_to_7[j+1]);
                    swapped = true;
                    }
                }
            }
            int closet_first = getNearestElement(closet_to_7,6,7);
            for (int j = 0; j < 6; j++){
                if (closet_first == closet_to_7[j]){
                    closet_to_7[j] = -99;
                }
            }
            bool swapped_second = false;
            for (int i = 0; i < 6-1; i++){
                swapped_second = false;
                for (int j = 0; j < 6-i-1; j++){
                    if (closet_to_7[j] > closet_to_7[j+1]){
                    swap(closet_to_7[j], closet_to_7[j+1]);
                    swapped_second = true;
                    }
                }
            }
            int closet_second = getNearestElement(closet_to_7,6,7);
           
            player_1_pair_selection_first = closet_first;
            player_1_pair_selection_second = closet_second;

            cout << "\n\n First closet dice pair to 7:  "<<player_1_pair_selection_first<<"\n";
            cout << "\n\n Second closet dice pair to 7:  "<<player_1_pair_selection_second<<"\n";