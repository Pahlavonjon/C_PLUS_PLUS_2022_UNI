#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

// this object must store all the assests of the client

class Client_Account{
    private:
        
        int Account_Bank_ID; // the account number   
        int Account_Age;
        string Account_DOB;
        string Account_Pin;
        string Account_NAME;
        // int Error_Codes[] = {1001,1002,1003,1004,1005,1006,900,800,700};
        string Error_Code_Description[4];
        // string ***Account_Passwords;
        // string Bank-Branch 
        double Account_Balance;
        
        double Account_Balance_Daily_Transfer_Limit;
        double Account_Balance_Max_Transfer_Limit ;
    public:
        string Account_Name;
        
        ~Client_Account();
        Client_Account();
        Client_Account(string A_Name, int A_Age, string A_DOB);
        void Set_Pin();
        bool Create_Account(double ATM_Deposit);
        bool Log_in(string Name, string Password);
        bool Delete_Account(string Termination);
        void Show_My_Details();
        void help();
        bool Receive_Money(double Bpay_Amount);
        bool BPay(double Bpay_Amount, Client_Account *Repecient);
        Client_Account* Return_Object_Address();
};
#endif