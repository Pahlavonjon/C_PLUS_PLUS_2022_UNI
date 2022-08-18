#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <iomanip>
#include <ctime>
// #include "Client.h"
#include "Client_Account.h"
#include "Savings_Account.h"
// #include "Term_Account.h"
// #include "Bank.h"
// #include "Country.h"
// #include "Planet.h"
// #include <ctimer>
// #include "ATM.h"
using namespace std;

// void Clear_Terminal(){cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
// void Greetings(){}
// void Log_Out(){}
// void Log_In(){}
// void All_Function_Addresses(){}
// void Function_Pointer(){}
// void Notifications(){}
// void Function_Driver(Client_Account* This_Account){
//     double cash = 900;
//     (This_Account)->Set_Account();
//     (This_Account)->Show_Client_Homepage();
//     cout<<"\n\n";
//     (This_Account)->Client_Account_Deposit_Money(cash);
//     (This_Account)->Show_Client_Homepage();
//     (This_Account)->Client_Account_Withdraw_Money();
//     (This_Account)->Show_Client_Homepage();
//     (This_Account)->Client_Account_Print_Withdrawal((This_Account)->Return_Client_Account_Amount_Withrawn());
// }

// void First_Test(){
//     Bank CommonWealth("CommonWealth", 5, 2);
//     Client John("John",28,2);
//     CommonWealth.Add_Client(John);
//     Client_Account John_Savings;
    
//     Function_Driver(&John_Savings);
//     John.Add_Client_Account(John_Savings);
//     Clear_Terminal();
//     John_Savings.Show_Client_Homepage();
//     Client_Account* client_account_copy = John.Return_All_Client_Accounts_Array();
//     Clear_Terminal();
//     client_account_copy->Show_Client_Homepage();

//     Client* client_copy = CommonWealth.Return_Customers_Array();
//     Client_Account* client_account_copy_two = client_copy->Return_All_Client_Accounts_Array();
//     cout << "\n This is the second client account copy!\n";
//     client_account_copy_two->Show_Client_Homepage();
// }

// void Version_Week_8(){
//     // Setting the World
//     Planet Earth("Earth", 6400, 4);
//     Country Down_Under("Australia", 7); // AUD
//     Country Deustchland("Germany", 3);  // Euro
//     Country Kiwi("New Zealand", 1);     // NZD
//     Country Britian("United Kingdom", 2); // Sterling Pound
    
//     Bank CommonWealth("CommonWealth", 5, 2);
//     Bank ANZ("ANZ", 5, 2);
//     Bank Deutsche_Bank("Deutsche Bank", 3, 2);
//     Bank Bank_of_England("Bank of England", 3, 2);
//     Bank Bank_of_Auckland("Bank of Auckland", 3, 2);
//     Client John("John", 19, CommonWealth.Return_Client_Account_Limit());
//     string User_Action = "";
//     cout <<"\n\n What would you like to do?";
//     double cash = 900;
//     // double cash_out = 700;
//     Client_Account John_Savings;
    
//     // John_Savings.Set_Account();
//     // John_Savings.Show_Client_Homepage();
//     // cout<<"\n\n";
//     // John_Savings.Client_Account_Deposit_Money(cash);
//     // John_Savings.Show_Client_Homepage();
//     // John_Savings.Client_Account_Withdraw_Money();
//     // John_Savings.Show_Client_Homepage();
//     // John_Savings.Client_Account_Print_Withdrawal(John_Savings.Return_Client_Account_Amount_Withrawn());
    
    
//     Client George("George", 53, Bank_of_Auckland.Return_Client_Account_Limit());
//     Client_Account George_Savings;

//     // George_Savings.Set_Account();
//     Client Dennis("Dennis", 29, Bank_of_England.Return_Client_Account_Limit());
//     Client_Account Dennis_Savings;
//     // Dennis_Savings.Set_Account();
//     Client Rubin("Rubin", 37, Deutsche_Bank.Return_Client_Account_Limit());
//     Client_Account Rubin_Savings;
//     // Rubin_Savings.Set_Account();

//     CommonWealth.Add_Client(John);
//     Bank_of_England.Add_Client(Dennis);
//     Deutsche_Bank.Add_Client(Rubin);
//     Bank_of_Auckland.Add_Client(George);

//     Down_Under.Add_Bank(CommonWealth);
//     Down_Under.Add_Bank(ANZ);
//     Deustchland.Add_Bank(Deutsche_Bank);
//     Britian.Add_Bank(Bank_of_England);
//     Kiwi.Add_Bank(Bank_of_Auckland);
//     Down_Under.Print_All_Registered_Banks();
//     Deustchland.Print_All_Registered_Banks();
//     Earth.Add_Country(Down_Under);
//     Earth.Add_Country(Deustchland);
//     Earth.Add_Country(Kiwi);
//     Earth.Add_Country(Britian);
//     string User_NAME = "";
//     string User_PASSWORD = "";
//     // int User_PIN = 0;
//     //bool logged_in = Earth.Client_Account_Log_In(&User_NAME, &User_PASSWORD);
//     bool logged_in = false;
//     while (logged_in == false){
//         logged_in = Earth.Client_Account_Enter_Pin();
//     }
//     cout <<"logged in?";
//     Clear_Terminal();
// }

// void Version_Week_9(){
    
//     Planet Earth("Earth", 6400, 4);
//     Country Down_Under("Australia", 2); // AUD
//     Country Deutschland("Germany", 1);  // Euro
    
//     Bank CommonWealth("CommonWealth", 2, 1);
//     Bank ANZ("ANZ", 1, 1);
//     Bank Deutsche_Bank("Deutsche Bank", 1, 1);

//     Client John("John", 19, CommonWealth.Return_Client_Account_Limit());
//     Client_Account John_Savings("John","john",12345678); // long long int
//     John.Add_Client_Account(John_Savings);

//     Client George("George", 53, CommonWealth.Return_Client_Account_Limit());
//     Client_Account George_Savings("Goerge","george",123456);
//     George.Add_Client_Account(George_Savings);
    
//     Client Rubin("Rubin", 37, Deutsche_Bank.Return_Client_Account_Limit());
//     Client_Account Rubin_Savings("Rubin","rubin",1234567);
//     Rubin.Add_Client_Account(Rubin_Savings);

//     Client Dennis("Dennis", 29, Deutsche_Bank.Return_Client_Account_Limit());
//     Client_Account Dennis_Savings("Dennis","dennis",12345);
//     Dennis.Add_Client_Account(Dennis_Savings);

//     Client Walter("Walter", 79, ANZ.Return_Client_Account_Limit());
//     Client_Account Walter_Savings("Walter","walter",1234);
//     Walter.Add_Client_Account(Walter_Savings);


//     CommonWealth.Add_Client(John);
//     CommonWealth.Add_Client(George);
//     ANZ.Add_Client(Walter);

//     Deutsche_Bank.Add_Client(Rubin);
//     Deutsche_Bank.Add_Client(Dennis);


//     Down_Under.Add_Bank(CommonWealth); // 2 clients and 2 client_accounts
//     Down_Under.Add_Bank(ANZ); // 1 client and 1 client_account

//     Deutschland.Add_Bank(Deutsche_Bank);

//     Earth.Add_Country(Down_Under); // 2 banks
//     Earth.Add_Country(Deutschland); // 1 bank

//     // 1 planet // 2 Countries // 3 Banks // 4 Clients // 4 Client_Accounts
//     // for (int g = 0; g < (Earth.Return_Number_of_Countries()); g++){
//     //     for (int k = 0; k < 2; k++){
//     //         cout <<" "<<(((Down_Under.Return_Banks_Array_Address())+k)->Return_Number_of_Clients())<<"\n";
//     //     }
//     // }

//     bool logged_in = false;
//     while (logged_in == false){
//         logged_in = Earth.Client_Account_Enter_Pin();
//         cout <<" "<<logged_in<<"\n";
//     }
//     cout <<"logged in?";
//     Clear_Terminal();
// }







int main(){

    bool thread_stop_main = false; 

    // just pretend the user is depositing real money just pretend // multiplayer // there are bots already constructed

    // custom contructor
    Client_Account Person_1("Pahlavon","pahlavon",12345678); // what if the parent var name is the same as the child variable name?
    static Savings_Account Person_1_Savings("Odilov","odilov",1234);
    Person_1_Savings.Set_Account_Part_Two_Manually(900); // interaction // or return payment from the client account
    // Person1.Show_Homepage() // interactive 
    // static Term_Account Person_1_Term() // time or until a certain deposit limit has reached < $1m 


    Client_Account Person_2("Jack","jack",12345678);
    static Savings_Account Person_2_Savings("Jack","jack",1234567);
    Person_2_Savings.Set_Account_Part_Two_Manually(800);
    // static Term_Account Person_2_Savings_Term()
    
    
    Client_Account Person_3("James","james",12345678);
    static Savings_Account Person_3_Savings("James","james",1234567);
    Person_3_Savings.Set_Account_Part_Two_Manually(700);
    // static Term_Account Person_3_Term();




    // the user MUST FIRST CREATE a regular account AND THEN create a savings or a term account, the money from the client account MUST be transferred to other accounts.



    // put in if statement to prevent the running of other threads if the user does not want to create another account.
    /* this thread below must be run only after the account has money!!! */
    thread Time_Thread___Person_1___Savings(Person1_Savings.Savings_Account_Add_Interest,Person1_Savings.Savings_Account_Return_Balance_Address());
    thread Time_Thread___Person_2___Savings(Person1_Savings.Savings_Account_Add_Interest,Person1_Savings.Savings_Account_Return_Balance_Address());
    thread Time_Thread___Person_3___Savings(Person1_Savings.Savings_Account_Add_Interest,Person1_Savings.Savings_Account_Return_Balance_Address());

    // thread Time_Thread___Person_1___Term(Person1_Savings.Savings_Account_Add_Interest,Person1_Savings.Savings_Account_Return_Balance());
    // thread Time_Thread___Person_2___Term(Person1_Savings.Savings_Account_Add_Interest,Person1_Savings.Savings_Account_Return_Balance());
    // thread Time_Thread___Person_3___Term(Person1_Savings.Savings_Account_Add_Interest,Person1_Savings.Savings_Account_Return_Balance());

    
    
    
    // thread The_Interest_Gain(); // you were trying to add another thread for keep adding the interest to the savings balance
    while (thread_stop_main == false){
        Person_1_Savings.Savings_Account_Show_Balance();
        cout <<"\n\n";
        
    }

    
    

    // Time_Thread___Person_3___Term.join()
    // Time_Thread___Person_2___Term.join()
    // Time_Thread___Person_1___Term.join()
    
    Time_Thread___Person_3___Savings.join();
    Time_Thread___Person_2___Savings.join();
    Time_Thread___Person_1___Savings.join();
}




        // void Client_Account::Client_Account_Withdraw_Money_Directly(double money_to_be_withdrawed){ // can be changed, the function can give an error if the term is not finished
        //     while ((this->Client_Account_Balance - money_to_be_withdrawed) < 0){
        //         cout << " Not enough funds . . . try again  $";
        //         cin >> money_to_be_withdrawed;
        //     }
        //     this->Client_Account_Balance -= money_to_be_withdrawed;
        //     // Set_Current_Time();
        // }
        
        // void Client_Account::Client_Account_Print_Withdrawal(double Money_Withdrawed){
        //     cout << "\n\n";
        //     cout << " Bank Receipt\n\n";
        //     cout << " Name: "<<this->Client_Account_Username<<"\n";
        //     cout << " Amount withdrew: $"<<Money_Withdrawed<<"\n\n";
        //     // cout << " Transaction id: "<< Transaction id<<"\n";
        //     cout << " Time of withdrewal is: "/*<<Get_That_Time(Time_History_Index-1)*/<<"\n\n\n";
        //     Clear_Terminal();
        // } 

        // Times and transactions

        // bool Client_Account::Set_Current_Time(){  // must include all user transactions along with the time and the recipient details
        //     Now = time(0);
        //     Current_Time = ctime(&Now);
        //     // Time_History[Time_History_Index] = Current_Time;
        //     // Time_History_Index++;
        //     return true;
        // time_t Now;
        // char* Current_Time;
        // char** Time_History;
        // }
        // char* Client_Account::Get_That_Time(int That_Transaction){
        //     return Time_History[That_Transaction];
        // }


        // double Client_Account::Return_Client_Account_Amount_Withrawn(){
        //     return this->Client_Account_Amount_Withdrawn;
        // }
        
        // char* Client_Account::Get_Current_Time(){
        //     time_t Now = time(0);
        //     char* Current_Time = ctime(&Now);
        //     return Current_Time;
        // }
        // bool Client_Account::Client_Account_Log_In(Client* The_User){
        //     string logging_in_username = "";
        //     string logging_in_password = "";
        //     // bool logging_in_username_correct = false;
        //     // bool logging_in_password_correct = false;
        //     cout << "\n\n Enter your username:  ";
        //     cin >> logging_in_username;
        //     cout << "\n\n Enter your password:  ";
        //     cin >> logging_in_password;
        //     for (int r = 0; r < (*(The_User)).Customers[f].Return_Client_Account_Limit(); r++){
        //         if (logging_in_username == All_Client_Accounts[r].Return_Client_Account_Username() && logging_in_password == All_Client_Accounts[r].Return_Client_Account_Password()){
        //             return true;
        //         }
        //     }
        //     return false; 
        // }
       
        // bool Client_Account::Client_Account_Enter_Pin(){
        //     int loggin_in_pin = 0;
        //     cout << "\n Enter your account pin:  ";
        //     cin >> loggin_in_pin;
        //     for (int k = 0; k < Return_Number_of_Countries(); k++){
        //         for (int g = 0; g < ((Return_Nations_Array_Address())+k).Return_Number_of_Banks(); g++){
        //             for (int f = 0; f < Banks[g].Return_Number_of_Clients(); f++){
        //                 for (int r = 0; r < Customers[f].Return_Client_Account_Limit(); r++){
        //                     if (loggin_in_pin == All_Client_Accounts[r].Return_Client_Account_Pin()){
        //                         return true;
        //                     }
        //                 }
        //             }
        //         }
        //     }
        //     return false;
        // }
        // void Client_Account::Client_Account_Money_Transfer(double Money_Being_Transferred, Country *Recepient_Destination, Country *Sender_Destination, Client_Account *Recipient_Account, Client_Account *Sender_Account){
        // // bool Logged_in = false;
        // // bool Money_Deposit_Status = false;
        // // bool BPay = false;
        // // double Money_Deposit = 0;
        // double Money_Being_Transferred = 0;
        // string Log_in_name = "";
        // string Log_in_password = "";
        // string Repecient_name = "";
        // cout <<"\n\n Enter username";
        // while (Logged_in == false){
        //     cout <<"\n "<<Username<<" enter your password: ";
        //     cin >> Log_in_password;
        //     Logged_in = (*(Account)).Log_in(Username,Log_in_password);
        //     while (Logged_in = true){
        //         (*(Account)).Show_My_Details();
        //         cout <<"\n Deposit money into account: $";
        //         cin >> Money_Deposit;
        //         Money_Deposit_Status = (*(Account)).Create_Account(Money_Deposit);
        //         if (Money_Deposit_Status == true){
        //             while (BPay == false){
        //                 cout <<"\n Enter amount to be transferred: $";
        //                 cin >> Money_BPay;
        //                 BPay = (*(Account)).BPay(Money_BPay,&(*(Receiver)->Return_Object_Address()));
        //                 if (BPay == true){
        //                     cout <<"\n Your transaction is complete . . .\n";
        //                     break;
        //                 }
        //                 else{
        //                     cout <<"\n Your transaction was cancelled!\n";
        //                     break;
        //                 }
        //             }
        //         }
        //         break;
        //     }
        // } 
        // }
        // void Client_Account::Client_Account_Print_Transaction(double Money_Being_Transferred, string Username, Client_Account *Account, Client_Account *Receiver){
        //     cout << "\n\n";
        //     cout << " Bank Receipt\n\n";
        //     cout << " Sender: "<<(*Account).Client_Account_Name<<"\n";
        //     cout << " Recipient: "<<(*Receiver).Client_Account_Name<<"\n";
        //     cout << " Amount paid $"<<Money_Being_Transferred<<"\n\n\n";
        //     cout << " Time of transaction: "<<Client::Get_Current_Time()<<"\n\n\n";
        // }
        