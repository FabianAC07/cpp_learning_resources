/*
    This program outputs the message
    Hello, programming!
    Here we go!

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 55-56, 2014.
*/ 

#include "../../Utils/headers/std_lib_facilities.h"

int main()          // C++ programs strat by executing the function main
{
    std::cout << "Hello, programing!\n" << endl;    // output "Hello, programming!"
    std::cout << "Here we go!\n" << endl;           // ourput "Here we go!"
    keep_window_open();         // Wait for a character to be entered
    return 0;
}