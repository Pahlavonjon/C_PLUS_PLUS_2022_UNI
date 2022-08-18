#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <unistd.h>
#include <thread>
#include <mutex> // this is for synchronisation of the threads
using namespace std;
void function_test(){ // now pass the local variable address from the main function
    time_t Now = time(0);
    char* Current_Time = ctime(&Now);
    cout <<"\n CAAAAKEEEEE!       at "<< Current_Time << " \n\n";
    int **** **** **** **** Pointer_Array;
    int * Pointer_ARRAY[4][4];
}


mutex Mutex;

void shared_print(string the_messege, double deposit){
    lock_guard<mutex>guard(Mutex);
    // Mutex.lock(); best to avoid, might get locked if out of scope or exceptions
    cout << the_messege << " "<< deposit << "\n\n";
    //Mutex.unlock();

}




void function_1(long long int &deposit, bool &stop){
    while (stop == false && deposit < 2048){
        this_thread::sleep_for(chrono::milliseconds(250));
        // cout <<"\n The money is now: $"<<(deposit)<<"\n";
        shared_print("function 1",deposit);
    }
    //cout <<"this thread id is: " <<this_thread::get_id()<<"\n";
}
void function_2(long long int &deposit, bool &stop){
    while (stop == false){
        this_thread::sleep_for(chrono::milliseconds(175)); 
        deposit = (deposit)*(2);
        // shared_print("function 2",deposit);
    }
}
void function_3(bool *stop){
    bool process_stopped = false;
    while (*stop == false && process_stopped == false){
        while (*stop == true){
            cout <<"\n The process is stopped\n\n";
            process_stopped = true;
            break;
        }
    }
}
void function_4(long long int *deposit, bool *stop){
    while (*stop == false){
        this_thread::sleep_for(chrono::milliseconds(500)); 
        cout <<"\n MAIN DEPOSIT $"<<*deposit<<"\n\n";
        cout <<" Number of threads this computer can hande: " <<thread::hardware_concurrency()<<"\n\n\n";
        /* chrono::steady_clock::time_point Time_Point = */ cout << "5 minutes late is: "<<chrono::steady_clock::now() + chrono::minutes(5)<<"\n\n\n"; // chrono::steady_clock::now() + chrono::minutes(5);
    }
}

void function_5(long long int &deposit, bool &stop){
    while (stop == false){
        this_thread::sleep_for(chrono::milliseconds(175)); 
        cout << "\n      The deposit is now $"<<deposit<<"\n";
    }
}

void function_6(long long int &deposit, bool &stop){
    while (stop == false){
        this_thread::sleep_for(chrono::milliseconds(175));
        deposit = deposit*2;
    }
}

void function_7(long long int &deposit, bool &stop){
    while (stop == false){
        this_thread::sleep_for(chrono::milliseconds(175));
        cout <<"\n deposit is $"<<deposit<<"\n";
    }
}

void function_8(long long int &deposit, bool &stop){
    while (stop == false){
        this_thread::sleep_for(chrono::milliseconds(2000));
        deposit = 1;
    }
}

void second_main(){
    long long int the_deposit = 0;
    bool stop = false;
    cout <<"\n Enter cash deposit: $";
    cin >> the_deposit;
    // thread thread_1(function_1,(ref(the_deposit)),(ref(stop)));
    thread thread_2(function_2,(ref(the_deposit)),(ref(stop)));
    // thread thread_3(function_3,(&stop));
    // thread thread_4(function_4,(ref(the_deposit)));
    thread thread_5(function_5,(ref(the_deposit)),(ref(stop)));
    thread thread_6(function_6,(ref(the_deposit)),(ref(stop)));
    thread thread_7(function_7,(ref(the_deposit)),(ref(stop)));
    //thread thread_8(function_8,(ref(the_deposit)),(ref(stop)));
    //thread thread_9(function_9,(ref(the_deposit)),(ref(stop)));
    while (stop == false){
        this_thread::sleep_for(chrono::milliseconds(4000));
        the_deposit = 1;
        cout <<"\n\n The main has reset the deposit!!!\n\n";
    }
    //chrono::steady_clock::time_point Time_Point = chrono::steady_clock::now() + chrono::minutes(5);
    

    thread_2.join(); // when to join the thread with the main?
    // stop = true;
    // thread_3.join();
    // thread_4.join();
    thread_5.join();
    thread_6.join();
    thread_7.join();
    //thread_8.join();

    // stop = true; // this does not work, the boolean must change before the thread is joined
    // thread_1.join();
    cout <<" the main cout \n\n\n";
    // thread_3.join();
    // thread_2.join();
    // thread_1.join();
}

class Account{
    private:
        string name;
        double account_balance;
    public:
        Account(){}
        Account(string name, double deposit){
            this->name = name;
            this->account_balance = deposit;
        }
        static void Increase_Deposit(double *the_received_account_balance,double amount){
            bool stop = false;
            while (stop == false){
                this_thread::sleep_for(chrono::milliseconds(250));
                *the_received_account_balance += amount;
            }
        }
        double* Return_Account_Balance_Address(){return &account_balance;}
        void Print_Account_Variables(){
            cout <<"\n\n The account name is: "<<this->name;
            cout <<"\n\n The account balance is: $"<<this->account_balance<<"\n\n";
        }
};

void third_main(){
    bool test = false;
    static Account MyAccount("Pahlavon",500);
    // MyAccount.Increase_Deposit(MyAccount.Return_Account_Balance_Address(),500);
    thread test_thread_1(MyAccount.Increase_Deposit,MyAccount.Return_Account_Balance_Address(),500);
    while (test == false){
        this_thread::sleep_for(chrono::milliseconds(250));
        MyAccount.Print_Account_Variables();
    }
    test_thread_1.join();
}

int main(){
    long long int deposit = 1200;
    bool stop = false;
    function_4(&deposit,&stop);
}