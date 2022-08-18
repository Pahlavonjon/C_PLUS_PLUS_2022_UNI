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
#include "Term_Account.h"
#include "Account.h"
using namespace std;
        Term_Account::Term_Account(){
            Term_Account_Username = "";
            Term_Account_Pin = 0;
            Term_Account_Interest_Rate = 1.05; 
            Term_Account_Balance = 0;
            Term_Account_Type = "Term_Account";
            Term_Account_Lock_Length = 240; 
            Term_First_Deposit = true;
            Term_Account_Agreement = false;
            Term_Account_Lock = false;
            Term_Account_Time_Until_Unlock = 0;
        }
        Term_Account::Term_Account(string Username,long long int Pin){
            this->Term_Account_Username = Username;
            this->Term_Account_Pin = Pin;
            Term_Account_Interest_Rate = 1.05;
            Term_Account_Balance = 0;
            Term_Account_Type = "Term_Account";
            Term_Account_Lock_Length = 240; 
            Term_First_Deposit = true;
            Term_Account_Agreement = false;
            Term_Account_Lock = false;
            Term_Account_Time_Until_Unlock = 0;
        }
        Term_Account::~Term_Account(){}
        bool Term_Account::Log_in(){
            string Term_Account_log_in_username = "";
            int Term_Account_log_in_pin = 0;
            cout <<"\n\n Enter your Username \n ";
                cin >> Term_Account_log_in_username;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            cout <<"\n\n Enter your Pin\n ";
                cin >> Term_Account_log_in_pin;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                while (Term_Account_log_in_pin != Return_Account_Pin() || Term_Account_log_in_username != Return_Account_Username()){
                    cout <<"\n\n Invalid Username or Pin\n ";
                    cout <<"\n Try again . . .";
                        cout <<"\n\n Enter your username \n ";
                            cin >> Term_Account_log_in_username;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        cout <<"\n\n Enter your pin\n ";
                            cin >> Term_Account_log_in_pin;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
            }
            return true;
        }
        bool Term_Account::Log_out(){
            return true;
        }
        void Term_Account::Set_Account(){
            long long int temporary_pin = 0;
            cout << "\n\n Enter account Username: \n ";
            cin >> this->Term_Account_Username;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            cout << "\n Enter account Pin: \n ";
            cin >> this->Term_Account_Pin;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
                while (temporary_pin != Term_Account_Pin){
                    cout << "\n Confirm account Pin: \n ";
                    cin >> temporary_pin;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    if (temporary_pin == Term_Account_Pin){
                        break;
                    }
                }
        }
        void Term_Account::Reset_Account(){
            Print_30_Lines();
            cout << " You are now re-setting your account enter valid inputs . . .\n\n";
            Set_Account();
        }
        void Term_Account::Show_Balance(){
            cout <<"\n\n The Term balance is now $"<<fixed<<setprecision(2)<<this->Term_Account_Balance<<"\n\n";
        }
        void Term_Account::Show_Homepage(){
            if (Term_Account_Lock == false){
                cout <<"\n\n\n\n\n\n\n\n\n\n";
                cout <<"\n                                  Term Account                \n";
                cout <<"    Welcome "<<this->Term_Account_Username<<"\n\n";
                cout <<"\n\n Your Balance is: $"<<fixed<<setprecision(2)<<this->Term_Account_Balance<<"\n\n\n\n\n";
                cout <<" Actions:                                  logout\n\n";
                cout <<"  Withdraw\n\n"; 
                cout <<"  Deposit\n\n"; 
                cout <<" Term\n\n";
                cout <<" Reset - account\n";
                Print_10_Lines();
            }
            else {
                cout <<"\n\n This account is locked for "<< (Term_Account_Time_Until_Unlock*0.25) << " seconds.\n";
                cout <<"  You must wait your until Term exprires!\n\n";
                cout <<" Enter: back to return . . .\n\n"; 
                Print_10_Lines();
            }
        }
        void Term_Account::Account_Terms_and_Conditions(){
            string User_Decision = "";
            Print_10_Lines();
            cout <<"\n Warning is a Term account.\n";
            cout <<"\n This account will be LOCKED for "<<(Term_Account_Lock_Length*0.25) <<" seconds.\n\n";
            cout <<" Term Account requires the deposit to be > $10,000 immediately upon creation. \n";
            cout <<" Interest is added constanstly over the duration of the Term.\n";
            cout <<" You will not have access to this account once the Term Contract starts.\n";
            cout <<" Do you Accept the Terms and Conditions?   y/n\n\n ";
            cin >> User_Decision;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            if (User_Decision == "y" || User_Decision == "Y" || User_Decision == "yes"){
                cout <<"\n\n Confirm your decision . . .\n ";
                cin >> User_Decision;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                if (User_Decision == "y" || User_Decision == "Y" || User_Decision == "yes"){
                    Term_Account_Agreement = true;
                }
            }
            else {
                Term_Account_Lock = false;
            }
        }
        bool Term_Account::Authorise_Transaction(){
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
        bool Term_Account::Deposit_into_Account(){
            if (Term_Account_Lock == true){
                cout <<"\n\n This account is locked for "<< (Term_Account_Time_Until_Unlock*0.25) << " seconds.\n";
                cout <<"  You must wait your until Term exprires!\n\n";
                cout <<" Enter: back to return . . .\n\n";
                return false;
            }
            bool Authentication = Authorise_Transaction();
            if (Authentication == true){
                if (Term_First_Deposit == true && Term_Account_Lock == false && Term_Account_Agreement == true){ 
                    double Term_Account_First_Deposit = 0;
                    cout <<"\n\n This Term Account requires a deposit above $10,000\n ";
                    cin >> Term_Account_First_Deposit; 
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (Term_Account_First_Deposit <= 10000 || Term_Account_First_Deposit > 5000000){
                        while (Term_Account_First_Deposit <= 10000){
                            cout << "\n\n Invalid amount . . . try again\n ";
                            cin >> Term_Account_First_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                        while (Term_Account_First_Deposit > 5000000){
                            cout << "\n\n This is your first deposit and it can not be > $5,000,000 . . . try again\n ";
                            cin >> Term_Account_First_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                    }
                    this->Term_Account_Balance += Term_Account_First_Deposit;
                    Set_Amount_Deposited(Term_Account_First_Deposit);
                    Term_Account_Lock = true;
                    Term_First_Deposit = false;
                    return true;
                }
                else if (Term_First_Deposit == false && Term_Account_Lock == false && Term_Account_Agreement == true){
                    double Term_Account_Deposit = 0;
                    cout <<"\n\n Enter a deposit\n ";
                    cin >> Term_Account_Deposit;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (Term_Account_Deposit < 0){
                        while (Term_Account_Deposit < 0){
                            cout << "\n\n Invalid amount . . . try again\n ";
                            cin >> Term_Account_Deposit;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                    }
                    this->Term_Account_Balance += Term_Account_Deposit;
                    Set_Amount_Deposited(Term_Account_Deposit);
                    Term_Account_Lock = true;
                    return true;
                }
            }
            return false;
        } 
        bool Term_Account::Withdraw_from_Account(){ 
            if (Term_Account_Lock == true){
                cout <<"\n\n This account is locked for "<< (Term_Account_Time_Until_Unlock) << " seconds.\n";
                cout <<" Try again later . . .\n\n";
                cout <<" Enter: back to return . . .\n\n";
            }
            else if (Term_Account_Lock == false){
                bool Authentication = Authorise_Transaction();
                if (Authentication == true){
                    double money_to_be_withdrawed = 0;
                    cout <<"\n Enter amount to withdraw:  $";
                    cin >> money_to_be_withdrawed;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                        while ((this->Term_Account_Balance - money_to_be_withdrawed) < 0){
                            cout << " Not enough funds . . . try again  $";
                            cin >> money_to_be_withdrawed;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                        this->Term_Account_Amount_Withdrawn = money_to_be_withdrawed;
                        this->Term_Account_Balance -= money_to_be_withdrawed;
                        Set_Amount_Withdrawn(money_to_be_withdrawed);
                    return true;
                }
            }
            return false;
        }
        bool Term_Account::Term_Account_ReActivate(){
            if (Term_Account_Lock == false){
                string user_reactivate = "";
                cout << "\n\n Want to sign the contract again? y/n\n\n ";
                cout <<" Your account will be locked for another "<<(Term_Account_Lock_Length*0.25)<<" seconds. \n\n ";
                cin >> user_reactivate;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    user_reactivate = "";
                }
                if (user_reactivate == "y" || user_reactivate == "yes" || user_reactivate == "Yes" || user_reactivate == "Y" || user_reactivate == "ya"){
                    Term_Account_Agreement = true;
                    Term_Account_Lock = true;
                    return true;
                }
            }
            return false;
        }
        void Term_Account::Term_Account_Add_Interest(double *Term_Deposit, bool *Term_Account_Lock, int Term_Account_Lock_Length , int *Time_Left){ // should it pass an array of pointers and reduce the number of threads required when a new class is created
            bool thread_stop;
            while (thread_stop == false){ 
                while (thread_stop == false && *Term_Account_Lock == true){ 
                    for (int k = 1; k < Term_Account_Lock_Length+1; k++){ 
                        this_thread::sleep_for(chrono::milliseconds(250)); 
                        *Term_Deposit = (*Term_Deposit)*(1.005);
                        *Time_Left = ((Term_Account_Lock_Length+1)-k);
                    }
                    *Term_Account_Lock = false; 
                }
                thread_stop = false;
            }
        }
        bool Term_Account::Is_this_Account_locked(){
            if (Term_Account_Lock == true){
                return true;
            }
            return false;
        }
        double Term_Account::Return_Amount_Withdrawn(){
            return this->Term_Account_Amount_Withdrawn;
        }
        double Term_Account::Return_Amount_Deposited(){
            return this->Term_Account_Amount_Deposited;
        }
        void Term_Account::Set_Amount_Withdrawn(double amount){
            this->Term_Account_Amount_Withdrawn = amount;
        }
        void Term_Account::Set_Amount_Deposited(double amount){
            this->Term_Account_Amount_Deposited = amount;
        }
        long long int Term_Account::Return_Account_Pin(){
            return this->Term_Account_Pin;
        }
        string Term_Account::Return_Account_Username(){
            return this->Term_Account_Username;
        }
        double* Term_Account::Term_Account_Return_Balance_Address(){
            return &Term_Account_Balance;
        }
        double Term_Account::Term_Account_Return_Balance(){
            return this->Term_Account_Balance;
        }
        bool* Term_Account::Term_Account_Return_Account_Lock_Address(){
            return &Term_Account_Lock;
        }
        int Term_Account::Term_Account_Return_Lock_Length(){
            return this->Term_Account_Lock_Length;
        }
        int* Term_Account::Term_Account_Return_Time_Until_Unlock_Address(){
            return &Term_Account_Time_Until_Unlock;
        }
        int Term_Account::Term_Account_Return_Time_Until_Unlock(){
            return this->Term_Account_Time_Until_Unlock;
        }
        void Term_Account::Print_10_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n";
        }
        void Term_Account::Print_20_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Term_Account::Print_30_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Term_Account::Print_40_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
        void Term_Account::Print_50_Lines(){
            cout << "\n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n \n\n\n\n\n";
        }
         void Term_Account::Clear_Terminal(){
            Print_50_Lines();
        } 
        char* Term_Account::Return_Current_Time(){
            time_t now = time(0);
            char* dt = ctime(&now);
            return dt;
        }