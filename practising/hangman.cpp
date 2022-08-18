#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// void Print_Hidden_Word(string word_to_be_guessed, int length_word_to_be_guessed){
//     for (int g = 0; g < length_word_to_be_guessed; g++){
//         cout <<" _";
//     }
// }

// bool Hangman(){
//     int number_letter_guessed = 0;
//     bool guessed = false;

//     string word = "odilov";
//     int lives = 6;
//     int guesssed = 0;
//     string user_guess;
//     cout <<"\n Guess the word!\n";
//     cin >> user_guess;
//     int length_guess = user_guess.length();
//     int length_word_to_be_guessed = word.length();
//     int letter_guessed[length_word_to_be_guessed] = {0};
    
//     cout <<"\n\n\n";
//     // for (int k = 0; k < length_guess; k++){
//         for (int g = 0; g < length_word_to_be_guessed; g++){
//             if (number_letter_guessed == length_word_to_be_guessed){
//                 cout <<"\n You guessed the word!\n\n";
//                 return true;
//             }
//             if (letter_guessed[g] == 1){
//                 cout <<" "<< word_to_be_guessed[g];
//             }
//             if (guess[0] == word_to_be_guessed[g]){
//                 letter_guessed[g] = 1;
//                 guessed = true;
//                 number_letter_guessed++;
//                 cout<<" "<<word_to_be_guessed[g];
//             }
//             else if (g == length_word_to_be_guessed-1 && guessed == false){
//                 lives--;
//                 if (lives == 0){
//                     cout <<"\n You lose!!!\n\n";
//                 }
//             }
            
//         // }
//         cout <<" _";
//     }
//     return false;
// }

int main(){
    string word_to_be_guessed = "odilov";
    int lives = 6;
    string guess;
    bool guesssed_word = false;
    bool guesssed = false;
    int length_guess = guess.length();
    int length_word_to_be_guessed = word_to_be_guessed.length();
    int letter_guessed[length_word_to_be_guessed];
    int number_letter_guessed = 0;
    while (lives > 0 && guesssed_word == false){
        cout <<"\n Guess word!\n";
        cin >> guess;
        for (int g = 0; g < length_word_to_be_guessed; g++){
            if (number_letter_guessed == length_word_to_be_guessed){
                guesssed_word = true;
                cout <<"\n You guessed the word!\n\n";
            }
            if (letter_guessed[g] == 1){
                cout <<" "<< word_to_be_guessed[g];
            }
            if (letter_guessed[g] != 1){
                cout <<"_";
            }
            if (guess[0] == word_to_be_guessed[g] && letter_guessed[g] != 1){
                letter_guessed[g] = 1;
                guesssed = true;
                number_letter_guessed++;
                cout<<" "<<word_to_be_guessed[g];
            }
            else if (g == length_word_to_be_guessed-1 && guesssed == false){
                lives--;
                if (lives == 0){
                    cout <<"\n You lose!!!\n\n";
                }
            }
            
        // }
        
    }
}
}




