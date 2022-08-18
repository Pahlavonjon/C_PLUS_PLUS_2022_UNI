#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <iomanip>
#include <ctime>
#include "time.h"
#include <vector>
#include <limits>
#include <fstream>
#include "Client_Account.h"
#include "Account.h"
using namespace std;
        Client_Account::Client_Account(){
            Client_Account_Username = "";
            Client_Account_Pin = 0;
            Client_Account_Balance = 0;
            Client_Account_Type = "Client_Account";
            First_Deposit = true;
        }
        Client_Account::Client_Account(string Username,long long int Pin){
            this->Client_Account_Username = Username;
            this->Client_Account_Pin = Pin;
            Client_Account_Balance = 0;
            Client_Account_Type = "Client_Account";
            First_Deposit = true;
        } 
        Client_Account::~Client_Account(){} 
        bool Client_Account::Log_in(){
        string Client_Account_log_in_username = "";
        int Client_Account_log_in_pin = 0;
        cout <<"\n\n Enter your Username \n ";
            cin >> Client_Account_log_in_username;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        cout <<"\n\n Enter your Pin\n ";
            cin >> Client_Account_log_in_pin;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            while (Client_Account_log_in_pin != Return_Account_Pin() || Client_Account_log_in_username != Return_Account_Username()){
                cout <<"\n\n Invalid Username or Pin\n";
                cout <<"\n Try again . . .";
                    cout <<"\n\n Enter your username \n ";
                        cin >> Client_Account_log_in_username;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    cout <<"\n\n Enter your pin\n ";
                        cin >> Client_Account_log_in_pin;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                }
                return true;
        }
        bool Client_Account::Log_out(){
            return true;
        }
        void Client_Account::Set_Account(){ 
            long long int temporary_pin = 0;
            cout << "\n\n Enter account Username: \n ";
            cin >> this->Client_Account_Username;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            cout << "\n Enter account Pin: \n ";
            cin >> this->Client_Account_Pin;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            while (temporary_pin != Client_Account_Pin){
                cout << "\n Confirm account Pin: \n ";
                cin >> temporary_pin;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                if (temporary_pin == Client_Account_Pin){
                    break;
                }
            }
        }
        void Client_Account::Reset_Account(){
            Print_30_Lines();
            cout << " You are now re-setting your account enter valid inputs . . .\n\n";
            Set_Account();
        }
        void Client_Account::Show_Balance(){
            cout <<"\n\n The account balance is now $"<<fixed<<setprecision(2)<<this->Client_Account_Balance<<"\n\n";
        }
        void Client_Account::Show_Homepage(){ 
            cout <<"\n\n\n\n\n\n\n\n\n\n";
            cout <<"\n                                Regular Account                  \n";
            cout <<"    Welcome "<<this->Client_Account_Username<<"\n\n";
            cout <<"\n\n Your Balance is: $"<<this->Client_Account_Balance<<"\n\n\n\n\n";
            cout <<" Actions:                                  logout\n\n";
            cout <<"  \n\n"; 
            cout <<"  BPay\n\n";
            cout <<"  Withdraw\n\n";
            cout <<"  Deposit\n\n";
            cout <<"  Accounts\n\n\n\n";
            cout <<" Reset - account\n";
            Print_10_Lines();
        } 
        void Client_Account::Account_Terms_and_Conditions(){
            cout <<"\n This is a regular account.\n";
            cout <<" Withdrawals are made at any time, deposit threshold is > $0 and money transfers are allowed. \n";
            cout <<" There is not interest added to this account.\n";
        }
        bool Client_Account::Authorise_Transaction(){
            string user_response = "";
            int Authorisation_pin = 0;
            cout << "\n\n Enter pin: \n ";
            cin >> Authorisation_pin;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
                if (Authorisation_pin == Return_Account_Pin()){
                    return true;
                }
            cout <<"\n Incorrect pin, want to try again? y/n \n";
            cin >> user_response;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
                if (user_response == "y" || user_response == "yes" || user_response == "Yes" || user_response == "Y" || user_response == "ya"){
                    cout << "\n\n Enter pin: \n ";
                    cin >> Authorisation_pin;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                        if (Authorisation_pin == Return_Account_Pin()){
                            return true;
                        }
                    }
                    return false;
        }
        bool Client_Account::Deposit_into_Account(){ 
            bool Authentication = Authorise_Transaction();
            if (Authentication == true){
                if (First_Deposit == true){
                    double Client_Account_First_Deposit = 0;
                    cout <<"\n\n This Account has no funds, enter a deposit\n ";
                    cin >> Client_Account_First_Deposit;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (Client_Account_First_Deposit <= 0 || Client_Account_First_Deposit > 50000){
                        while (Client_Account_First_Deposit <= 0){
                            cout << "\n\n Invalid amount . . . try again\n ";
                            cin >> Client_Account_First_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                        while (Client_Account_First_Deposit > 50000){
                            cout << "\n\n This is your first deposit and it can not be > $50,000 . . . try again\n ";
                            cin >> Client_Account_First_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                    }
                    this->Client_Account_Balance += Client_Account_First_Deposit;
                    Set_Amount_Deposited(Client_Account_First_Deposit);
                    First_Deposit = false;
                    return true;
                }
                else if (First_Deposit == false){
                    double Client_Account_Deposit = 0;
                    cout <<"\n\n Enter a deposit\n ";
                    cin >> Client_Account_Deposit;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (Client_Account_Deposit < 0){
                        while (Client_Account_Deposit < 0){
                            cout << "\n\n Invalid amount . . . try again\n ";
                            cin >> Client_Account_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                    }
                    this->Client_Account_Balance += Client_Account_Deposit;
                    Set_Amount_Deposited(Client_Account_Deposit);
                    First_Deposit = false;
                    return true;
                }
            }
            return false;
        }
        bool Client_Account::Withdraw_from_Account(){ 
            bool Authentication = Authorise_Transaction();
            if (Authentication == true){
                double money_to_be_withdrawed = 0;
                cout <<"\n Enter amount to withdraw:  $";
                cin >> money_to_be_withdrawed;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            
                    while ((this->Client_Account_Balance - money_to_be_withdrawed) < 0){
                        cout << " Not enough funds . . . try again  $";
                        cin >> money_to_be_withdrawed;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                    this->Client_Account_Amount_Withdrawn = money_to_be_withdrawed;
                    this->Client_Account_Balance -= money_to_be_withdrawed;
                    Set_Amount_Withdrawn(money_to_be_withdrawed);
                return true;
            }
            return false;
        }
        bool Client_Account::Transfer_Money_into_another_Account(Client_Account* That_Account, double Money_Transfer){
            if (Money_Transfer > 0 && ((Client_Account_Balance - Money_Transfer) >= 0)){
                That_Account->Deposit_Directly(Money_Transfer);
                Client_Account_Balance -= Money_Transfer;
                Set_Amount_Transfer(Money_Transfer);
                return true;
            }
            return false;
        }
        bool Client_Account::Deposit_Directly(double Money_beging_received){
            if (Money_beging_received > 0){
                Client_Account_Balance += Money_beging_received;
                return true;
            }
            return false;
        }
        double Client_Account::Return_Client_Account_Balance(){return this->Client_Account_Balance;}
        string Client_Account::Return_Account_Username(){return this->Client_Account_Username;}
        long long int Client_Account::Return_Account_Pin(){return this->Client_Account_Pin;}
        double Client_Account::Return_Amount_Withdrawn(){
            return this->Client_Account_Amount_Withdrawn;
        }
        double Client_Account::Return_Amount_Deposited(){
            return this->Client_Account_Amount_Deposited;
        }
        double Client_Account::Return_Amount_Transfer(){
            return this->Client_Account_Amount_Transfer;
        }
        void Client_Account::Set_Amount_Withdrawn(double amount){
            this->Client_Account_Amount_Withdrawn = amount;
        }
        void Client_Account::Set_Amount_Deposited(double amount){
            this->Client_Account_Amount_Deposited = amount;
        }
        void Client_Account::Set_Amount_Transfer(double amount){
            this->Client_Account_Amount_Transfer = amount;
        }
        string Client_Account::Return_Account_Type(){
            return this->Client_Account_Type;
        }
        void Client_Account::Print_10_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n";
        }
        void Client_Account::Print_20_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Client_Account::Print_30_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Client_Account::Print_40_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Client_Account::Print_50_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
         void Client_Account::Clear_Terminal(){
            Print_50_Lines();
        }
        char* Client_Account::Return_Current_Time(){
            time_t now = time(0);
            char* dt = ctime(&now);
            return dt;
        }