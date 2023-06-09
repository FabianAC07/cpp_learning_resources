/*
    This is an exmaple demostrates ...

    "Drill

    1.  Write a program that consists of a while-loop that (each time around the 
        loop) reads in two ints an then prints them. Exit the program when a 
        terminating '|' is entered.
    
    2.  Change the program to write out 'the smaller value is:' followed by the 
        smaller of the numbers and 'the larger valuer is:' followed by the larger 
        value. 

    3.  Argument the program so that it writes the line the numbers are equal 
        value.

    4.  Change the program so that it uses doubles instead of ints.

    5.  Change the program so that it writes out the numbers are almost equal 
        after writing out which number is the larger and the samller if the two numbers 
        differ by less than 1.0/100.

    6.  Now change the body of the loop so that it reads just one double 
        each time around. Define two variables to keep track of which is the smallest 
        and which is the largest value you have seen so far. Each time through 
        the loop write out the value entered. If it's the smallest so far, write the
        smallest so far after the number. If it is the largest so far, write the largest
        so far after the number.  

    " [1]

    REF: [1]    Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper 
                Saddle River, Nj: Addison-Wesley, pp. 126, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

// Function declaration


// Main function. Here is where the program starts

int main()
{

    string input_1 = " ";               // input 1

    double current_value {0.0};         // current value
    double smallest_value {0.0};        // smallest value 
    double largest_value {0.0};         // largest value

    bool valid_input = true;            // condition to verify input

    int counter {1};                    // iterations counter 

    cout << "This program request the user to enter a number and then print it back to "
            "the terminal.\n" 
            "This program also keeps track of the smallest and the greater number.\n" 
            "If the user enters the smallest or the largest number so far, they will "
            "be notified."<< endl;

    // Request the input number to the user and check if it's '|'. If so, exit... 
    cout << "Enter the first value (or '|' to exit): "; 
    cin >> input_1;
    if (input_1 == "|")
    {
        cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
        return 0; 
    }


    while (true)
    {

        // Try to convert the input string into double types
        try
        {
            current_value = stod(input_1);
        }
        // If the inputs can't be converted into double type, then raise an excpetion... 
        catch (const std::exception& e)
        {
            // This will only work if the input was not converted into double types
            valid_input = false; 
        }

        // If the input was indeed converted into double types, print the values 
        if (valid_input)
        {
            
            if (counter == 1) 
            {
                cout << "\n-------------------------------------------------------------\n" << endl;
                cout << "Iteration: " << counter << endl;
                cout << "\t-R6: You have entered: " << current_value << endl;
                cout << "\n-------------------------------------------------------------\n" << endl;

                // Store the current value as the smallest and larger value 
                smallest_value = current_value;
                largest_value = current_value;
            }
            else 
            {
                if (current_value < smallest_value)
                {
                    // replace smallest value with current value
                    smallest_value = current_value;

                    // print the value
                    cout << "\n-------------------------------------------------------------\n" << endl;
                    cout << "Iteration: " << counter << endl;
                    cout << "\t-R6: You have entered: " << current_value << ", the samllest number so far..." << endl;
                    cout << "\n-------------------------------------------------------------\n" << endl;
                }
                else if (current_value > largest_value)
                {
                    // replace largest value with current value
                    largest_value = current_value;

                    // print the value
                    cout << "\n-------------------------------------------------------------\n" << endl;
                    cout << "Iteration: " << counter << endl;
                    cout << "\t-R6: You have entered: " << current_value << ", the largest number so far..." << endl;
                    cout << "\n-------------------------------------------------------------\n" << endl;
                }
                
                
            }
            
            
            counter++;              // increment the counter      
        }
        else // Print the invalid input message
        {
            cout << "\nInvalid input. Please try again. Enter numbers type double, e.g.: "
                    "9.9999999\n" << endl;
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

    }
    
    return 0;

}