#include <iostream>
#include <string>
#include "Bank.h"  // CommonWealth, Zürich_Bank
// #include "Client.h"
#include "Client_Account.h"
#include <iomanip>
// #include "Currency.h"

// missing features like notification when money is deposited or spent, a mail to store emails from the bank

// must have different error code for each regional money transfer failure
void Money_Transfer(string Username, Client_Account &(*Account), Client_Account &(*Receiver)){
    bool Logged_in = false;
    bool Money_Deposit_Status = false;
    bool BPay = false;
    double Money_Deposit = 0;
    double Money_BPay = 0;
    string Log_in_name = "";
    string Log_in_password = "";
    string Repecient_name = "";

    while (Logged_in == false){
        cout <<"\n "<<Username<<" enter your password: ";
        cin >> Log_in_password;
        Logged_in = (*(Account)).Log_in(Username,Log_in_password);
        while (Logged_in = true){
            (*(Account)).Show_My_Details();
            cout <<"\n Deposit money into account: $";
            cin >> Money_Deposit;
            Money_Deposit_Status = (*(Account)).Create_Account(Money_Deposit);
            if (Money_Deposit_Status == true){
                while (BPay == false){
                    cout <<"\n Enter amount to be transferred: $";
                    cin >> Money_BPay;
                    BPay = (*(Account)).BPay(Money_BPay,&(*(Receiver).Return_Object_Address()));
                    if (BPay == true){
                        cout <<"\n Your transaction is complete . . .\n";
                        break;
                    }
                    else{
                        cout <<"\n Your transaction was cancelled!\n";
                        break;
                    }
                }
            }
            break;
        }
    } 
}

using namespace std;

int main(){
    string Sender_name = "";
    string Log_in_password = "";
    string Recipient_name = "";
    // description function required 
    // licencing?
    bool Logged_in = false;
    double Money_Deposit = 0;
    double Money_BPay = 0;
    bool Account_Money_Deposit = false;
    bool BPay = false;
    // must ask for 
    Client_Account George("George",23,"3/12/1999");
    George.Set_Pin();
    Client_Account Wilson("Wilson",45,"4/8/1977");
    Wilson.Set_Pin();
    Client_Account Gary("Gary",37,"1/27/1985");
    Client_Account *Gary_address = Gary.Return_Object_Address();
    Gary.Set_Pin();
    
    Bank CommonWealth("CommonWealth",3); // ANZ;
    CommonWealth.Add_Client(George);
    CommonWealth.Add_Client(Gary);
    CommonWealth.Add_Client(Wilson);

    cout <<"\n Who needs to send money?\n";
    cin >> Sender_name;
    for (int k = 0; k < 3; k++){
        if (CommonWealth.ALL_Bank_Clients[k].Account_Name == Sender_name){
            cout <<"\n Who is the recipient? ";
            cin >> Recipient_name;
            for (int g = 0; g < 3; g++){
                if (CommonWealth.ALL_Bank_Clients[g].Account_Name == Recipient_name){
                    Money_Transfer(Sender_name,&(CommonWealth.ALL_Bank_Clients[k]),&(CommonWealth.ALL_Bank_Clients[g]));
                }
            }
        }
    }
    
    cout <<"\n\n\n\n\n\n\n\n\n\n";
    George.Show_My_Details();
    Gary.Show_My_Details();
    Wilson.Show_My_Details();

}





void Manage_Bank_Database();

        bool Delete_Client(); // polymorphism

        bool Send_Welcome_Letter(); // to Client Email

        bool Transfer_Money_Overseas(); // transaction fee

        bool Encrypt_Database();

        bool Make_ATM();

        bool Put_Cash_in_ATM(); // exchange rate?

        float Calculate_Exchange_Rate() // aud to usd

        bool Set_Exchange_Rates();

        bool Detect_Malicious_Behavior();

        bool Sieze_Client(); // the account is locked under police investigation 

        bool Lock_Clientt(); // if the account is stolen or seems to have been hacked 
        
        bool Unlock_Client(); // must be able to encrypt user

        void Recover_Lost_Account();

        void HELP();

        void Show_Client_Email();

        bool Client_Email_Notification();

        bool Merge_Client_Accounts();

        void Show_Transaction_History(){
            cout <<"\n\n The transaction history for this account is: \n\n";
            for (int k = 0; k < Transaction_History_Limit; k++){
                Transaction_Times
            }
        }

        void Show_Bank_Homepage(){
            cout <<"Welcome << Name<< the time is: "<<Time;
            cout <<
        } // may require function pointers

        void Get_User_Account_Details(){
        cout <<""; // must get the user account password and pins 
}




















// #include "Universes.h"  // interstellar currency transmission
// #include "Universe.h"  //  Our universe
// #include "Galaxy.h"    // Milky Way
// #include "Solar_System.h" // our solar system
// #include "Planet.h"  // Earth, Moon, Mars
// #include "Country.h" // Australia, Deustchland, Schwiez, Osterreich