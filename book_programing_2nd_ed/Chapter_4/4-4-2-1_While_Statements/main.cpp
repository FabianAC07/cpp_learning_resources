/*
    This is an exmaple demostrates ...

    "Try this:
    The character 'b' is char('a'+1), 'c' is char('a'+2), ect. Use a loop to write out 
    a table of characters with their corresponding integer values:
    
        a   97
        b   98
        ...
        z   122
    
    " [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 111, 2014.
    REF: https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){

    int i = 97;     // Initialize a counter i = to 97 or character 'a'

    while(i<=122){      // Stablish a condition for the while loop to run until i = 122
        cout << "Character: " << char(i) << "\t Decimal Value: " << i << "\n" << endl;       // Print the current character and it's number
        ++i;            // Increment i by 1 each iteration
    }

    return 0;

}