#include <iostream>
#include <string>
#include <iomanip>
#include "Bank.h"
#include "Client_Account.h"

using namespace std;
        
    Bank::Bank(){

    }

    Bank::Bank(string B_Name,int B_Capacity){
        Bank_Name = B_Name;
        Bank_Database_Capacity = B_Capacity;
        ALL_Bank_Clients = new Client_Account[Bank_Database_Capacity];
        Bank_Array_index = 0;
        
    }

    void Bank::Add_Client(Client_Account Current_Client){
        *(ALL_Bank_Clients+Bank_Array_index) = Current_Client;
        Bank_Array_index++;
    }

    Bank::~Bank(){
        
    }

    // void Bank::Remove_Account(string Remove_Account){
    //     for (int k = 0; k < Bank_Database_Capacity; k++){
    //         if (ALL_Bank_Clients[k].Account_Name == Remove_Account){
    //             ALL_Bank_Clients[k].Account_Balance = 0;
    //             ALL_Bank_Clients[k].Account_Name = "";
    //             ALL_Bank_Clients[k].Account_Bank_ID = 0;   
    //             ALL_Bank_Clients[k].Account_Age = 0;
    //             ALL_Bank_Clients[k].Account_DOB = "";
    //             ALL_Bank_Clients[k].Account_Pin = "";
    //         }
    //     }
    // }

