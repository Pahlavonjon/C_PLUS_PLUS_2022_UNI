#ifndef PLANET_H
#define PLANET_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
// #include "Client.h"
// #include "Client_Account.h"
// #include "Bank.h"
#include "Country.h"
using namespace std;
class Planet : public Client_Account, public Client, public Bank, public Country{
    private:
        string Planet_Name;
        int Planet_Diameter;
        int Number_Countries;
        Country* Nations;
        int Country_Index;
    public:
        Planet();
        Planet(string Name, int Diameter, int Number_Nations);
        bool Add_Country(Country Destination);
        Planet* Return_Planet_Address();
        Country* Return_Nations_Array_Address();
        int Return_Number_of_Countries();
        // bool Client_Account_Log_In(string* Username, string* User_Password);
        bool Client_Account_Enter_Pin();
};
#endif