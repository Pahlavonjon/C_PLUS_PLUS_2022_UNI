#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Client.h"
#include "Client_Account.h"
#include "Bank.h"
#include "Country.h"
#include "Planet.h"
#include "ATM.h"
using namespace std;

        ATM_Machine::ATM_Machine(){}
        ATM_Machine* ATM_Machine::Return_ATM_Machine_Address(){return this;}
        bool ATM_Machine::ATM_Withdraw_Cash(string Name, string Account_Type ,double Modey_Withdrawal, Bank* Bank_Branch){
            bool Pin_Correct = false;
            if ((this->ATM_Total_Cash -= Modey_Withdrawal) < 0){
                cout <<"\n Not enough cash in the ATM\n\n";
                return false;
            }
            for (int k = 0; k < Number_Customers; k++){
                if (Name == Customers[k].Return_Client_Name()){
                    for (int g = 0; g < ((*Bank_Branch).Return_Client_Account_Limit()); g++){
                        if (Account_Type == All_Client_Accounts[g].Return_Client_Account_Type()){
                            Pin_correct = All_Client_Accounts[g].Client_Account_Enter_Pin();
                            while (Pin_Correct == false){
                                cout << "\n Pin is incorrect . . .  Try again: \n ";
                                Pin_correct = All_Client_Accounts[g].Client_Account_Enter_Pin();
                            }
                            double money_to_be_withdrawed = 0;
                            cout <<"\n Enter amount to withdraw:  $";
                            cin >> money_to_be_withdrawed;
                            while ( (this->Client_Account_Balance -= money_to_be_withdrawed) < 0){
                                cout << " Not enough funds . . . try again  $";
                                cin >> money_to_be_withdrawed;
                            }
                            All_Client_Accounts[g].Client_Account_Withdraw_Money();
                            All_Client_Accounts[g].Client_Account_Print_Withdrawal();
                        }
                    }
                }
            }
        }