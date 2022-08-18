#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Client.h"
#include "Client_Account.h"
#include "Bank.h"
#include "Country.h"
#include "Bank.h"
#include "Planet.h"
// #include "ATM.h"
using namespace std;

        Country::Country(){}
        Country::Country(string Name, int Number_of_Banks){
            this->Country_Name = Name;
            this->Number_of_Banks = Number_of_Banks;
            Banks = new Bank[Number_of_Banks];
            Banks_Index = 0;
        }
        int Country::Return_Number_of_Banks(){return this->Banks_Index;}
        bool Country::Add_Bank(Bank This_Bank){
            if (Banks_Index < Number_of_Banks){
                Banks[Banks_Index] = This_Bank;
                Banks_Index++;
                return true;
            }
            return false;
        }
        Bank* Country::Return_Banks_Array_Address(){return this->Banks;}
        Country* Country::Return_Country_Address(){return this;}
        void Country::Print_All_Registered_Banks(){
            cout <<"\n\n The Banks that are in "<<this->Country_Name<<" are:\n\n";
            for (int k = 0; k < this->Number_of_Banks; k++){
                cout <<" "<<Banks[k].Return_Bank_Name()<<"\n";
            }
            cout <<"\n\n";
        }