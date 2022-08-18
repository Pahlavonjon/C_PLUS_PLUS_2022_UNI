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
#include "Bank.h"
#include "Account.h"
#include "Client_Account.h"
#include "Term_Account.h"
#include "Savings_Account.h"
using namespace std;
int main(){
    bool stop_main_thread = false; 
    bool run_main = true;
    bool Savings_Account_Activation = false; 
    bool Term_Account_Activation = false;
    bool exit_term_account = false;
    bool exit_saving_account = false;
    int created_another_account = 0;
    ofstream Log_File_Person_1;

    Bank* CommonWealth = new Bank("CommonWealth",2);
    Client_Account* Person_1 = new Client_Account;
    Savings_Account* Person_1_Savings = new Savings_Account;
    Term_Account* Person_1_Term = new Term_Account;
    Client_Account* Person_3 = new Client_Account("James",12345678); 
    Client_Account* Person_4 = new Client_Account("Tom",12345678); 

    // cout << "\n " <<CommonWealth->Add_Client_Account(Person_1);
    // cout << "\n " <<CommonWealth->Add_Savings_Account(Person_1_Savings);
    // cout << "\n " <<CommonWealth->Add_Term_Account(Person_1_Term);
    // cout << "\n " <<CommonWealth->Add_Client_Account(Person_3);
    // cout << "\n " <<CommonWealth->Add_Client_Account(Person_4);

    // CommonWealth->Print_All_Accounts();




    // do negative tests
    // reset cin variable after cin failure
    // 




    double Person_3_request = 50;
    if (run_main == true){
        Log_File_Person_1.open("Logs.txt");
        Person_1->Clear_Terminal();
        Person_1->Account_Terms_and_Conditions();
        Person_1->Set_Account();
        Log_File_Person_1 <<" "<<Person_1->Return_Account_Username()<< " Created regular account at: "<<Person_1->Return_Current_Time()<<"\n";
        Person_1->Clear_Terminal();
        Person_1->Log_in();
        Person_1->Clear_Terminal();
        Person_1->Show_Homepage();
        Person_1->Deposit_into_Account();
        Log_File_Person_1 <<"  "<<Person_1->Return_Account_Username()<< " deposited $"<<Person_1->Return_Amount_Deposited()<<" at: " <<Person_1->Return_Current_Time()<<"\n\n";
        string User_Response = "";
        cout <<"\n\n Do you also want to create a Savings Account?\n ";
        cin >> User_Response;
        if (cin.fail()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
            if (User_Response == "yes" || User_Response == "Yes" || User_Response == "y"){
                Savings_Account_Activation = true;
                created_another_account++;
                Log_File_Person_1 <<" "<<Person_1_Savings->Return_Account_Username()<< " created account at: ";
                Person_1_Savings->Clear_Terminal();
                Person_1_Savings->Account_Terms_and_Conditions();
                Person_1_Savings->Set_Account();
                Person_1_Savings->Clear_Terminal();
                Person_1_Savings->Show_Homepage();
                Person_1_Savings->Deposit_into_Account();
                Log_File_Person_1 <<"  "<<Person_1_Savings->Return_Account_Username()<<" deposited $"<<Person_1_Savings->Return_Amount_Deposited()<< " at: "<<Person_1_Savings->Return_Current_Time()<<"\n\n";
                if (Savings_Account_Activation == true){
                    thread Time_Thread___Person_1___Savings(Person_1_Savings->Account_Add_Interest, Person_1_Savings->Account_Return_Balance_Address());
                    Time_Thread___Person_1___Savings.detach();
                }
            }
            cout <<"\n\n Do you also want to create a Term Account?\n ";
            cin >> User_Response;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            if (User_Response == "yes" || User_Response == "Yes" || User_Response == "y"){
                Term_Account_Activation = true;
                created_another_account++;
                Person_1_Term->Clear_Terminal();
                Person_1_Term->Account_Terms_and_Conditions();
                Person_1_Term->Set_Account();
                Person_1_Term->Clear_Terminal();
                Person_1_Term->Show_Homepage();
                Person_1_Term->Deposit_into_Account();
                Log_File_Person_1 <<"  "<<Person_1_Term->Return_Account_Username()<<" deposited $"<<Person_1_Term->Return_Amount_Deposited() <<" at: "<<Person_1_Term->Return_Current_Time()<<"\n\n";
                if (Term_Account_Activation == true){
                    thread Time_Thread___Person_1___Term(Person_1_Term->Term_Account_Add_Interest, Person_1_Term->Term_Account_Return_Balance_Address(), Person_1_Term->Term_Account_Return_Account_Lock_Address(), Person_1_Term->Term_Account_Return_Lock_Length(), Person_1_Term->Term_Account_Return_Time_Until_Unlock_Address());                                                                               
                    Time_Thread___Person_1___Term.detach();
                }
            }
            string User_Interaction = "";
            cout <<"\n\n "<< Person_3->Return_Account_Username()<<" is asking for $"<<fixed<<setprecision(2)<<Person_3_request<<", he promises to give you back double (y/n)  \n\n ";
            cin >> User_Interaction;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            if (User_Interaction == "y"){
                Person_1->Transfer_Money_into_another_Account(Person_3,Person_3_request);
                Log_File_Person_1 <<"  "<<Person_1->Return_Account_Username()<< " transferred $"<<Person_1->Return_Amount_Transfer()<< " at: "<< Person_1->Return_Current_Time()<<"\n\n";
            }
        while (stop_main_thread == false){
            while (run_main == true){
                Person_1->Show_Homepage();
                cin >> User_Interaction;
                if (cin.fail()){
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    // User_Interaction = "";
                }
                while (User_Interaction == "bpay" || User_Interaction == "Bpay"){
                    double user_transfer = 0;
                    string recepient_name = "";
                    cout << "\n\n Who do you want to transfer?\n\n";
                    cout << " "<<Person_3->Return_Account_Username()<< " or to "<< Person_4->Return_Account_Username()<<"\n\n";
                    cin >> recepient_name;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    } 
                    while (recepient_name != Person_3->Return_Account_Username() && recepient_name != Person_4->Return_Account_Username()){
                        cout << "\n\n Select from the names below . . .\n\n";
                        cout << " "<<Person_3->Return_Account_Username()<< " or to "<< Person_4->Return_Account_Username()<<"\n\n";
                        cin >> recepient_name;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                    cout << "\n\n How much do you want to transfer?\n\n";
                    Person_1->Show_Balance();
                    cin >> user_transfer;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (user_transfer > Person_1->Return_Client_Account_Balance()){
                        cout << "\n\n Not enough funds!\n\n";
                        Person_1->Show_Balance();
                        cin >> user_transfer;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                    if (recepient_name == Person_3->Return_Account_Username()){
                        Person_1->Transfer_Money_into_another_Account(Person_3,user_transfer);
                        Log_File_Person_1 <<"  "<<Person_1->Return_Account_Username()<< " transferred $"<<Person_1->Return_Amount_Transfer()<< " at: "<< Person_1->Return_Current_Time()<<" to "<<Person_3->Return_Account_Username()<<"\n\n";
                        Person_1->Show_Homepage();
                        cin >> User_Interaction;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                    else if (recepient_name == Person_4->Return_Account_Username()){
                        Person_1->Transfer_Money_into_another_Account(Person_4,user_transfer);
                        Log_File_Person_1 <<"  "<<Person_1->Return_Account_Username()<< " transferred $"<<Person_1->Return_Amount_Transfer()<< " at: "<< Person_1->Return_Current_Time()<<" to "<<Person_4->Return_Account_Username()<<"\n\n";
                        Person_1->Show_Homepage();
                        cin >> User_Interaction;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                    }
                }
                while (User_Interaction == "withdraw" || User_Interaction == "Withdraw" || User_Interaction == "cashout"){
                    Person_1->Withdraw_from_Account();
                    Person_1->Show_Homepage();
                    cin >> User_Interaction;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                }
                while (User_Interaction == "deposit" || User_Interaction == "Deposit"){
                    Person_1->Deposit_into_Account();
                    Person_1->Show_Homepage();
                    cin >> User_Interaction;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    Log_File_Person_1 <<"  "<<Person_1->Return_Account_Username()<< " deposited $"<<Person_1->Return_Amount_Deposited()<<" at: " <<Person_1->Return_Current_Time()<<"\n";
                }
                while (User_Interaction == "accounts" && created_another_account != 0 || User_Interaction == "Accounts" && created_another_account != 0 || User_Interaction == "account" && created_another_account != 0){
                    cout << "\n\n Savings or Term?\n ";
                    cin >> User_Interaction;
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    }
                    while (User_Interaction == "Savings"  || User_Interaction == "savings" ){
                        string User_Interaction_savings = "";
                        Person_1_Savings->Show_Homepage();
                        cin >> User_Interaction_savings;
                        if (cin.fail()){
                            cin.clear();
                            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        }
                        while (User_Interaction_savings == "deposit" || User_Interaction_savings == "Deposit"){
                            Person_1_Savings->Deposit_into_Account();
                            Person_1_Savings->Show_Homepage();
                            cin >> User_Interaction_savings;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                            Log_File_Person_1 <<"  "<<Person_1_Savings->Return_Account_Username()<<" deposited $"<<Person_1_Savings->Return_Amount_Deposited()<< " at: "<<Person_1_Savings->Return_Current_Time()<<"\n\n";
                        }
                        while (User_Interaction_savings == "Withdraw" || User_Interaction_savings == "withdraw"){
                            Person_1_Savings->Withdraw_from_Account();
                            Person_1_Savings->Show_Homepage();
                            cin >> User_Interaction_savings;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                
                            }
                            Log_File_Person_1 <<"  "<<Person_1_Savings->Return_Account_Username()<<" withdrew $"<<Person_1_Savings->Return_Amount_Withdrawn()<< " at: "<<Person_1_Savings->Return_Current_Time()<<"\n\n";
                        }
                        while (User_Interaction_savings == "Reset" || User_Interaction_savings == "reset" || User_Interaction_savings == "recover"){
                            Person_1_Savings->Reset_Account();
                            Person_1_Savings->Clear_Terminal();
                            Person_1_Savings->Log_in();
                            User_Interaction_savings = "";
                        }
                        while (User_Interaction_savings == "logout" || User_Interaction_savings == "out"){
                            exit_saving_account = true;
                            User_Interaction = "";
                            break;
                        }
                    }
                    while (User_Interaction == "Term" || User_Interaction == "term" ){
                        string User_Interaction_term = "";
                        if (Person_1_Term->Is_this_Account_locked() == false){
                            Person_1_Term->Show_Homepage();
                            cin >> User_Interaction_term;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                        if (Person_1_Term->Is_this_Account_locked() == true){
                            cout <<"\n\n This account is locked for "<< ((Person_1_Term->Term_Account_Return_Time_Until_Unlock())*0.25) << " seconds.\n";
                            cout <<"  You must wait your until Term exprires!\n\n";
                            cout <<" Enter: back to return . . .\n\n"; 
                            Person_1_Term->Print_10_Lines();
                            cin >> User_Interaction_term;
                            if (cin.fail()){
                                cin.clear();
                                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            }
                        }
                        while (User_Interaction_term == "b" || User_Interaction_term == "back" || User_Interaction == "Back"){
                            exit_term_account = true;
                            User_Interaction = "";
                            break;
                        }
                        while (User_Interaction_term == "logout" || User_Interaction_term == "out"){
                            exit_term_account = true;
                            User_Interaction = "";
                            break;
                        }
                        while (User_Interaction_term == "Deposit" || User_Interaction_term == "deposit"){
                            if (Person_1_Term->Is_this_Account_locked() == false ){
                                Person_1_Term->Deposit_into_Account();
                                Person_1_Term->Show_Homepage();
                                cin >> User_Interaction_term;
                                if (cin.fail()){
                                    cin.clear();
                                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                }
                                Log_File_Person_1 <<"  "<<Person_1_Term->Return_Account_Username()<<" deposited $"<<Person_1_Term->Return_Amount_Deposited() <<" at: "<<Person_1_Term->Return_Current_Time()<<"\n\n";
                            }
                            else {
                                cout << "\n\n This accont is locked!\n\n";
                                break;
                            }
                        }
                        while (User_Interaction_term == "Withdraw" || User_Interaction_term == "withdraw"){
                            if (Person_1_Term->Is_this_Account_locked() == false ){
                                Person_1_Term->Withdraw_from_Account();
                                Person_1_Term->Show_Homepage();
                                cin >> User_Interaction_term;
                                if (cin.fail()){
                                    cin.clear();
                                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                }
                                Log_File_Person_1 <<"  "<<Person_1_Term->Return_Account_Username()<<" withdrew $"<<Person_1_Term->Return_Amount_Withdrawn() <<" at: "<<Person_1_Term->Return_Current_Time()<<"\n\n";
                            }
                            else {
                                cout << "\n\n This accont is locked!\n\n";
                                break;
                            }
                        }
                        while (User_Interaction_term == "Reset" || User_Interaction_term == "reset" || User_Interaction_term == "recover"){
                            Person_1_Term->Reset_Account();
                            Person_1_Term->Clear_Terminal();
                            Person_1_Term->Log_in();
                            User_Interaction_term = "";
                        }
                        while (User_Interaction_term == "Term" || User_Interaction_term == "term" ){
                            Person_1_Term->Clear_Terminal();
                            Person_1_Term->Term_Account_ReActivate();
                            User_Interaction_term = "out";
                        }
                    }
                }
                while (User_Interaction == "Reset" || User_Interaction == "reset" || User_Interaction == "recover"){
                    Person_1->Reset_Account();
                    Person_1->Clear_Terminal();
                    Person_1->Log_in();
                    User_Interaction = "";
                }
                while (User_Interaction == "Logout" || User_Interaction == "out" || User_Interaction == "logout"){
                Person_1->Log_out();
                
                Log_File_Person_1.close();
                stop_main_thread = true;
                run_main = false;
                break;
                }
            } 
        }
    }
    delete CommonWealth;
    delete Person_1;
    delete Person_1_Savings;
    delete Person_1_Term;
    delete Person_3;
    delete Person_4;
    return 0;
}