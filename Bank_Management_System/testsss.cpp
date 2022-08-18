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
//#include <static>
// #include "Client.h"
#include "Client_Account.h"
#include "Savings_Account.h"
#include "Term_Account.h"
// #include "Account.h"

// #include "Term_Account.h"
// #include "Bank.h"
// #include "Country.h"
// #include "Planet.h"
// #include <ctimer>
// #include "ATM.h"
using namespace std;


// string Starting_Simulation;
    // cout <<"\n\n";
    // cout <<"\n 1) Debugging";
    // cout <<"\n 2) Simulation\n\n";
    // cin >> Starting_Simulation;
    // if (Starting_Simulation == "debugging" || Starting_Simulation == "Debugging"){
    //     // just pretend the user is depositing real money just pretend // multiplayer // there are bots already constructed
    //     // custom contructor
    //     static Client_Account Person_1("Pahlavon","pahlavon",12345678); // what if the parent var name is the same as the child variable name?
    //     static Savings_Account Person_1_Savings("Pahlavon","pahlavon",12345);
    //     // interaction // or return payment from the client account
    //     // Person_1.Show_Homepage() // interactive 
    //     static Term_Account Person_1_Term("Pahlavon","pahlavon",1234); // time or until a certain deposit limit has reached < $1m 
        
    //     static Client_Account Person_2("Jack","jack",12345678);  
    //     static Savings_Account Person_2_Savings("Jack","jack",12345);
    //     static Term_Account Person_2_Term("Jack","jack",1234);
        
    //     static Client_Account Person_3("James","james",12345678);
    //     static Savings_Account Person_3_Savings("James","james",12345);
    //     static Term_Account Person_3_Term("James","james",1234);
    //     // the user MUST FIRST CREATE a regular account AND THEN create a savings or a term account, the money from the client account MUST be transferred to other accounts.
    //     // put in if statement to prevent the running of other threads if the user does not want to create another account.
    //     /* this thread below must be run only after the account has money!!! */
    //     Person_1_Savings.Set_Account_Part_Two_Manually(900);
    //     thread Time_Thread___Person_1___Savings(Person_1_Savings.Savings_Account_Add_Interest, Person_1_Savings.Savings_Account_Return_Balance_Address());
    //     Person_2_Savings.Set_Account_Part_Two_Manually(800);
    //     thread Time_Thread___Person_2___Savings(Person_2_Savings.Savings_Account_Add_Interest, Person_2_Savings.Savings_Account_Return_Balance_Address());
    //     Person_3_Savings.Set_Account_Part_Two_Manually(700);
    //     thread Time_Thread___Person_3___Savings(Person_3_Savings.Savings_Account_Add_Interest, Person_3_Savings.Savings_Account_Return_Balance_Address());
    //     Person_1_Term.Client_Account_Deposit_Money(500);
    //     thread Time_Thread___Person_1___Term(Person_1_Term.Term_Account_Add_Interest, Person_1_Term.Term_Account_Return_Balance_Address(), Person_1_Term.Term_Account_Return_Account_Lock_Address(), Person_1_Term.Term_Account_Return_Lock_Length(), Person_1_Term.Term_Account_Return_Time_Until_Unlock_Address());
    //     Person_2_Term.Client_Account_Deposit_Money(1500);
    //     thread Time_Thread___Person_2___Term(Person_2_Term.Term_Account_Add_Interest, Person_2_Term.Term_Account_Return_Balance_Address(), Person_2_Term.Term_Account_Return_Account_Lock_Address(), Person_2_Term.Term_Account_Return_Lock_Length(), Person_2_Term.Term_Account_Return_Time_Until_Unlock_Address());
    //     Person_3_Term.Client_Account_Deposit_Money(3000);
    //     thread Time_Thread___Person_3___Term(Person_3_Term.Term_Account_Add_Interest, Person_3_Term.Term_Account_Return_Balance_Address(), Person_3_Term.Term_Account_Return_Account_Lock_Address(), Person_3_Term.Term_Account_Return_Lock_Length(), Person_3_Term.Term_Account_Return_Time_Until_Unlock_Address());                                                                                  
    //     // thread The_Interest_Gain(); // you were trying to add another thread for keep adding the interest to the savings balance
    //     while (stop_main_thread == false){
    //         Person_1_Savings.Savings_Account_Show_Balance();
    //         Person_2_Savings.Savings_Account_Show_Balance();
    //         Person_3_Savings.Savings_Account_Show_Balance();
    //         cout <<"\n\n";
    //         Person_1_Term.Term_Account_Show_Balance();
    //         Person_2_Term.Term_Account_Show_Balance();
    //         Person_3_Term.Term_Account_Show_Balance();
    //     }
    //     Time_Thread___Person_3___Term.join();
    //     Time_Thread___Person_2___Term.join();
    //     Time_Thread___Person_1___Term.join();
    //     Time_Thread___Person_3___Savings.join();
    //     Time_Thread___Person_2___Savings.join();
    //     Time_Thread___Person_1___Savings.join();
    //     }
    // else 
    //if (Starting_Simulation == "simulation" || Starting_Simulation == "Simulation"){