#ifndef TERM_ACCOUNT_H
#define TERM_ACCOUNT_H
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
class Term_Account : public Account{
    private:
        string Term_Account_Username;
        long long int Term_Account_Pin;
        string Term_Account_Type;
        bool Term_First_Deposit;
        double Term_Account_Balance;
        double Term_Account_Interest_Rate;
        bool Term_Account_Agreement;
        bool Term_Account_Lock;
        int Term_Account_Lock_Length;
        int Term_Account_Time_Until_Unlock;
        double Term_Account_Amount_Withdrawn;
        double Term_Account_Amount_Deposited;
    public:
        Term_Account();
        Term_Account(string Username,long long int Pin);
        ~Term_Account(); 
        bool Log_in();
        char* Return_Current_Time();
        bool Log_out();
        void Set_Account(); 
        void Show_Balance();
        void Show_Homepage(); 
        void Reset_Account();
        void Print_10_Lines();
        void Set_Amount_Withdrawn(double amount);
        void Set_Amount_Deposited(double amount);
        void Print_20_Lines();
        void Print_30_Lines();
        void make_thread();
        double Return_Amount_Withdrawn();
        double Return_Amount_Deposited();
        void Print_40_Lines();
        void Print_50_Lines();
        void Clear_Terminal();
        bool Set_Current_Time();
        bool Is_this_Account_locked();
        bool Deposit_into_Account(); 
        bool Authorise_Transaction();
        int Term_Account_Return_Time_Until_Unlock();
        bool Withdraw_from_Account(); 
        bool Term_Account_ReActivate();
        void Account_Terms_and_Conditions();
        static void Term_Account_Add_Interest(double *Term_Deposit, bool *Term_Account_Lock, int Term_Account_Lock_Length , int *Time_Left );
        double* Term_Account_Return_Balance_Address();
        double Term_Account_Return_Balance();
        void Show_When_Account_Unlocks();
        bool* Term_Account_Return_Account_Lock_Address();
        int Term_Account_Return_Lock_Length();
        int* Term_Account_Return_Time_Until_Unlock_Address();
        long long int Return_Account_Pin();
        string Return_Account_Username();
};
#endif