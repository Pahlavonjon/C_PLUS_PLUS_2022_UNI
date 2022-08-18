#include <iostream>
#include <string>
// solved!!! no need to return a number just print the values together
using namespace std;

int square_digits(int num) {
  int hundred_thousand = (((num%1000000)-(num%100000))/100000)*(((num%1000000)-(num%100000))/100000);
  cout <<"\n The hund thousand is: "<<hundred_thousand<<"\n";  
  int ten_thousand = (((num%100000)-(num%10000))/10000)*(((num%100000)-(num%10000))/10000);
  cout <<"\n The ten thousand is: "<<ten_thousand<<"\n"; 
  int thousand = (((num%10000)-(num%1000))/1000)*(((num%10000)-(num%1000))/1000);
  cout <<"\n The thousand is: "<<thousand<<"\n";
  int hundred = (((num%1000)-(num%100))/100)*(((num%1000)-(num%100))/100);
  cout <<"\n The hundred is: "<<hundred<<"\n";
  int tens = (((num%100)-(num%10))/10)*(((num%100)-(num%10))/10);
  cout <<"\n The tens is: "<<tens<<"\n";
  int ones = (((num%10)-(num%1))/1)*(((num%10)-(num%1))/1);
  cout <<"\n The ones is: "<<ones<<"\n";
  
  // int square_num = (hundred_thousand*100000)+(ten_thousand*10000)+(thousand*1000)+(hundred*100)+(tens*10)+(ones*1);
  cout <<"\n\n\n "<<hundred_thousand<<ten_thousand<<thousand<<hundred<<tens<<ones<<"\n\n\n";
  return 0;
}

int main(){
    int num = 457;
    square_digits(num);
}