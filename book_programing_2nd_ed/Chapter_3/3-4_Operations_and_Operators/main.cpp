/*
    This script explains the usage of operators and operations

    "Try this:
    Get this litte program to run. Then modify it to read an int rather than a double. 
    Note that sqrt() of an int returns a double rather than an int. Also, "excercise" 
    some other operations. Note that for ints / is inteher division and % is remainder
    (modulo), so that 5/2 is 2 (and not 2.5 or 3) and 5%2 is 1. The definitions of
    integer *, /, and % guarantee that for two positive ints a and be we have 
    a/b * b + a%b == a." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 68, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){
    cout << "Please enter a floating-point value: " << endl;
    double double_n; 
    cin >> double_n;
    cout << "The number you have entered is defined as n == " << double_n << endl;
    cout << "\nn+1 == " << double_n+1 << endl;
    cout << "\nthree times n == " << double_n*3 << endl;
    cout << "\ntwice n == " << double_n+double_n << endl;
    cout << "\nn squared == " << double_n*double_n << endl;
    cout << "\nhalf of n == " << double_n/2 << endl;
    cout << "\nsquare root of n == " << sqrt(double_n) << endl;
    cout << "\n----- end of line -----" << endl << endl;

    // Now let's do the same but for integers
    cout << "\nPlease enter an integer value: " << endl;
    int int_n; 
    cin >> int_n;
    cout << "The number you have entered is defined as n == " << int_n << endl;
    cout << "\nn+1 == " << int_n+1 << endl;
    cout << "\nthree times n == " << int_n*3 << endl;
    cout << "\ntwice n == " << int_n+int_n << endl;
    cout << "\nn squared == " << int_n*int_n << endl;
    cout << "\nhalf of n == " << int_n/2 << endl;
    cout << "\nsquare root of n == " << sqrt(int_n) << endl;
    cout << "\nremainder (modulo) of n == " << int_n % 2 << endl;
    cout << "\n----- end of line -----" << endl << endl;


    return 0;

}