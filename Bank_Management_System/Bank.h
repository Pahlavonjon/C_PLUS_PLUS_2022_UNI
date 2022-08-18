#ifndef BANK_H
#define BANK_H
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
#include "Client_Account.h"
#include "Savings_Account.h"
#include "Term_Account.h"
using namespace std;
class Bank{
    private:
        string Bank_Name;
        int Total_Account_Limit;
        int Total_Client_Accounts_Currently;
        int Total_Savings_Accounts_Currently;
        int Total_Term_Accounts_Currently;

        int Client_Accounts_index;
        int Savings_Accounts_index;
        int Term_Accounts_index;

        Client_Account * Client_Account_Array;
        Savings_Account * Savings_Account_Array;
        Term_Account * Term_Account_Array;
    public:
        Bank();
        Bank(string Name, int Total_Account_Limit);
        // bool Add_Client_Account(Client_Account &Any_Account);
        // bool Add_Savings_Account(Savings_Account &Any_Account);
        // bool Add_Term_Account(Term_Account &Any_Account);
        void Print_All_Accounts();
        int Return_Number_of_Accounts();
        int Return_All_Account_Limit();
        int Return_Account_Limit_Type();
        string Return_Bank_Name();
        Bank* Return_Bank_Address();
        ~Bank();
};
#endif