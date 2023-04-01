/*
    This is an exmaple demostrates the unsafe conversioon of int to char types [1]
    
    
    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 80, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){

    int a = 20000;
    char c = a;         // trying to squeeze a large int number into a small char
    int b = c ;

    if (a != b){
        cout << "Opps!: " << a << " != " << b << '\n';
    }
    else{
        cout << "Wow! We have large characters\n";
        cout << "a = " << a << ", then, c = " << c << ", and then, b = " <<  b << endl;
    }

    return 0;

}