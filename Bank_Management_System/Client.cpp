#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Client.h"
#include "Client_Account.h"
using namespace std;

    Client::Client(){}
    Client::Client(string Name, int Age, int Account_Limit){ 
        this->Client_Name = Name;
        this->Client_Age = Age;
        this->Account_Limit = Account_Limit;
        All_Client_Accounts = new Client_Account[this->Account_Limit];
        All_Client_Accounts_Index = 0;
        Transaction_Times_Index = 0;
        Transaction_History_Limit = 20;
        Transaction_Times = new char*[Transaction_History_Limit];
        Now = time(0);
        Current_Time = ctime(&Now);
    }
    bool Client::Add_Client_Account(Client_Account New_Client_Account){
        if (All_Client_Accounts_Index < Account_Limit){
            All_Client_Accounts[All_Client_Accounts_Index] = New_Client_Account;
            All_Client_Accounts_Index++;
            return true;
        }
        return false;
    }
    Client_Account* Client::Return_All_Client_Accounts_Array(){return this->All_Client_Accounts;}
    int Client::Return_Number_of_Client_Accounts(){return this->All_Client_Accounts_Index;}
    string Client::Return_Client_Name(){return this->Client_Name;}
    bool Client::Delete_Client_Account(string Client_Account_Type){
        for (int k = 0; k < this->Account_Limit; k++){
            if (Client_Account_Type == All_Client_Accounts[k].Return_Client_Account_Type()){
                All_Client_Accounts[k].~Client_Account();
                return true;
            }
        }
        return false;
    }
    char* Client::Get_Current_Time(){
        time_t Now = time(0);
        char* Current_Time = ctime(&Now);
        return Current_Time;
    }