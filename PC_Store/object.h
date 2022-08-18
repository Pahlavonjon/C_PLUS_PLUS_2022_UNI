#ifndef object_H
#define object_H
#include <iostream>
#include <string>
using namespace std;

template<class type>
class object{
    private:
        type variable1;
        type variable2;
        type resultant;
    public:
        object():object(0,0){}
        object(type type1, type type2): variable1(type1), variable2(type2){}
        void print_result();
        type multiply();
};

// template<class type>
// object<type>::object(type type1, type type2): variable1(type1), variable2(type2){}

template<class type>
type object<type>::multiply(){
    resultant = variable1*variable2;
    return resultant;
}

template<class type>
void object<type>::print_result(){
    cout <<"\n\n The 2 variables are: "<<(variable1)<<" and "<<(variable2)<<"\n\n";
    cout << "\n\n Multiplication of the two variables gives: "<<multiply()<<"\n\n";
}
#endif