#ifndef COUNTRY_H
#define COUNTRY_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
// #include "Client.h"
// #include "Client_Account.h"
#include "Bank.h"
// #include "Planet.h"
// #include "ATM.h"
using namespace std;
class Country{
    private:
        string Country_Name;
        int Number_of_Banks;
        Bank* Banks;
        int Banks_Index;
    public:
        Country();
        Country(string Name, int Number_of_Banks);
        int Return_Number_of_Banks();
        bool Add_Bank(Bank This_Bank);
        Bank* Return_Banks_Array_Address();
        Country* Return_Country_Address();
        void Print_All_Registered_Banks();
};
#endif