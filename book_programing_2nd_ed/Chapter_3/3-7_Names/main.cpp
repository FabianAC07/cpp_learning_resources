/*
    This is an exmaple demostrates the use of variables names

    "Try this:
    Compile the "Goodbye, curel wrodl!" program and examine the error messages...
    Did the compiler find all the errors? ...
    What did it suggest as problems?  ...
    Did the compiler get confused and diagnose more than four errors? ...
    
    Remove the errors one by one, starting with the lexically first, ...
    and see hoe the error messages chanege (and improve)." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 75, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

// // Step 1: This is the original code:

// int Main(){
    
//     STRING s = "Goodbye, cruel world! ";
//     cOut << S << '\n';

// }

/*
    This is the terminal output after building: 

    Starting build...
    /usr/bin/g++-10 -fdiagnostics-color=always -g -std=c++20 /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/*cpp -o /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/rooster
    /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/main.cpp: In function ‘int Main()’:
    /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/main.cpp:22:5: error: ‘STRING’ was not declared in this scope
    22 |     STRING s = "Goodbye, cruel world! ";
        |     ^~~~~~
    /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/main.cpp:23:5: error: ‘cOut’ was not declared in this scope
    23 |     cOut << S << '\n';
        |     ^~~~
    /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/main.cpp:23:13: error: ‘S’ was not declared in this scope
    23 |     cOut << S << '\n';
        |             ^
    /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/main.cpp:25:1: warning: no return statement in function returning non-void [-Wreturn-type]
    25 | }
        | ^

    Build finished with error(s).

    *  The terminal process terminated with exit code: -1. 
    *  Terminal will be reused by tasks, press any key to close it. 
*/


// // ----------------------------------------------------------------------------------------------------------------------------

// // Step 2: Correct the lexical errors:

// int Main(){
    
//     // STRING s = "Goodbye, cruel world! "; // The STRING declaration must be lowercase, thus:
//     string s = "Goodbye, cruel world! ";

//     // cOut << S << '\n';                      // There are 2 errors here: 1) cOut must be all lowercase; 2) S was declared as lowercase, thus 
//     cout << s << '\n';

//     // Finally, there is no return in a non-void function. Thus, return 0 must be included
//     return 0;

// }

/*
    This is the return after trying to build the program: 

    Starting build...
    /usr/bin/g++-10 -fdiagnostics-color=always -g -std=c++20 /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/*cpp -o /home/fabian/programming_courses/Programming_CPP_Book/Chapter_3/3-7_Names/rooster
    /usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/10/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
    (.text+0x24): undefined reference to `main'
    collect2: error: ld returned 1 exit status

    Build finished with error(s).

    *  The terminal process terminated with exit code: -1. 
    *  Terminal will be reused by tasks, press any key to close it. 
    

    Notice that it is saying undefined reference to `main', this we have to change the name of the function to be all lowercase
*/

// ----------------------------------------------------------------------------------------------------------------------------

// Step 3: Change the name of the function to be all lowercase:

int main(){     // Change Main to main
    
    // STRING s = "Goodbye, cruel world! "; // The STRING declaration must be lowercase, thus:
    string s = "Goodbye, cruel world! ";

    // cOut << S << '\n';                      // There are 2 errors here: 1) cOut must be all lowercase; 2) S was declared as lowercase, thus 
    cout << s << '\n';

    // Finally, there is no return in a non-void function. Thus, return 0 must be included
    return 0;

}