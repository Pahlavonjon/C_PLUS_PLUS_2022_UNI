#ifndef CLIENT_ACCOUNT_H
#define CLIENT_ACCOUNT_H
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <iomanip>
#include <ctime>
#include <vector>
#include <limits>
#include <fstream>
#include "Account.h"
using namespace std;
class Client_Account : public Account{
    private:
        string Client_Account_Username;
        long long int Client_Account_Pin; 
        string Client_Account_Type;
        bool First_Deposit;
        double Client_Account_Balance; 
        double Client_Account_Amount_Withdrawn;
        double Client_Account_Amount_Deposited;
        double Client_Account_Amount_Transfer;
    public:  
        Client_Account(); 
        Client_Account(string Username,long long int Pin);
        char* Return_Current_Time();
        ~Client_Account(); 
        bool Log_in(); 
        bool Log_out();  
        void Set_Account(); 
        void Show_Balance(); 
        void Reset_Account();
        void Show_Homepage();
        void Account_Terms_and_Conditions();  
        bool Authorise_Transaction();   
        double Return_Client_Account_Balance();
        bool Deposit_into_Account(); 
        bool Withdraw_from_Account(); 
        bool Transfer_Money_into_another_Account(Client_Account* That_Account, double Money_Transfer);
        bool Deposit_Directly(double Money_beging_received);
        string Return_Account_Type();
        string Return_Account_Username();
        double Return_Amount_Transfer();
        void Set_Amount_Withdrawn(double amount);
        void Set_Amount_Deposited(double amount);
        void Set_Amount_Transfer(double amount);
        long long int Return_Account_Pin();
        double Return_Amount_Withdrawn();
        double Return_Amount_Deposited();
        bool Set_Current_Time();
        void Clear_Terminal();
        void Print_10_Lines();
        void Print_20_Lines();
        void Print_30_Lines();
        void Print_40_Lines();
        void Print_50_Lines();
        
};
#endif