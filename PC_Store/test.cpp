#include <iostream>
#include <string>

using namespace std;

int main(){
    int arraY[4][4];
    int increase = 1;
    cout <<"\n\n";
    // for (int k = 0; k < 4; k++){
    //     for (int h = 0; h < 4; h++){
    //         for (int g = 0; g < 1; g++){
    //             arraY[k][g] = increase;
    //             cout <<" "<<arraY[k][g];
    //             increase++;
    //         }
            
    //     }
    //     cout <<"\n";
    // }
    // cout <<"\n\n";
    int incrementor = 0;
    for (int f = 0; f < 4; f++){
        for (int h = 0; h < 4; h++){
            for (int g = incrementor; g < incrementor+1; g++){
                arraY[h][g] = increase;
                cout <<" "<<arraY[h][g];
                increase++;
            }
        }
        incrementor++;
    cout <<"\n";
    }
    cout<<"\n";
    cout<<"\n";
    for (int g = 0; g < 4; g ++){
        for (int j = 0; j < 4; j++){
            cout<<" "<<arraY[g][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"\n";

    for (int g = 0; g < 4; g ++){
        for (int j = 0; j < 4; j++){
            arraY[g][j] = 0;
        }
    }

    arraY[1][3] = 4;
    arraY[2][3] = 4;
    arraY[3][3] = 16;

    cout<<"\n";
    for (int g = 0; g < 4; g ++){
        for (int j = 0; j < 4; j++){
            cout<<" "<<arraY[g][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
    int incrementor_two = 0;
    int incrementor_three = 0;
    for (int f = 0; f < 4; f++){
        for (int h = 0; h < 4; h++){
            for (int g = incrementor_two; g < incrementor_two+1; g++){
                if (arraY[h][g] != 0){
                    if (arraY[h][g] == arraY[h+1][g]){
                        bool row_addition_complete = false;
                        for (int r = 0; r < 4; r++){
                            for (int row = 0; row < 4; row++){
                                for (int col = incrementor_three; col < incrementor_three+1; col++){
                                    if (arraY[row][col] == 0 && row_addition_complete == false){
                                        arraY[row][col] = arraY[h][g] + arraY[h+1][g];
                                        arraY[h+1][g] = 0;
                                        row_addition_complete = true;
                                    }
                                    else if (arraY[row][col] == arraY[h][g] && row_addition_complete == false){
                                        arraY[row][col] = arraY[h][g] + arraY[h+1][g];
                                        arraY[h+1][g] = 0;
                                        row_addition_complete = true;
                                    }
                                }
                            }
                            incrementor_three++;
                        }
                    }
                    else {
                        bool row_addition_complete = false;
                        for (int r = 0; r < 4; r++){
                            for (int row = 0; row < 4; row++){
                                for (int col = incrementor_three; col < incrementor_three+1; col++){
                                    if (arraY[row][col] == 0 && row_addition_complete == false){
                                        arraY[row][col] = arraY[h][g];
                                        arraY[h][g] = 0;
                                        row_addition_complete = true;
                                    }
                                    else if (arraY[row][col] == arraY[h][g] && row_addition_complete == false){
                                        arraY[row][col] = arraY[h][g];
                                        arraY[h][g] = 0;
                                        row_addition_complete = true;
                                    }
                                }
                            }
                            incrementor_three++;
                        }
                    }
                }
            }
        }
        incrementor_two++;
    }

    cout<<"\n\n\n";
    for (int g = 0; g < 4; g ++){
        for (int j = 0; j < 4; j++){
            cout<<" "<<arraY[g][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
}