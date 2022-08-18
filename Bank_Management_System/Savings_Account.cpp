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
#include "Savings_Account.h"
#include "Account.h"
using namespace std;
        Savings_Account::Savings_Account(){
            Savings_Account_Username = "";
            Savings_Account_Pin = 0;
            Savings_Account_Interest_Rate = 1.005; 
            Savings_Account_Balance = 0;
            Savings_Account_Type = "Savings_Account";
            Savings_First_Deposit = true;
        }
        Savings_Account::Savings_Account(string Username,long long int Pin){
            this->Savings_Account_Username = Username;
            this->Savings_Account_Pin = Pin;
            Savings_Account_Interest_Rate = 1.005; 
            Savings_Account_Balance = 0;
            Savings_Account_Type = "Savings_Account";
            Savings_First_Deposit = true;
        }
        Savings_Account::~Savings_Account(){} 
        bool Savings_Account::Log_in(){
        string Savings_Account_log_in_username = "";
        int Savings_Account_log_in_pin = 0;
        cout <<"\n\n Enter your Username \n ";
            cin >> Savings_Account_log_in_username;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        cout <<"\n\n Enter your Pin\n ";
            cin >> Savings_Account_log_in_pin;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            while (Savings_Account_log_in_pin != Return_Account_Pin() || Savings_Account_log_in_username != Return_Account_Username()){
                cout <<"\n\n Invalid Username or Pin\n ";
                cout <<"\n Try again . . .";
                    cout <<"\n\n Enter your username \n ";
                        cin >> Savings_Account_log_in_username;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    cout <<"\n\n Enter your pin\n ";
                        cin >> Savings_Account_log_in_pin;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                }
                return true;
        }
        bool Savings_Account::Log_out(){
            return true;
        }
        void Savings_Account::Set_Account(){
            long long int temporary_pin = 0;
            cout << "\n\n Enter account Username: \n ";
            cin >> this->Savings_Account_Username;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            cout << "\n Enter account Pin: \n ";
            cin >> this->Savings_Account_Pin;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
                while (temporary_pin != Savings_Account_Pin){
                    cout << "\n Confirm account Pin: \n ";
                    cin >> temporary_pin;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    if (temporary_pin == Savings_Account_Pin){
                        break;
                    }
                }
        }
        void Savings_Account::Reset_Account(){
            Print_30_Lines();
            cout << " You are now re-setting your account enter valid inputs . . .\n\n";
            Set_Account();
        }
        void Savings_Account::Show_Balance(){
            cout <<"\n\n The savings balance is now $"<<fixed<<setprecision(2)<<this->Savings_Account_Balance<<"\n\n";
        }
        void Savings_Account::Show_Homepage(){
            cout <<"\n\n\n\n\n\n\n\n\n\n";
            cout <<"\n                                      Savings Account            \n";
            cout <<"    Welcome "<<this->Savings_Account_Username<<"\n\n";
            cout <<"\n\n Your Balance is: $"<<fixed<<setprecision(2)<<this->Savings_Account_Balance<<"\n\n\n\n\n";
            cout <<" Actions:                                  logout\n\n";
            cout <<"  Withdraw\n\n"; 
            cout <<"  Deposit\n\n"; 
            cout <<" Reset - account\n";
            Print_10_Lines();
        }
        void Savings_Account::Account_Terms_and_Conditions(){
            cout <<"\n This is a type of client account and is a savings account.\n";
            cout <<" Savings account requires the deposit to be > $1,000 immediately upon creation. \n";
            cout <<" Interest is added constanstly over a period of time.\n";
            cout <<" Account balance can never be < $50\n\n";
        }
        bool Savings_Account::Authorise_Transaction(){
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
            cout <<"\n Incorrect pin, want to try again? y/n \n ";
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
        bool Savings_Account::Deposit_into_Account(){
            bool Authentication = Authorise_Transaction();
            if (Authentication == true){
                if (Savings_First_Deposit == true){ 
                    double Savings_Account_First_Deposit = 0;
                    cout <<"\n\n This Savings Account has no funds, you must enter a deposit above $1,000\n ";
                    cin >> Savings_Account_First_Deposit; 
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (Savings_Account_First_Deposit <= 1000 || Savings_Account_First_Deposit > 500000){
                        while (Savings_Account_First_Deposit <= 1000){
                            cout << "\n\n Invalid amount . . . try again\n";
                            cin >> Savings_Account_First_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                        while (Savings_Account_First_Deposit > 500000){
                            cout << "\n\n This is your first deposit and it can not be > $500,000 . . . try again\n ";
                            cin >> Savings_Account_First_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                    }
                    this->Savings_Account_Balance += Savings_Account_First_Deposit;
                    Set_Amount_Deposited(Savings_Account_First_Deposit);
                    Savings_First_Deposit = false;
                    return true;
                }
                else if (Savings_First_Deposit == false){
                    double Savings_Account_Deposit = 0;
                    cout <<"\n\n Enter a deposit\n ";
                    cin >> Savings_Account_Deposit;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (Savings_Account_Deposit < 0){
                        while (Savings_Account_Deposit < 0){
                            cout << "\n\n Invalid amount . . . try again\n ";
                            cin >> Savings_Account_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                    }
                    this->Savings_Account_Balance += Savings_Account_Deposit;
                    Set_Amount_Deposited(Savings_Account_Deposit);
                    return true;
                }
            }
            return false;
        }
        bool Savings_Account::Withdraw_from_Account(){
            bool Authentication = Authorise_Transaction();
            if (Authentication == true){
                double money_to_be_withdrawed = 0;
                cout <<"\n Enter amount to withdraw:  $";
                cin >> money_to_be_withdrawed;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                    while ((this->Savings_Account_Balance - money_to_be_withdrawed) <= 50){
                        cout << " Not enough funds . . . try again  $";
                        cin >> money_to_be_withdrawed;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                    this->Savings_Account_Amount_Withdrawn = money_to_be_withdrawed;
                    Set_Amount_Withdrawn(money_to_be_withdrawed);
                    this->Savings_Account_Balance -= money_to_be_withdrawed;
                    // Set_Current_Time();
                return true;
            }
            return false;
        }
        double* Savings_Account::Account_Return_Balance_Address(){
            return &Savings_Account_Balance;
        }
        long long int Savings_Account::Return_Account_Pin(){
            return this->Savings_Account_Pin;
        }
        string Savings_Account::Return_Account_Username(){
            return this->Savings_Account_Username;
        }
        void Savings_Account::Account_Add_Interest(double *Deposit){ 
            bool thread_stop = false;
            while (thread_stop == false){
                this_thread::sleep_for(chrono::milliseconds(250)); 
                *Deposit = (*Deposit)*(1.0005);
            }
        }
        double Savings_Account::Return_Amount_Withdrawn(){
            return this->Savings_Account_Amount_Withdrawn;
        }
        double Savings_Account::Return_Amount_Deposited(){
            return this->Savings_Account_Amount_Deposited;
        }
        void Savings_Account::Set_Amount_Withdrawn(double amount){
            this->Savings_Account_Amount_Withdrawn = amount;
        }
        void Savings_Account::Set_Amount_Deposited(double amount){
            this->Savings_Account_Amount_Deposited = amount;
        }
        void Savings_Account::Print_10_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n";
        }
        void Savings_Account::Print_20_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Savings_Account::Print_30_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Savings_Account::Print_40_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Savings_Account::Print_50_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
         void Savings_Account::Clear_Terminal(){
            Print_50_Lines();
        } 
        char* Savings_Account::Return_Current_Time(){
            time_t now = time(0);
            char* dt = ctime(&now);
            return dt;
        }