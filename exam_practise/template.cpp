#include <iostream>
#include <string>
#include <iomanip>
#include <stack>
// #include "object.h"
using namespace std;

// typedef object<double> object_type_double;
// typedef object<int> object_type_int;
// typedef object<float> object_type_float;
// typedef object<string> object_type_string;

template <typename t>
t Return_Square(t a_type){
    return a_type*a_type;
}

void template_test(void){
    // object_type_int object_int(5,5);
    // object_type_double object_double(5.9875,8.39847);
    // object_type_float object_float(5.48,6.98);
    // cout << "\n\n\n\n";
    // object_int.print_result();
    // object_double.print_result();
    // object_float.print_result();
    cout << "\n\n";
    cout <<" The square number is: "<<Return_Square<int>(6)<<"\n\n";
    cout <<" The square number is: "<<fixed<<setprecision(3)<<Return_Square<double>(8.37623434)<<"\n\n\n\n";
}

void test_stack_function(){
    stack<int> test_stack;
    for (int k = 0; k < 120; k++){
        test_stack.push(k);
    }
    cout << "\n\n The size of the stack is: "<< test_stack.size()<<"\n\n";
    cout << "\n\n The top of the stack is: "<< test_stack.top()<<"\n\n";
    test_stack.pop();
    test_stack.pop();
    cout << "\n\n The size of the stack is: "<< test_stack.size()<<"\n\n";
    cout << "\n\n The top of the stack is: "<< test_stack.top()<<"\n\n";
}

class test{
    private:
        int number = 0;
    public:
        test(){}
        void print_number(){
            cout << "\n\n The number is now: "<< number<<"\n\n";
        }
        int* return_number_address(){
            return &number;
        }
        void check_number(){
            if (number != 0){
                cout << "\n TRUE\n\n";
            }
        }
};

int main(void){
    // test Object;
    // int second_number;
    // *(Object.return_number_address()) = 2;
    // Object.check_number();
    // Object.print_number();
    // test_stack_function();
    template_test();
    return 0;
}