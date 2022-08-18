int row = -1;
int col = -1;
int length_row = 0;
for (int k = 1; k < 26; k++){
    col++;
    if (k == 0 || k%5 == 0){
        row++;
        col == 0;
    }
    switch (user_element_selection_X){
        case k:
            Case_Function_X(&user_input_validity,row,col,k,&user_element_selection_X,&user_element_selection_O,tic_tac_toe_array,tic_tac_toe_array_current_vacancy);
            if (row == 4){
                row = 0;
            }
            if (col == 4){
                col = 0;
            }
        break;
    }
}

for (int k = 0; k < 5;){
    for (int g = 1; g < 6; g++){
        switch (user_element_selection_X){
            case k+g:

        }
    }
}