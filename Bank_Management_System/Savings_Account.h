#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
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
class Savings_Account : public Account{
    private:
        string Savings_Account_Username;
        long long int Savings_Account_Pin;
        string Savings_Account_Type;
        bool Savings_First_Deposit;
        double Savings_Account_Balance;
        double Savings_Account_Interest_Rate;
        double Savings_Account_Amount_Withdrawn; 
        double Savings_Account_Amount_Deposited; 
    public:
        Savings_Account();
        Savings_Account(string Username,long long int Pin);
        ~Savings_Account(); 
        char* Return_Current_Time();
        bool Log_in();
        bool Log_out();
        void Set_Account();
        void Show_Balance();  
        void Show_Homepage();
        void Reset_Account();
        void Account_Terms_and_Conditions(); 
        bool Authorise_Transaction();
        bool Deposit_into_Account(); 
        bool Withdraw_from_Account(); 
        void Set_Amount_Withdrawn(double amount);
        void Set_Amount_Deposited(double amount);
        
        static void Account_Add_Interest(double *Deposit);
        double* Account_Return_Balance_Address();
        void Print_10_Lines();
        void Print_20_Lines();
        void Print_30_Lines();
        double Return_Amount_Withdrawn();
        double Return_Amount_Deposited();
        void Print_40_Lines();
        void Print_50_Lines();
        bool Set_Current_Time();
        void Clear_Terminal();
        long long int Return_Account_Pin();
        string Return_Account_Username();
};
#endif