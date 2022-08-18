#include <iostream>
#include <string>
#include <ctime>

using  namespace std;

class GPU{
    public:
    string name = "";
    int Price = 0;
        GPU();
        GPU(string Name, int price);
        ~GPU();
};

GPU::GPU(){
    cout <<"\n Card created!\n";
}

GPU::GPU(string Name, int price){
    name = Name;
    Price = price;
}

GPU::~GPU(){
   
    cout <<"\n card deleted at "<<"\n";

}

int main(){
    GPU RTX3070("rtx-3070",499);
    GPU* cards = new GPU[5];
    delete [] cards;
    time_t now = time(0);
    char* time_current = ctime(&now);
    cout <<"\n\n Current time is: "<<time_current<<"\n";

}