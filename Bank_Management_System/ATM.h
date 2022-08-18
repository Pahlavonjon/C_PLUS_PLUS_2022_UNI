#ifndef ATM_H 
#define ATM_H
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
class ATM_Machine : public Bank, public Client_Account, private Planet{
    private:
        string ATM_Bank;
        int ATM_Total_Cash;
    public:
        ATM_Machine();
        ATM_Machine* Return_ATM_Machine_Address();
        bool ATM_Withdraw_Cash(string Name, string Account_Type ,double Modey_Withdrawal, Bank* Bank_Branch);
};
#endif