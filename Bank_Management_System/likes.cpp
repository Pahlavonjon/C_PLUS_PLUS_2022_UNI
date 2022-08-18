#include <iostream>
#include <string>
#include <vector>
using namespace std;

string likes(string names[]){
    int length = names->length();
  if (length > 0){
    if (length == 1){
      string result = names[0] + " likes this\n";
      return result;
    }
    else if (length == 2){
      string result = names[0] + " and " + names[1] + " likes this\n";
      return result;
    }
    else if (length == 3){
      string result = names[0] + ", " + names[1] + " and " + names[2] + " likes this\n";
      return result;
    }
    else {
      string new_length = to_string(length-2);  
      string result = names[0] + ", " + names[1] + " and " + new_length + " others" + " likes this\n";
      return result;
    }
    }
    return "no one likes this"; // Do your magic!
}

int main(void){
    string names[5] = {"Jack1","Jack2","Jack3","Jack4","Jack5",};
    string result = likes(names);
    cout << "\n\n\n The result is:\n\n "<<result<<"\n\n";
}