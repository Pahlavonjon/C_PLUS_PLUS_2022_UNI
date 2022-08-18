#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Library{
    private:
        string books[2][3] = {{"Horror", "Goosehumps","IT"}, {"Fantasy","LOTR","HP"}};
        int book_stock[2][3] = {{2,1,1}, {2,1,1}};
    public:
        void Show_Book_Types();
        void Show_Book_Names(string Book_Type);
        void Print_Recipt(string *User_Book_Selection, string Book_Type);
        string* Library_Request(string Book_Type, string Book_Name);
        bool Check_Book_Stock(string Book_Type);
    };
    void Library::Show_Book_Types(){
            for (int k = 0; k < 2; k++){
                cout <<"\n "<<*(*(books+k)+0)<<",    Number of books in stock from this category: "<<*(*(book_stock+k)+0);
            }
            cout <<"\n";
    }
    void Library::Show_Book_Names(string Book_Type){
            if (Book_Type == *(*(books+0)+0)){
                for (int k = 1; k < 3; k++){
                    cout <<"\n "<< *(*(books+0)+k)<<",  Number of copies: "<<*(*(book_stock+0)+k);
                }
                cout <<"\n";
            }
            else {
            for (int k = 1; k < 3; k++){
                    cout <<"\n "<< *(*(books+1)+k)<<",  Number of copies: "<<*(*(book_stock+1)+k);
                }
                cout <<"\n";
            }
    }
    void Library::Print_Recipt(string *User_Book_Selection, string Book_Type){
            cout <<"\n You have borrowed "<< *(User_Book_Selection+1)<< " from category: "<< Book_Type<<" \n";
            cout <<" Enjoy!!!\n\n";
    }
    string* Library::Library_Request(string Book_Type, string Book_Name){
            string *user_request = new string[2];
                int user_request_inc = 0;
                bool user_request_complete = false;
                while (user_request_complete == false){
                for (int k = 0; k < 2; k++){
                    if (Book_Type == *(*(books+k)+0) && *(*(book_stock+k)+0) != 0){
                        *(user_request+user_request_inc) = Book_Type;
                        *(*(book_stock+k)+0) -= 1;
                        user_request_inc++;
                        for (int j = 0; j < 3; j++){
                            if (Book_Name == *(*(books+k)+j) && *(*(book_stock+k)+j) != 0){
                                *(user_request+user_request_inc) = Book_Name;
                                *(*(book_stock+k)+j) -= 1;
                                user_request_complete = true;
                            }
                            else if (Book_Name == *(*(books+k)+j) && *(*(book_stock+k)+j) == 0){
                                bool Book_Name_Status = false;
                                while (Book_Name == *(*(books+k)+j) && *(*(book_stock+k)+j) == 0 && Book_Name_Status == false){
                                    cout <<"\n This book is out of stock!   Select a different book!\n";
                                    cin >> Book_Name;
                                    if (Book_Name != *(*(books+k)+j)){
                                        Book_Name_Status = true;
                                    }
                                }
                            }
                        }
                    }
                    else if (Book_Type == *(*(books+k)+0) && *(*(book_stock+k)+0) == 0){
                        bool Book_Type_Status = false;
                        while (Book_Type == *(*(books+k)+0) && *(*(book_stock+k)+0) == 0 && Book_Type_Status == false){
                            cout <<"\n This book genre is out of stock!   Select a different genre!\n";
                            for (int k = 0; k < 2; k++){
                            cout <<"\n "<<*(*(books+k)+0)<<",    Number of books in stock from this category: "<<*(*(book_stock+k)+0);
                            }
                            cout <<"\n";
                            cin >> Book_Type;
                            if (Book_Type != *(*(books+k)+0)){
                                Book_Type_Status = true;
                            }
                        }
                    }
                }
                }
            return user_request;
            delete[] user_request;
    }
    bool Library::Check_Book_Stock(string Book_Type){
        for (int k = 0; k < 2; k++){
            if (Book_Type == *(*(books+k)+0) && *(*(book_stock+k)+0) == 0){
                return false;
                }
            }
            return true;
    }
    
int main(){
    Library My_Library;
    string Book_type;
    string Book_name;
    string Done_Borrowing;
    cout <<"\n Welcome to the Libarary! Select book Type: \n";
    bool user_finished_borrowing = false;
    while (user_finished_borrowing == false){
        My_Library.Show_Book_Types();
        cout <<"\n";
        cin >> Book_type;
        bool In_Stock = My_Library.Check_Book_Stock(Book_type);
        while (In_Stock == false){
            My_Library.Show_Book_Types();
            cout <<"\n";
            cin >> Book_type;
            In_Stock = My_Library.Check_Book_Stock(Book_type);
        }
        cout <<"\n Select book Name: \n";
        My_Library.Show_Book_Names(Book_type);
        cout <<"\n";
        cin >> Book_name;

        string* borrowing = My_Library.Library_Request(Book_type,Book_name);
        My_Library.Print_Recipt(borrowing,Book_type);
        cout << "\n Done borrowing??? y/n\n";
        cin >> Done_Borrowing;
        if (Done_Borrowing == "y"){
            user_finished_borrowing = true;
        }
    }
    //string letter = "ßa";
}