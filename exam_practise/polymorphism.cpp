#include <iostream>
#include <string>
#include <random>
#include <stack>
#include <array>
#include <ctime>
using namespace std;


class Player {
    private:
        int player_score[2][3] = {0};
    public:
        virtual void move() = 0;
        virtual string getMove() = 0;
        virtual string Return_Name() = 0;
        virtual int* Return_Score_Address() = 0;
        string ROCK_PAPER_SCISSORS[3] = {"rock","paper","scissors"};
        void win(Player* opponent){
            if (*(opponent->Return_Score_Address()) == 3){
                cout << "\n\n " << opponent->Return_Name() << " has won!\n\n";
            }
        }
};
class Computer : public Player {
    private:
        string Computer_name = "Computer";
        string the_computer_move = "";
        int Computer_score = 0;
    public:
        void move(){
            srand(time(0));
            the_computer_move = ROCK_PAPER_SCISSORS[rand()%3];
        }
        string getMove(){
            return the_computer_move;
        }
        Computer* Return_Computer_Address(){
            return this;
        }
        int* Return_Score_Address(){
            return (&Computer_score);
        }
        string Return_Name(){
            return this->Computer_name;
        }

};
class Person : public Player {
    private:
        string Player_name = "Player";
        string the_person_move = "";
        int Person_score = 0;
    public:
        void move(){
            cout << "\n\n Enter rock, paper or scissors . . . r,p,s\n";
            cin >> the_person_move;
            if (cin.fail()){
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                the_person_move = "";
            }
        }
        string getMove(){
            return the_person_move;
        }
        Person* Return_Person_Address(){
            return this;
        }
        int* Return_Score_Address(){
            return (&Person_score);
        }
        string Return_Name(){
            return this->Player_name;
        }
};

template <typename data_type>
data_type Return_Data_Type(data_type Variable){
    return Variable*Variable;
}
// int* add_one(int x){
//     x = x + 1;
//     return &x;
// }
int* add_one_from_x(const int x){
    int res = x + 1;
    int* h = new int;
    *h = res;
    return h;
}
void test_1(){
    int x = 100;
    int *p = add_one_from_x(x);
    cout << "\n\n value of p* is "<<*p<<"\n\n";
    cout << "\n\n "<<Return_Data_Type<int>(89)<<"\n\n";
}
void test_2(){
    int number = 1;
    int length = 10;
    int* number_address;
    number_address = &number;
    cout << "\n\n Number is now: "<<number<<"\n\n";
    cout << "\n\n Number Address is now: "<<number_address<<"\n\n";
    number_address = &length;
    cout << "\n\n Number Address is now: "<<number_address<<"\n\n";
    number_address = &number;
    cout << "\n\n Number Address is now: "<<number_address<<"\n\n";
}
void loop(){

    int rows = 2;
    int a[rows][rows] = {{1,2},{3,4}};
 
    for (int k = 0; k < rows; k++){
        for (int j = 0; j < rows; j++){
            cout << *(a[k]+j)<<" ";
        }
    }
    cout <<"\n\n"<<a[0];
}
void test_3(){
    // int ****** ****** A_Pointer_Array; use a for loop and use name_array[k] = new type*[]
    int rows = 2;
    int cols = 6;
    int height = 1;


    int* array[5];

    // int *** A_Pointer_Array = new int**[height];
    // for (int k = 0; k < rows; k++){
    //     for (int j = 0; j < cols; j++){
    //         (*(A_Pointer_Array+k)) = new int*[cols];
    //     }
    // }
    // for (int k = 0; k < rows; k++){
    //     for (int j = 0; j < cols; j++){
    //         for (int h = 0; h < 1; h++)
    //         (*(*(A_Pointer_Array+k)+j)) = new int[1];
    //     }
    // }

    // int ** Pointer_Array = new int*[rows];
    // for (int k = 0; k < rows; k++){
    //     Pointer_Array[k] = new int***[rows];
    // }
    // for (int k = 0; k < rows; k++){
    //     cout <<"\n\n"<<Pointer_Array[k]<<"\n\n";
    // }

    for (int k = 0; k < 5; k++){
        cout << " "<<array[k];
    }
    cout << "\n\n";

    int* first_pointer = &height;
    array[2] = first_pointer;

    for (int k = 0; k < 5; k++){
        cout << " "<<array[k];
    }
    cout << "\n\n";

    // for (int k = 0; k < rows; k++){
    //     for (int j = 0; j < cols; j++){
    //         cout << " "<<(*(*(*A_Pointer_Array+k)+j)+0);
    //     }
    //     cout << "\n";
    // }
}
void test_4(){
    int *length = new int;
    *length = 10;
    int* length_pointer = new int; 
    length_pointer = length;
    cout << " Length poinder address "<<length_pointer<<"\n\n";
    delete length;
    cout << " Length poinder address "<<length_pointer<<"\n\n";
    cout << " Length poinder address "<<*length_pointer<<"\n\n";
    cout << " Length poinder address "<<*length<<"\n\n";
}


class A{
    private:
        int* x;
    public:
        A(int number) { x = new int;}
        A():A(0){cout << " default constructor is called!!!!";}
        void set_x(int number){*x = number;}
        int get_x(){return *x;}
        ~A(){delete x;}
};
class C{
    protected:
        int a;
    public:
        C(int aa):a(aa){}
        C():C(100){}
        int get_c() const {return a;}
};
class B : public C{
    private:
        double ra;
    public:
        B():ra(1){}
        double foo(){return ra*a;}
};






class one{
    public:
        virtual void print(){
            cout << "\n This is one\n";
        }
};
class two : public one{
    public:
        void print(){
            cout << "\n This is two\n";
        }
};
class three : public two{
    public:
        void print(){
            cout << "\n This is three\n";
        }
};
class four : public three{
    public:
        void print(){
            cout << "\n This is four\n";
        }
};
class five : public four{
    public:
        void print(){
            cout << "\n This is five\n";
        }
};


void super_inheritance_test(one* the_class){
    the_class->print();
}


void test_6(){
    one first;
    super_inheritance_test(&first);
    two second;
    super_inheritance_test(&second);
    three third;
    super_inheritance_test(&third);
    four fourth;
    super_inheritance_test(&fourth);
    five fifth;
    super_inheritance_test(&fifth);
}


void test_5(){
    // double* double_number = new double;
    // *double_number = 10.765;
    // double* Pointer = new double;
    // Pointer = double_number;
    // delete Pointer;
    // cout << *double_number<<"\n";

    double double_number;
    double* Pointer = new double;
    Pointer = &double_number;
    delete Pointer;
    cout << double_number<<"\n";


    // A a;
    // a.set_x(100);
    // cout << a.get_x()<<"\n\n";

    // A* a = new A(100);
    // a->set_x(100);
    // cout << a->get_x()<<"\n\n";
}

template<class k>
class Point{
    private:
        k first = 0;
    public:
        Point(k first){this->first = first;}
        k return_k(){
            return this->k;
        }
};
void test_7(int* pointer, int i){
    pointer[i] = 2;
}

int main(void){
    cout << "\n\n";
    int array[3] = {2,1,3};
    test_7(array,1);
    for (int k = 0; k < 3; k++){
        cout << " "<<array[k];
    }
    cout << "\n\n";

    return 0;
}