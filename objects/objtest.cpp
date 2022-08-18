#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class LIBRARY{
    private:
        string Library_books[2][3] = {{"Horror", "Goosehumps","IT"}, {"Fantasy","LOTR","HP"}};
    public:
            // void Set_Library_books();
            void Show_Book_Names();
    };
    void LIBRARY::Show_Book_Names(){
            cout <<"\n The books in the libarary are: \n";
            for (int k = 0; k < 2; k++){
                for (int g = 0; g < 3; g++){
                    cout <<" "<<*(*(Library_books+k)+g);
                }
                cout <<"\n";  
            }
            cout <<"\n";
    }

int main(){
    LIBRARY BOOK_STORE; 
    BOOK_STORE.Show_Book_Names();
}


        // void Building_the_Library(int number_Types, int number_Books){
        //     **books = new string*[number_types]; // when and where to delete???
        //     for (int n = 0; n < number_books; n++){
        //         *(books+n) = new string[number_books];
        //     }

        //     for (int f = 0; f < number_types, f++){
        //         cout <<"Enter Book Genre: ";
        //         cin >> books[f][0];
        //         for (int g = 1; g < number_books; g++){
        //             cout <<"\n Enter book Name of this Genre: ";
        //             cin >> *(*(books+f)+g);
        //         }
        //     }
        // }
        

                // Library::Library_Request(string Book_Type, string Book_Name){
        //     char *user_request = new char[2];
        //     int user_request_inc = 0;
        //     for (int k = 0; k < 2; k++){
        //         if (Book_Type == *(books+k)){
        //             *(user_request+user_request_inc) = Book_Type;
        //             user_request_inc++;
        //             for (int j = 0; j < 3; j++){
        //                 if (Book_Name == *(*(books+k)+J)){
        //                     *(user_request+user_request_inc) = Book_Name;
        //                 }
        //             }
        //         }
                
        //     }
        //     return user_request;
        //     delete[] user_request;
        // }