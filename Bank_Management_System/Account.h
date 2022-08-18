#ifndef ACCOUNT_H
#define ACCOUNT_H
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
using namespace std;
class Account{
    public:
        Account(){}
        virtual ~Account(){}
        virtual bool Log_in() = 0;
        virtual bool Log_out() = 0;
        virtual void Set_Account() = 0;
        virtual void Show_Balance() = 0;
        virtual void Show_Homepage() = 0;
        virtual void Account_Terms_and_Conditions() = 0;
        virtual bool Authorise_Transaction() = 0;
        virtual bool Deposit_into_Account() = 0;
        virtual bool Withdraw_from_Account() = 0; 
        virtual void Reset_Account() = 0;
        virtual void Clear_Terminal() = 0;
        virtual char* Return_Current_Time() = 0;
        virtual string Return_Account_Username() = 0;
        virtual long long int Return_Account_Pin() = 0;
        virtual double Return_Amount_Withdrawn() = 0;
        virtual double Return_Amount_Deposited() = 0;
        virtual void Set_Amount_Withdrawn(double amount) = 0;
        virtual void Set_Amount_Deposited(double amount) = 0;
};
#endif