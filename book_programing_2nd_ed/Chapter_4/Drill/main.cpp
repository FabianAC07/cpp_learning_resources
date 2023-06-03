/*
    This is an exmaple demostrates ...

    "Drill
    1.  Write a program taht consists of a while-loop that (each time around the 
        loop) reads in two ints an then prints them. Exit the program when a 
        terminating '|' is entered.


    " [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 116, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){

    string input_1 = " ";               // input 1
    string input_2 = " ";               // input 2

    int value_1 {0};                    // value 1
    int value_2 {0};                    // value 2

    bool while_condition = true;        // condition to run the while loop
    bool valid_input = true;            // condition to verify input

    int counter {1};                    // iterations counter 

    // Step 1
    cout << "This program request the user to enter two integer numbers \non each iteration and then print them to the terminal.\n" << endl;

    // Request the first input value to the user and check if it's '|'. If so, exit... 
    cout << "Enter the first value (or '|' to exit): "; 
    cin >> input_1;
    if (input_1 == "|")
    {
        cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
        return 0; 
    }

     // Request the first input value to the user and check if it's '|'. If so, exit... 
    cout << "Enter the second value (or '|' to exit): "; 
    cin >> input_2;
    if (input_2 == "|")
    {
        cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
        return 0;  
    }


    while (while_condition)
    {

        // Try to convert the input string into int types
        try
        {
            value_1 = stoi(input_1);
            value_2 = stoi(input_2);
        }
        // If the inputs can't be converted into int type, then raise an excpetion... 
        catch (const std::exception& e)
        {
            valid_input = false; // This will only work if the input was not converted into int types
        }

        // If the input was indeed converted into int types, print the values to the terminal
        if (valid_input)
        {
            cout << "\n---------------------------------------------------------------------------\n" << endl;
            cout << "Iteration: " << counter << endl;
            cout << "You have entered: " << value_1 << " and " << value_2 << "\n" << endl;
            cout << "\n---------------------------------------------------------------------------\n" << endl;
            
            counter++;              // increment the counter      
        }
        else // Print the invalid input message
        {
            cout << "\nInvalid input. Please try again. Enter integer values.\n" << endl;
            valid_input = true;     // set the valid input to true 
        }

        // Start the loop again by requesting another 2 values to the user...

        // Request the first input value to the user and check if it's '|'. If so, exit...
        cout << "Enter the first value (or '|' to exit): "; 
        cin >> input_1;
        if (input_1 == "|")
        {
            cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
            break;  
        }

        // Request the second input value to the user and check if it's '|'. If so, exit...
        cout << "Enter the second value (or '|' to exit): "; 
        cin >> input_2;
        if (input_2 == "|")
        {
            cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
            break;  
        }

    }
    
    return 0;

}