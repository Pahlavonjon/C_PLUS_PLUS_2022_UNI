// #include <cassert> 
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
#include "Bank.h"
using namespace std;
        Bank::Bank(){
            this->Bank_Name = "";
            this->Total_Client_Accounts_Currently = 0;
            this->Total_Savings_Accounts_Currently = 0;
            this->Total_Term_Accounts_Currently = 0;
            this->Client_Accounts_index = 0;
            this->Savings_Accounts_index = 0;
            this->Term_Accounts_index = 0;
            this->Total_Account_Limit = 5;
            this->Client_Account_Array = new Client_Account[Total_Account_Limit];
            this->Savings_Account_Array = new Savings_Account[Total_Account_Limit];
            this->Term_Account_Array = new Term_Account[Total_Account_Limit];
        }
        Bank::Bank(string Name, int Total_Account_Limit){
            this->Bank_Name = Name;
            this->Total_Client_Accounts_Currently = 0;
            this->Total_Savings_Accounts_Currently = 0;
            this->Total_Term_Accounts_Currently = 0;
            this->Client_Accounts_index = 0;
            this->Savings_Accounts_index = 0;
            this->Term_Accounts_index = 0;
            this->Total_Account_Limit = 5;
            this->Client_Account_Array = new Client_Account[Total_Account_Limit];
            this->Savings_Account_Array = new Savings_Account[Total_Account_Limit];
            this->Term_Account_Array = new Term_Account[Total_Account_Limit];
            
        }
        // bool Bank::Add_Client_Account(Client_Account &Any_Account){
        //     if (Total_Client_Accounts_Currently <= Total_Account_Limit){
        //         Client_Account_Array[Client_Accounts_index] = Any_Account;
        //         Client_Accounts_index++;
        //         Total_Client_Accounts_Currently++;
        //         return true;
        //     }
        //     return false;
        // }
        // bool Bank::Add_Savings_Account(Savings_Account &Any_Account){
        //     if (Total_Savings_Accounts_Currently <= Total_Account_Limit){
        //         Savings_Account_Array[Savings_Accounts_index] = Any_Account;
        //         Savings_Accounts_index++;
        //         Total_Savings_Accounts_Currently++;
        //         return true;
        //     }
        //     return false;
        // }
        // bool Bank::Add_Term_Account(Term_Account &Any_Account){
        //     if (Total_Term_Accounts_Currently <= Total_Account_Limit){
        //         Term_Account_Array[Term_Accounts_index] = Any_Account;
        //         Term_Accounts_index++;
        //         Total_Term_Accounts_Currently++;
        //         return true;
        //     }
        //     return false;
        // }
        // void Bank::Print_All_Accounts(){
        //     cout << "\n\n The people in this bank are:\n\n";
        //     for (int k = 0; k < Total_Client_Accounts_Currently; k++){
        //         cout << "\n  " << Client_Account_Array[k].Return_Account_Username();
        //     }
        //     for (int k = 0; k < Total_Savings_Accounts_Currently; k++){
        //         cout << "\n  " << Savings_Account_Array[k].Return_Account_Username();
        //     }
        //     for (int k = 0; k < Total_Term_Accounts_Currently; k++){
        //         cout << "\n  " << Term_Account_Array[k].Return_Account_Username();
        //     }
        //     cout << "\n\n\n";
        // }
        // int Bank::Return_Number_of_Accounts() { return this->Total_Accounts_Currently; }
        // int Bank::Return_Account_Limit_Type() { return this->Account_Type_Limit; }
        // int Bank::Return_All_Account_Limit() { return this->Total_Account_Limit; }
        string Bank::Return_Bank_Name() { return this->Bank_Name; }
        Bank* Bank::Return_Bank_Address() { return this; }
        Bank::~Bank() {}