#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cassert>
#include "Client.h"
#include "Client_Account.h"
#include "Bank.h"
#include "Country.h"
#include "Planet.h"
// #include "ATM.h"
using namespace std;

        Planet::Planet(){}
        Planet::Planet(string Name, int Diameter, int Number_Nations){
            this->Planet_Name = Name;
            this->Planet_Diameter = Diameter;
            this->Number_Countries = Number_Nations;
            Nations = new Country[Number_Countries];
            Country_Index = 0;
            // Current_Number_Nations = 0;
        }
        bool Planet::Add_Country(Country Destination){
            if (Country_Index < Number_Countries){
                Nations[Country_Index] = Destination;
                Country_Index++;
                return true;
            }
            return false;
        }
        Planet* Planet::Return_Planet_Address(){return this;}
        int Planet::Return_Number_of_Countries(){return this->Country_Index;}
        Country* Planet::Return_Nations_Array_Address(){return this->Nations;}
        // bool Planet::Client_Account_Log_In(string* Username, string* User_Password){
        //     string logging_in_username = "";
        //     string logging_in_password = "";
        //     // bool logging_in_username_correct = false;
        //     // bool logging_in_password_correct = false;
        //     cout << "\n\n Enter your username:  ";
        //     cin >> logging_in_username;
        //     cout << "\n\n Enter your password:  ";
        //     cin >> logging_in_password;
        //     for (int k = 0; k < this->Number_Countries; k++){
        //         for (int g = 0; g < Nations[k].Return_Number_of_Banks(); g++){
        //             for (int f = 0; f < Banks[g].Return_Number_of_Clients(); f++){
        //                 for (int r = 0; r < Customers[f].Return_Client_Account_Limit(); r++){
        //                     if (logging_in_username == All_Client_Accounts[r].Return_Client_Account_Username() && logging_in_password == All_Client_Accounts[r].Return_Client_Account_Password()){
        //                         *Username = logging_in_username;
        //                         *User_Password = logging_in_password;
        //                         return true;
        //                     }
        //                 }
        //             }  // make a file and read and write a text file for progress
        //         }
        //     }
        //     return false; 
        // }
        bool Planet::Client_Account_Enter_Pin(){
            int loggin_in_pin = 0;
            cout << "\n Enter your account pin:  ";
            cin >> loggin_in_pin;
            for (int country_index = 0; country_index < Return_Number_of_Countries(); country_index++){
                Country* Countries = Return_Nations_Array_Address();
                Country& country = Countries[country_index];
                int bank_count = country.Return_Number_of_Banks();
                assert(bank_count >= 0);
                assert(bank_count < 100);
                for (int g = 0; g < bank_count; g++){
                    // cout << "g " << g << ((Return_Nations_Array_Address()[k]).Return_Number_of_Banks())<<"\n";
                    // cout <<"\n Number banks "<<(((Return_Nations_Array_Address())[g]).Return_Number_of_Banks()) << "\n";

                    cout <<"\n Number clients "<<(((Return_Banks_Array_Address())[g]).Return_Number_of_Clients());

                    // cout <<"\n\n\n this g"<< g<<"\n"<<(((Return_Banks_Array_Address())[g]).Return_Number_of_Clients())

                    // for (int f = 0; f < (((Return_Banks_Array_Address())[g]).Return_Number_of_Clients()); f++){

                    //     cout <<"\n Number clients "<<(((Return_Banks_Array_Address())[f]).Return_Number_of_Clients());
                        
                        // for (int r = 0; r < (Return_Customers_Array()[f]).Return_Number_of_Client_Accounts(); r++){
                        //     cout <<"\n this is the client pin"<<(((Return_All_Client_Accounts_Array())[r]).Return_Client_Account_Pin());
                            
                        //     if (loggin_in_pin == (((Return_All_Client_Accounts_Array())[r]).Return_Client_Account_Pin())){
                        //         // *User_Pin = loggin_in_pin;
                        //         return true;
                        //     }
                        // }
                    // } // ((Return_Banks_Array_Address())+f)->Return_Client_Account_Limit()
                }
            }
            return false;
        }

    // 1 planet // 2 Countries // 3 Banks // 4 Clients // 4 Client_Accounts

    // (Return_Planet_Address()+i)->(Return_Nations_Array_Address()+j)->(Return_Banks_Array_Address()+k)->(Return_Customers_Array()+l)->(Return_All_Client_Accounts_Array()+m)

        // bool Planet::Client_Account_Enter_Pin(){
        //     int loggin_in_pin = 0;
        //     cout << "\n Enter your account pin:  ";
        //     cin >> loggin_in_pin;
        //     for (int k = 0; k < Return_Number_of_Countries(); k++){
        //         for (int g = 0; g < (((Return_Nations_Array_Address())+k)->Return_Number_of_Banks()); g++){
        //             // cout <<"\n "<<(((Return_Nations_Array_Address())+k)->Return_Number_of_Banks());
        //             for (int f = 0; f < (((Return_Banks_Array_Address())+g)->Return_Number_of_Clients()); f++){
        //                 // cout <<"\n "<<(((Return_Banks_Array_Address())+g)->Return_Number_of_Clients());
        //                 for (int r = 0; r < Return_Client_Account_Limit(); r++){
        //                     cout <<"\n "<<(((Return_All_Client_Accounts_Array())+r)->Return_Client_Account_Pin());
        //                     if (loggin_in_pin == (((Return_All_Client_Accounts_Array())+r)->Return_Client_Account_Pin())){
        //                         // *User_Pin = loggin_in_pin;
        //                         return true;
        //                     }
        //                 }
        //             } // ((Return_Banks_Array_Address())+f)->Return_Client_Account_Limit()
        //         }
        //     }
        //     return false;
        // }

        // Nations[k].Return_Number_of_Banks();