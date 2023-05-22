/*
    This is an exmaple demostrates ...

    "Try this:
    Rewrite the character value example from the previous Try this [2] to use a 
    for-statement. Then modify your program to also wtite out a table of the 
    integer values for uppercase letters and digits." [1]

    "Try this:
    The character 'b' is char('a'+1), 'c' is char('a'+2), ect. Use a loop to write out 
    a table of characters with their corresponding integer values:
    
        a   97
        b   98
        ...
        z   122
    
    " [2]

    REF: [1-2] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 111,113, 2014.
    REF: https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg

    NOTE: Uppercase characters: 

        A   65
        ...
        Z   90
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){

    cout << "Lowercase Characters ---------------------------------- \n\n" << endl;

    for (int i = 65; i <= 90; ++i){
        cout << "Character: " << char(i) << "\t Decimal Value: " << i << "\n" << endl;       
    }

    cout << "\n\nUppercase Characters ---------------------------------- \n\n" << endl;

    for (int i = 97; i <= 122; ++i){
        cout << "Character: " << char(i) << "\t Decimal Value: " << i << "\n" << endl;       
    }

    return 0;

}