#include "Client_Account.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

// this object must store all the assests of the client

// error codes: 1001,1002,1003

// help() must guide the user throughout the procedure

// user must be able to BPAY seperate Bank-Branch

// international Banking???

        
        Client_Account::Client_Account(){

        }

        Client_Account::Client_Account(string A_Name, int A_Age, string A_DOB){
            Account_NAME = Account_Name;
            Account_Name = A_Name;
            Account_Bank_ID = 1;
            Account_Age = A_Age;
            Account_DOB = A_DOB;
            Account_Balance = 0;
            Account_Balance_Daily_Transfer_Limit = 0;
            Account_Balance_Max_Transfer_Limit = 0;
            // Error_Code_Description[4] = {"Invalid Deposit 1001","Invalid Name 1002","Password Incorrect 900","Same Sur-Name 700"};

        }
        
        // Behaviours

        void Client_Account::Set_Pin(){
            cout <<"\n Enter new pin here: ";
            cin >> Account_Pin;
        }

        bool Client_Account::Create_Account(double ATM_Deposit){
            while (ATM_Deposit < 0){
                cout <<"\n Error 1001 . . .   Re-enter deposit: \n";
                cin >> Account_Balance;
                if (Account_Balance > 0){
                    break;
                }
            }
            Account_Balance += ATM_Deposit;
            return true;
        }

        bool Client_Account::Log_in(string Name, string Password){
            if (Name == Account_Name && Password == Account_Pin){
                cout <<"\n\n\n\n\n\n\n\n\n";
                cout <<"\n Welcome "<<Account_Name<<"!\n"; // include time!
                return true;
            }
            return false;
        }

        bool Client_Account::Delete_Account(string Termination){
            if (Termination == "y" || Termination == "Y" || Termination == "yes"){
                Account_Name = "";
                Account_Bank_ID = 0;   
                Account_Age = 0;
                Account_DOB = "";
                Account_Pin = "";
                Account_Balance = 0;
                return true;
            }
            return false;
        }

        void Client_Account::Show_My_Details(){
            // cout << setprecision(2);
            cout << "\n Your personal details are:";
            cout <<"\n Name: "<<Account_Name;
            cout <<"\n ID: "<<Account_Bank_ID;
            cout <<"\n Age: "<<Account_Age;
            cout <<"\n DOB: "<<Account_DOB;
            cout <<"\n\n Account Balance: $"<<fixed<<setprecision(2)<< Account_Balance;
            cout <<"\n\n";
            // prints all personal details
            // must print balance
        }

        void Client_Account::help(){
            cout <<"\n Error Codes and their desciption:\n";
            for (int k = 0; k < 4; k++){
                cout <<" "<<*(Error_Code_Description+k)<<"\n";
            }
            cout <<"\n";
            // print error codes and description
            // state policies
            // FAQs
            // how BPAYs work
        }

        bool Client_Account::Receive_Money(double Bpay_Amount){
            if (Bpay_Amount > 0){
                Account_Balance += Bpay_Amount;
                return true;
            }
            return false;
        }

        bool Client_Account::BPay(double Bpay_Amount, Client_Account *Repecient){
            if (Bpay_Amount > 0 && Account_Balance > 0){
                if ((Account_Balance - Bpay_Amount) > 0){
                    Account_Balance -= Bpay_Amount;
                    (*(Repecient)).Account_Balance += Bpay_Amount;
                    return true;
                }
                cout <<"\n Insufficient funds!\n";
                return false;
            }
            return false;
            
            // confirm transfer        string &Bank, string &Recepient_ID, string &Country
            // detect money laundering
            // determine whether it is possibnle to tranffer that much money according to the daily transfer limit
        }

        Client_Account* Client_Account::Return_Object_Address(){
            return this;
        }

        Client_Account::~Client_Account(){

        }

