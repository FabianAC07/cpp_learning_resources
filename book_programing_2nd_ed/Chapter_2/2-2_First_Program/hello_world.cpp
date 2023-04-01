/*
    This script shows how to print "Hello, World!"
    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 45, 2014.
*/

// This program outputs the message "Hello, World!" to the monitor 

#include "../../Utils/headers/std_lib_facilities.h"

int main()          // C++ programs strat by executing the function main
{
    cout<<"Hello, World!\n";    // output "Hello, World!"
    keep_window_open();         // Wait for a character to be entered
    return 0;
}