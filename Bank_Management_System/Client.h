#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Client_Account.h"
using namespace std;
class Client{
    private:
        string Client_Name;
        int Client_Age;
        Client_Account* All_Client_Accounts;
        int All_Client_Accounts_Index;
        int Account_Limit;  // this will be passed from the bank when the bank is created
        // double Client_Account_Money;
        string Client_Email[30]; // client inbox
        time_t Now;
        char* Current_Time;
        int Transaction_History_Limit;
        char** Transaction_Times;
        int Transaction_Times_Index;
    public:
        Client();
        Client(string Name, int Age, int Account_Limit);
        bool Add_Client_Account(Client_Account New_Client_Account);
        int Return_Number_of_Client_Accounts();
        string Return_Client_Name();
        bool Delete_Client_Account(string Client_Account_Type);
        Client_Account* Return_All_Client_Accounts_Array();
        char* Get_Current_Time();
};
#endif