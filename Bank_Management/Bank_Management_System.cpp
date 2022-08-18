#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;
class Client{
    private:
        string Client_Name;
        int Client_Age;
        Client_Account* All_Client_Accounts;
        int All_Client_Accounts_Index;
        int Account_Limit;  // this will be passed from the bank when the bank is created
        // double Client_Account_Money;
        string Client_Email[30];
    public:
        Client(){}
        Client(string Name, int Age, int Account_Limit){ 
            this->Client_Name = Name;
            this->Client_Age = Age;
            this->Account_Limit = Account_Limit;
            All_Client_Accounts = new Client_Account[this->Account_Limit];
            All_Client_Accounts_Index = 0;
        }
        bool Add_Client_Accounts(Client_Account New_Client_Account){
            if (All_Client_Accounts_Index < Account_Limit){
                All_Client_Accounts[All_Client_Accounts_Index] = New_Client_Account;
                All_Client_Accounts_Index++;
                return true;
            }
            return false;
        }
        string Return_Client_Name(){return this->Client_Name;}
        bool Delete_Client_Account(string Client_Account_Type){
            for (int k = 0; k < this->Account_Limit; k++){
                if (Client_Account_Type == ALL_Client_Accounts[k].Return_Client_Account_Type()){
                    ALL_Client_Accounts[k].~Client_Account();
                    return true;
                }
            }
            return false;
        }
        time_t Now = time(0);
        char* Current_Time = ctime(&Now);
        int Transaction_History_Limit = 20;
        char** Transaction_Times = new char*[Transaction_History_Limit];
        int Transaction_Times_Index = 0;
        char* Get_Current_Time(){
            time_t Now = time(0);
            char* Current_Time = ctime(&Now);
            return Current_Time;
        }
};
class Client_Account : public Client{
    private:
        string Client_Account_Name = Client::Client_Name;
        int Client_Account_Age = Client::Client_Age;
        int Client_Account_ID = 0;// square of the name letters
        string Client_Account_Type;
        string Client_Account_Username;
        string Client_Account_Password; // this pin is need for logging into the account
        int Client_Account_Pin; // this pin is needed for transferring or withdrawing money
        double Client_Account_Balance; // what if the user forgetts password?  might need the user to verify phone number and then renew password. 
    public: 
        Client_Account(){}
        void Set_Account(){
            cout << "\n\n Enter account Username: \n ";
            cin >> Client_Account_Username;
            cout << "\n Enter account Password: \n ";
            cin >> Client_Account_Password;
            cout << "\n Enter account Pin: \n ";
            cin >> Client_Account_Pin;
            cout << "\n Enter account Type: savings/other \n ";
            cin >> Client_Account_Type;
        }
        bool Client_Account_Deposit_Money(double ATM_Deposit){
            while (ATM_Deposit < 0){
                cout <<"\n Error . . .   Re-enter deposit: \n $";
                cin >> ATM_Deposit;
                if (ATM_Deposit > 0){
                    break;
                }
            }
            this->Client_Account_Balance += ATM_Deposit;
            return true;
        }
        bool Client_Account_Withdraw_Money(){
            double money_to_be_withdrawed = 0;
            cout <<"\n Enter amount to withdraw:  $";
            cin >> money_to_be_withdrawed;
            while ( (this->Client_Account_Balance -= money_to_be_withdrawed) < 0){
                cout << " Not enough funds . . . try again  $";
                cin >> money_to_be_withdrawed;
            }
            this->Client_Account_Balance -= money_to_be_withdrawed;
            return true;
        }
        void Client_Account_Print_Withdrawal(double Money_Withdrawed){
            cout << "\n\n";
            cout << " Bank Receipt\n\n";
            cout << " Name: "<<this->Client_Account_Name<<"\n";
            cout << " Amount withdrew: "<<Money_Withdrawed<<"\n\n";
            // cout << " Transaction id: "<< Transaction id<<"\n";
            cout << " Time of withdrewal "<<Client::Get_Current_Time()<<"\n\n\n";
        }
        void Show_Client_Homepage(){
            cout <<"\n                                                  "<<Client::Get_Current_Time()<<"\n\n";
            cout <<"\n\n\n Welcome "<<Client_Name<<"\n\n";
            cout <<"\n\n  Your Balance is: $"<<Client_Account_Balance<<"\n\n\n";
            cout <<" Transactions History\n\n";
            cout <<" BPay\n\n";
            cout <<" Withdraw\n\n";
            cout <<" Deposit\n\n\n\n";
        } // must include all user transactions along with the time and the recipient details
        bool Client_Account_Log_In(Client* The_User){
            string logging_in_username = "";
            string logging_in_password = "";
            // bool logging_in_username_correct = false;
            // bool logging_in_password_correct = false;
            cout << "\n\n Enter your username:  ";
            cin >> logging_in_username;
            cout << "\n\n Enter your password:  ";
            cin >> logging_in_password;
            for (int r = 0; r < (*(The_User)).Customers[f].Return_Client_Account_Limit(); r++){
                if (logging_in_username == All_Client_Accounts[r].Return_Client_Account_Username() && logging_in_password == All_Client_Accounts[r].Return_Client_Account_Password()){
                    return true;
                }
            }
            return false; 
        }
        bool Client_Account_Log_Out(){return true;}
        bool Client_Account_Enter_Pin(){
            int loggin_in_pin = 0;
            cout << "\n Enter your account pin:  ";
            cin >> loggin_in_pin;
            for (int k = 0; k < this->Number_Countries; k++){
                for (int g = 0; g < Nations[k].Return_Number_of_Banks(); g++){
                    for (int f = 0; f < Banks[g].Return_Number_of_Clients(); f++){
                        for (int r = 0; r < Customers[f].Return_Client_Account_Limit(); r++){
                            if (loggin_in_pin == All_Client_Accounts[r].Return_Client_Account_Pin()){
                                return true;
                            }
                        }
                    }
                }
            }
            return false;
        }
        void Client_Account_Money_Transfer(double Money_Being_Transferred, Country *Recepient_Destination, Country *Sender_Destination, Client_Account *Recipient_Account, Client_Account *Sender_Account){
        // bool Logged_in = false;
        // bool Money_Deposit_Status = false;
        // bool BPay = false;
        // double Money_Deposit = 0;
        double Money_Being_Transferred = 0;
        string Log_in_name = "";
        string Log_in_password = "";
        string Repecient_name = "";
        cout <<"\n\n Enter username"
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
                        BPay = (*(Account)).BPay(Money_BPay,&(*(Receiver)->Return_Object_Address()));
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
        void Client_Account_Print_Transaction(double Money_Being_Transferred, string Username, Client_Account *Account, Client_Account *Receiver){
            cout << "\n\n";
            cout << " Bank Receipt\n\n";
            cout << " Sender: "<<(*Account).Client_Account_Name<<"\n";
            cout << " Recipient: "<<(*Receiver).Client_Account_Name<<"\n";
            cout << " Amount paid $"<<Money_Being_Transferred<<"\n\n\n";
            cout << " Time of transaction: "<<Client::Get_Current_Time()<<"\n\n\n";
        }
        string Return_Client_Account_Type(){return this->Client_Account_Type;}
        string Return_Client_Account_Username(){return this->Client_Account_Username;}
        string Return_Client_Account_Password(){return this->Client_Account_Password;}
        int Return_Client_Account_Pin(){return this->Client_Account_Pin;}
        Client_Account* Return_Client_Account_Address(){return this;}
        ~Client_Account(){
            Client_Account_Name = "";
            Client_Account_Age = 0;
            Client_Account_ID = 0;
            Client_Account_Type = "";
        }
};
class Bank{
    private:
        string Bank_Name;
        int Bank_Database_Capacity;
        int Bank_Database_Backup; // all the data must be recovered incase of memory leak
        double Bank_Money_Capacity;
        int Client_Account_Limit; // 2
    public:
        Client* Customers;
        int Number_of_Customers;
        int Customers_Index;
        Client_Account *ALL_Bank_Clients;
        int Bank_Array_index;
        Bank(){}
        Bank(string Name, int Capacity, int Client_Account_Limit){
            this->Client_Account_Limit = Client_Account_Limit;
            Bank_Name = Name;
            Customer_Index = 0;
            Number_of_Customers = Capacity;
            Customers = new Client[Number_of_Customers];
        }
        bool Add_Client(Client Customer){
            if (Customer_Index < Number_of_Customers){
                Customers[Customers_Index] = Customer;
                Customer_Index++;
                return true;
            }
            return false;
        }
        int Return_Number_of_Clients(){return this->Number_of_Customers;}
        string Return_Bank_Name(){return this->Bank_Name;}
        int Return_Client_Account_Limit(){return this->Client_Account_Limit;}
        Bank* Return_Bank_Address(){return this;}
        ~Bank(){}
};
class Country{
    private:
        string Country_Name;
        int Number_of_Banks;
        Bank* Banks;
        int Banks_Index;
    public:
        Country(){}
        Country(string Name, int Number_of_Banks){
            this->Country_Name = Name;
            this->Number_of_Banks = Number_of_Banks;
            Banks = new Bank[Number_of_Banks];
            Banks_Index = 0;
        }
        int Return_Number_of_Banks(){return this->Number_of_Banks;}
        bool Add_Bank(Bank This_Bank){
            if (Banks_Index < Number_of_Banks){
                Banks[Banks_Index] = This_Bank;
                Banks_Index++;
                return true;
            }
            return false;
        }
        Country* Return_Country_Address(){return this;}
        void Print_All_Registered_Banks(){
            cout <<"\n\n The Banks that are in "<<this->Country_Name<<" are:\n\n";
            for (int k = 0; k < this->Number_of_Banks; k++){
                cout <<" "<<Banks[k].Return_Bank_Name()<<"\n";
            }
            cout <<"\n\n";
        }
};
class Planet{
    private:
        string Planet_Name;
        int Planet_Diameter;
        int Number_Countries;
        Country* Nations;
        int Country_Index;
    public:
        Planet(){}
        Planet(string Name, int Diameter, int Number_Nations){
            this->Planet_Name = Name;
            this->Planet_Diameter = Diameter;
            this->Number_Countries = Number_Nations;
            Nations = new Country[Number_Countries];
            Country_Index = 0;
            Current_Number_Nations = 0;
        }
        bool Add_Country(Country Destination){
            if (Country_Index < Number_Countries){
                Nations[Country_Index] = Destination;
                Country_Index++;
                return true;
            }
            return false;
        }
        Planet* Return_Planet_Address(){return this;}
        bool Client_Account_Log_In(string* Username, string* User_Password){
            string logging_in_username = "";
            string logging_in_password = "";
            // bool logging_in_username_correct = false;
            // bool logging_in_password_correct = false;
            cout << "\n\n Enter your username:  ";
            cin >> logging_in_username;
            cout << "\n\n Enter your password:  ";
            cin >> logging_in_password;
            for (int k = 0; k < this->Number_Countries; k++){
                for (int g = 0; g < Nations[k].Return_Number_of_Banks(); g++){
                    for (int f = 0; f < Banks[g].Return_Number_of_Clients(); f++){
                        for (int r = 0; r < Customers[f].Return_Client_Account_Limit(); r++){
                            if (logging_in_username == All_Client_Accounts[r].Return_Client_Account_Username() && logging_in_password == All_Client_Accounts[r].Return_Client_Account_Password()){
                                *Username = logging_in_username;
                                *User_Password = logging_in_password; // user enters the password in the main and pass by reference is used
                                return true;
                            }
                        }
                    }
                }
            }
            return false; 
        }
        bool Client_Account_Enter_Pin(int* User_Pin){
            int loggin_in_pin = 0;
            cout << "\n Enter your account pin:  ";
            cin >> loggin_in_pin;
            for (int k = 0; k < this->Number_Countries; k++){
                for (int g = 0; g < Nations[k].Return_Number_of_Banks(); g++){
                    for (int f = 0; f < Banks[g].Return_Number_of_Clients(); f++){
                        for (int r = 0; r < Customers[f].Return_Client_Account_Limit(); r++){
                            if (loggin_in_pin == All_Client_Accounts[r].Return_Client_Account_Pin()){
                                *User_Pin = loggin_in_pin;
                                return true;
                            }
                        }
                    }
                }
            }
            return false;
        }
};
class Bank_Card : private Client_Account, public Client{
    private:
        string Bank_Card_Name = Client_Account_Name;
        int Bank_Card_Number;
    public: 
        Bank_Card(){}
        Bank_Card* Return_Bank_Card_Address(){return this;}
};
class ATM_Machine : public Bank, public Client_Account, private Planet{
    private:
        string ATM_Bank;
        int ATM_Total_Cash;
    public:
        ATM_Machine(){}
        ATM_Machine* Return_ATM_Machine_Address(){return this;}
        bool ATM_Withdraw_Cash(string Name, string Account_Type ,double Modey_Withdrawal, Bank* Bank_Branch){
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
                            while ((this->Client_Account_Balance -= money_to_be_withdrawed) < 0){
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
};
// class Curreny{
//     private:
//         string Currency_Name;
//         int Inflation;
//     public:
//         Currency* Return_Currecy_Address(){return this;}
// };
// class Bank_Database : public Bank{};
void Clear_Terminal(){cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
int main(){
    // Setting the World
    Planet Earth("Earth", 6400, 4);
    Country Down_Under("Australia", 7); // AUD
    Country Deustchland("Germany", 3);  // Euro
    Country Kiwi("New Zealand", 1);     // NZD
    Country Britian("United Kingdom", 2); // Sterling Pound
    Bank CommonWealth("CommonWealth", 5, 2);
    Bank ANZ("ANZ", 5, 2);
    Bank Deutsche_Bank("Deutsche Bank", 3, 2);
    Bank Bank_of_England("Bank of England", 3, 2);
    Bank Bank_of_Auckland("Bank of Auckland", 3, 2);
    Client John("John", 19, CommonWealth.Return_Client_Account_Limit());
    Client_Account John_Savings();
    Client_Account John_Checkings();
    John_Savings.Set_Account();
    John_Checkings.Set_Account();
    Client George("George", 53, Bank_of_Auckland.Return_Client_Account_Limit());
    Client_Account George_Savings();
    George_Savings.Set_Account();
    Client Dennis("Dennis", 29, Bank_of_England.Return_Client_Account_Limit());
    Client_Account Dennis_Savings();
    Dennis_Savings.Set_Account();
    Client Rubin("Rubin", 37, Deutsche_Bank.Return_Client_Account_Limit());
    Client_Account Rubin_Savings();
    Rubin_Savings.Set_Account();
    CommonWealth.Add_Client(John);
    Bank_of_England.Add_Client(Dennis);
    Deutsche_Bank.Add_Client(Rubin);
    Bank_of_Auckland.Add_Client(George);
    Down_Under.Add_Bank(CommonWealth);
    Down_Under.Add_Bank(ANZ);
    Deustchland.Add_Bank(Deutsche_Bank);
    Britian.Add_Bank(Bank_of_England);
    Kiwi.Add_Bank(Bank_of_Auckland);
    Down_Under.Print_All_Registered_Banks();
    Deustchland.Print_All_Registered_Banks();
    Earth.Add_Country(Down_Under);
    Earth.Add_Country(Deustchland);
    Earth.Add_Country(Kiwi);
    Earth.Add_Country(Britian);
    string User_NAME = "";
    string User_PASSWORD = "";
    int User_PIN = 0;
    bool logged_in = Earth.Client_Account_Log_In(&User_NAME, &User_PASSWORD);
    while (logged_in == false){
        logged_in = Earth.Client_Account_Log_In(&User_PIN);
    }
}