#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
class Account{
    public:
        static void Increase_Balance(double *Balance){};
        static void Show_Balance(double *Balance){};
};
class Term_Account : public Account{
    public:
        static void Increase_Balance(double *Balance){
            bool stop_thread = false;
            while (stop_thread == false){
                this_thread::sleep_for(chrono::milliseconds(250));
                *Balance = (*Balance)*(1.05);
            }
        }
        static void Show_Balance(double *Balance){
            bool stop_thread = false;
            while (stop_thread == false){
                this_thread::sleep_for(chrono::milliseconds(250));
                cout << "\n The balance is now: $" << *Balance << "\n\n";
            }
        }
};
// this is not the polymorphism that the tutors want, they prefer the dynamic binding of functions,nbvofx   p hence runtime polymorphism is required
int main(){
    double Money = 500;
    Account* my_Account = new Term_Account;
    
    thread thread_1(Term_Account::Increase_Balance,&Money);
    thread thread_2(Term_Account::Show_Balance,&Money);
    
    thread_1.detach();
    thread_2.join();
    
    return 0;
}