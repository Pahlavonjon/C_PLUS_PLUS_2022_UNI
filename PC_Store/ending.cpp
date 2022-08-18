#include <iostream>
#include <string>

// using namespace std;
// bool solution(char str[],char ending[]) {
//   int matched_letter = 0;
// //   int second_length = ending.length();
// //   cout <<"\n The second length is: "<<second_length;
// //   int first_length = str.length();
// //   cout <<"\n The first length is: "<<first_length;
// //   int difference = first_length - second_length;
// //   cout <<"\n The difference is: "<<difference<<"\n";
//   int incrementor = 0;
  
//   for (int g = 5; g < 9; g++){
//         if (str[g] == ending[incrementor]){
//         matched_letter++;
//         cout<<"\n The letter matched "<< str[g]<<" with "<< ending[incrementor]<<" \n";
//             if (matched_letter == 4){
//                 cout <<"\n TRUE\n";
//                 return true;
//             }
//         }
//         incrementor++;
//     }
//   return false;
// }

using namespace std;

bool solution(string const &str,string const &ending) {
  int matched_letter = 0;
  int second_length = ending.length();
//   cout <<"\n The length of second is: "<<second_length<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
  int first_length = str.length();
  int difference = first_length - second_length;
  int incrementor = 0;
  if (second_length == 0){
      return true;
    }
  for (int g = difference; g < first_length; g++){
    if (second_length == 0){
      return true;
    }
    if (str[g] == ending[incrementor]){
      matched_letter++;
        if (matched_letter == second_length){
          return true;
        }
      }
    incrementor++;
    }
  return false;
}

int main(){
    // char input_1[9] = {'a','s','d','f','a','y','u','i','o'};
    // char input_2[4] = {'y','u','i','o'};
    string input_1 = "asdfayuio";
    string input_2 = "fayuio";
    cout <<"\n The result is: "<<solution(input_1,input_2)<<"\n\n";
}