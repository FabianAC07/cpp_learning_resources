/*
    This is an exmaple demostrates ...

    "Try this:
    Implement square() witout using the multiplication oprator; that is, do the 
    x*x by repeated addition (start a variable results at 0 and add x to it x times).
    Then run some version of the "fisrt program" using that square()." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 116, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int square(int x){
    int x_squared = 0;

    for (int i = 0; i <= x-1; ++i){
        // cout << "Iter: " << i << endl; 
        x_squared += x;
        // cout << "Squared: " << x_squared << endl;          
    }

    return x_squared;
}

int main(){

    cout << "This script provides the square of a given number, with out using the multiplication operator [*]" << endl;
    cout << "\nInput an integer number to calculate the square: " ;
    
    int x {0};      // x will be out number to square... 
    
    cin >> x;

    // cout << "The given value is: " << x << endl;     // Check if the variable is taking the input value

    /* This is the part that goes into the function square (delcared above)...

    int x_squared = 0;  // variable to store the squared value of x

    for (int i = 0; i <= x-1; ++i){
        cout << "Iter: " << i << endl; 
        x_squared += x;
        cout << "Squared: " << x_squared << endl;          
    }

    */

    // cout << "Given number: " << x << "\t Given number squared: " << x_squared << "\n" << endl; 

    int x_squared = square(x);

    cout << "\n\nGiven number: " << x << "\t Given number squared: " << x_squared << "\n" << endl; 


    return 0;

}