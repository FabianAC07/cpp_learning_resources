/*
    This is an exmaple demostrates the use of unsafe conversions

    Try this:
    Run this program with a variety of inputs. Try small values (e.g., 2 and 3); try 
    large values (larger than 127, larger than 1000); try negative values; try 56; try 
    89; try 128; try non-integer values (e.g., 56.9 and 56.2). In addition to showing 
    hoe conversions from double to inr and convesiond from int to char are done on 
    yout machine, thius program shows tou whar character (if any) your machine will print
    for a given integer value.

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 81, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){ 

    double d {0};
    while (cin >> d){                       // repead the statments below as long as we type in numbers
        int i {d};                          // try to squeeze a double into an int 
        char c {i};                         // try to squeeze an int into char
        int i2 {c};                         // get the int value of the char

        cout << "d == " << d << endl;
        cout << "i == " << i << endl;
        cout << "i2 == " << i2 << endl;
        cout << "char(" << c << ")" << endl;

    }
    return 0;

}