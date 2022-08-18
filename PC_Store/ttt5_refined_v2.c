#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

void Case_Function_X(int *user_input_validity, int row, int column , int Case , int *user_element_selection_X, int *user_element_selection_O,int tic_tac_toe_array[5][5],int tic_tac_toe_array_current_vacancy[5][5]){                                                                     
        *user_input_validity = 0;
        if (tic_tac_toe_array_current_vacancy[row][column] == 1 && *user_element_selection_X == Case){
            printf("\n Invalid select from the numbers in the array: \n\n");
            for (int P = 0; P < 5; P++){
                for (int R = 0; R < 5; R++){
                    if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                        printf("  %c",tic_tac_toe_array[P][R]);
                    }
                    else if (tic_tac_toe_array[P][R] < 10){
                        printf("  %d",tic_tac_toe_array[P][R]);
                    }
                    else {
                        printf(" %d",tic_tac_toe_array[P][R]);
                    }
                }
                printf("\n");
            }
            scanf("%d",user_element_selection_X);
            while (*user_element_selection_X > 25 || *user_element_selection_X < 1 || *user_element_selection_X == *user_element_selection_O || *user_element_selection_X == Case){                                                                                  
            printf("\n Invalid select from the numbers in the array: \n\n");
                for (int P = 0; P < 5; P++){
                    for (int R = 0; R < 5; R++){
                        if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                            printf("  %c",tic_tac_toe_array[P][R]);
                        }
                        else if (tic_tac_toe_array[P][R] < 10){
                            printf("  %d",tic_tac_toe_array[P][R]);
                        }
                        else {
                            printf(" %d",tic_tac_toe_array[P][R]);
                        }
                    }
                    printf("\n");
                    }
                scanf("%d",user_element_selection_X);
                }
            }
        else {
        tic_tac_toe_array[row][column] = 'X';
        tic_tac_toe_array_current_vacancy[row][column] = 1;
        *user_input_validity = 1;
    }
 }

void Case_Function_O(int *user_input_validity_O,int row, int column, int Case,int *user_element_selection_X,int *user_element_selection_O,int tic_tac_toe_array[5][5],int tic_tac_toe_array_current_vacancy[5][5]){
    *user_input_validity_O = 0;
     if (tic_tac_toe_array_current_vacancy[row][column] == 1 && *user_element_selection_O == Case){
        printf("\n Invalid select from the numbers in the array: \n\n");
            for (int P = 0; P < 5; P++){
                for (int R = 0; R < 5; R++){
                    if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                        printf("  %c",tic_tac_toe_array[P][R]);
                    }
                    else if (tic_tac_toe_array[P][R] < 10){
                        printf("  %d",tic_tac_toe_array[P][R]);
                    }
                    else {
                        printf(" %d",tic_tac_toe_array[P][R]);
                    }
                }
                printf("\n");
            }
            scanf("%d",user_element_selection_O);
            while (*user_element_selection_O > 25 || *user_element_selection_O < 1 || *user_element_selection_O == *user_element_selection_X || *user_element_selection_O == Case){                                                                                  
            printf("\n Invalid select from the numbers in the array: \n\n");
                for (int P = 0; P < 5; P++){
                    for (int R = 0; R < 5; R++){
                        if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                            printf("  %c",tic_tac_toe_array[P][R]);
                        }
                        else if (tic_tac_toe_array[P][R] < 10){
                            printf("  %d",tic_tac_toe_array[P][R]);
                        }
                        else {
                            printf(" %d",tic_tac_toe_array[P][R]);
                        }
                    }
                    printf("\n");
                    }
                    scanf("%d",user_element_selection_O);
                }
            }
            else {
            tic_tac_toe_array[row][column] = 'O';
            tic_tac_toe_array_current_vacancy[row][column] = 1;
            *user_input_validity_O = 1;
    }
 }

int main(void){
    int game_over_one = 0;
    int draw_official = 0;
    int player_one_score = 0;
    int player_two_score = 0;
    int ttt_incrementor = 1;
    int tic_tac_toe_array[5][5];
    int tic_tac_toe_array_current_vacancy[5][5];
        for (int G = 0; G < 5; G++){
            for (int Q = 0; Q < 5; Q++){
                tic_tac_toe_array[G][Q] = ttt_incrementor++;
            }
        }
        printf("\n\n Welcome to tic tac toe 5x5 same as 3x3 but bigger!\n");
        int user_element_selection_X = 0;
        int user_element_selection_O = 0;

        while (game_over_one == 0){
            printf("\n Player 1 select a number in the array: \n\n");
            for (int P = 0; P < 5; P++){
                for (int R = 0; R < 5; R++){
                    if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                        printf("  %c",tic_tac_toe_array[P][R]);
                    }
                    else if (tic_tac_toe_array[P][R] < 10){
                        printf("  %d",tic_tac_toe_array[P][R]);
                    }
                    else {
                        printf(" %d",tic_tac_toe_array[P][R]);
                    }
                }
                printf("\n");
            }
        scanf("%d",&user_element_selection_X);
    
        while (user_element_selection_X > 25 || user_element_selection_X < 1 || user_element_selection_X == user_element_selection_O){                                                                                  
            printf("\n Invalid select from the numbers in the array: \n\n");
            for (int P = 0; P < 5; P++){
                for (int R = 0; R < 5; R++){
                    if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                        printf("  %c",tic_tac_toe_array[P][R]);
                    }
                    else if (tic_tac_toe_array[P][R] < 10){
                        printf("  %d",tic_tac_toe_array[P][R]);
                    }
                    else {
                        printf(" %d",tic_tac_toe_array[P][R]);
                    }
                }
                printf("\n");
            }
        scanf("%d",&user_element_selection_X);
        }

        int user_input_validity = 0;
        while (user_input_validity == 0){
            int row = -1;
            int col = -1;
            for (int k = 1; k < 26; k++){
                col++;
                if (k == 1 || k%5 == 0){
                    row++;
                    col = 0;
                }
                if (user_element_selection_X == k){
                    Case_Function_X(&user_input_validity,row,col,user_element_selection_X,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
                    if (row == 4){
                        row = 0;
                    }
                    if (col == 4){
                        col = 0;
                    }
                    break;
                }
                if (row == 4){
                    row = 0;
                }
                if (col == 4){
                    col = 0;
                }
            }
        }
    
        int draw_X = 1; // when equal to 25 the game ends in a draw
        for (int D = 0; D < 5; D++){
            for (int F = 0; F < 5; F++){
                if (// horizontal 
                    (tic_tac_toe_array[D-1][F-1] == 'X' && tic_tac_toe_array[D-1][F] == 'X' && tic_tac_toe_array[D-1][F+1] == 'X') ||
                    (tic_tac_toe_array[D][F-1] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D][F+1] == 'X') ||
                    (tic_tac_toe_array[D+1][F-1] == 'X' && tic_tac_toe_array[D+1][F] == 'X' && tic_tac_toe_array[D+1][F+1] == 'X') ||
                    // vertical
                    (tic_tac_toe_array[D-1][F-1] == 'X' && tic_tac_toe_array[D][F-1] == 'X' && tic_tac_toe_array[D+1][F-1] == 'X') ||
                    (tic_tac_toe_array[D-1][F] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D+1][F] == 'X') ||
                    (tic_tac_toe_array[D-1][F+1] == 'X' && tic_tac_toe_array[D][F+1] == 'X' && tic_tac_toe_array[D+1][F+1] == 'X') ||
                    // diagonal       
                    (tic_tac_toe_array[D-1][F-1] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D+1][F+1] == 'X') ||
                    (tic_tac_toe_array[D-1][F+1] == 'X' && tic_tac_toe_array[D][F] == 'X' && tic_tac_toe_array[D+1][F-1] == 'X')){                                                    
                    player_one_score = 1;
                    break;
                }
                else {
                    if (tic_tac_toe_array[D][F] == 'O' || tic_tac_toe_array[D][F] == 'X'){
                    draw_X++;
                    }
                }
                if (draw_X == 25){
                draw_official = 1;
                break;
                }  
            }
        }
        if (player_one_score == 1){
            break;
        }
        if (draw_official == 1){
            break;
        }
    

        
        // player 2
        printf("\n Player 2 select a number in the array: \n\n");
        for (int P = 0; P < 5; P++){
            for (int R = 0; R < 5; R++){
                if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                    printf("  %c",tic_tac_toe_array[P][R]);
                }
                else if (tic_tac_toe_array[P][R] < 10){
                    printf("  %d",tic_tac_toe_array[P][R]);
                }
                else {
                    printf(" %d",tic_tac_toe_array[P][R]);
                }
            }
            printf("\n");
        }
        scanf("%d",&user_element_selection_O);
        while (user_element_selection_O > 25 || user_element_selection_O < 1 || user_element_selection_O == user_element_selection_X){
            printf("\n Invalid select from the numbers in the array: \n\n");
            for (int P = 0; P < 5; P++){
                for (int R = 0; R < 5; R++){
                    if (tic_tac_toe_array[P][R] == 'X' || tic_tac_toe_array[P][R] == 'O'){
                        printf("  %c",tic_tac_toe_array[P][R]);
                    }
                    else if (tic_tac_toe_array[P][R] < 10){
                        printf("  %d",tic_tac_toe_array[P][R]);
                    }
                    else {
                        printf(" %d",tic_tac_toe_array[P][R]);
                    }
                }
                printf("\n");
            }
        scanf("%d",&user_element_selection_O);
        }

        int user_input_validity_O = 0;
        while (user_input_validity_O == 0){     
            int row = -1;
            int col = -1;
            for (int k = 1; k < 26; k++){
                col++;
                if (k == 1 || k%5 == 0){
                    row++;
                    col = 0;
                }
                if (user_element_selection_O == k){
                    Case_Function_O(&user_input_validity_O,row,col,user_element_selection_O,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
                    if (row == 4){
                        row = 0;
                    }
                    if (col == 4){
                        col = 0;
                    }
                    break;
                }
                if (row == 4){
                        row = 0;
                }
                if (col == 4){
                    col = 0;
                }
            }
        }

        int draw_O = 1; // when equal to 25 the game ends in a draw
        for (int D = 0; D < 5; D++){
            for (int F = 0; F < 5; F++){
                if (// horizontal 
                    (tic_tac_toe_array[D-1][F-1] == 'O' && tic_tac_toe_array[D-1][F] == 'O' && tic_tac_toe_array[D-1][F+1] == 'O') ||
                    (tic_tac_toe_array[D][F-1] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D][F+1] == 'O') ||
                    (tic_tac_toe_array[D+1][F-1] == 'O' && tic_tac_toe_array[D+1][F] == 'O' && tic_tac_toe_array[D+1][F+1] == 'O') ||
                    // vertical
                    (tic_tac_toe_array[D-1][F-1] == 'O' && tic_tac_toe_array[D][F-1] == 'O' && tic_tac_toe_array[D+1][F-1] == 'O') ||
                    (tic_tac_toe_array[D-1][F] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D+1][F] == 'O') ||
                    (tic_tac_toe_array[D-1][F+1] == 'O' && tic_tac_toe_array[D][F+1] == 'O' && tic_tac_toe_array[D+1][F+1] == 'O') ||
                    // diagonal       
                    (tic_tac_toe_array[D-1][F-1] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D+1][F+1] == 'O') ||
                    (tic_tac_toe_array[D-1][F+1] == 'O' && tic_tac_toe_array[D][F] == 'O' && tic_tac_toe_array[D+1][F-1] == 'O')){                                                    
                    player_two_score = 1;
                    
                }
                else {
                    if (tic_tac_toe_array[D][F] == 'O' || tic_tac_toe_array[D][F] == 'X'){
                    draw_O++;
                    }
                }
                if (draw_O == 25){
                draw_official = 1;
                } 
            }
        }
        if (player_two_score == 1){
             break;
        }
        if (draw_official == 1){
            break;
        }
    }

    if (player_one_score == 1){
        printf("\n\n X wins!!! \n\n");
        for (int E = 0; E < 5; E++){
            for (int V = 0; V < 5; V++){
                if (tic_tac_toe_array[E][V] == 'X' || tic_tac_toe_array[E][V] == 'O'){
                printf("  %c",tic_tac_toe_array[E][V]);
            }
            else if (tic_tac_toe_array[E][V] < 10){
                printf("  %d",tic_tac_toe_array[E][V]);
            }
            else {
                printf(" %d",tic_tac_toe_array[E][V]);
            }
            }
            printf("\n");
        }

    }
    printf("\n\n");

    if (player_two_score == 1){
        printf("\n\n O wins!!! \n\n");
        for (int E = 0; E < 5; E++){
            for (int V = 0; V < 5; V++){
                if (tic_tac_toe_array[E][V] == 'X' || tic_tac_toe_array[E][V] == 'O'){
                printf("  %c",tic_tac_toe_array[E][V]);
            }
            else if (tic_tac_toe_array[E][V] < 10){
                printf("  %d",tic_tac_toe_array[E][V]);
            }
            else {
                printf(" %d",tic_tac_toe_array[E][V]);
            }
            }
            printf("\n");
        }

    }
    printf("\n\n");
}