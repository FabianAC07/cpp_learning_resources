/*
    This is an exmaple demostrates ...

    "Drill

    1.  Write a program that consists of a while-loop that (each time around the 
        loop) reads in two ints an then prints them. Exit the program when a 
        terminating '|' is entered.
    
    2.  Change the program to write out 'the smaller value is:' followed by the 
        smaller of the numbers and 'the larger valuer is:' followed by the larger 
        value. 

    " [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 126, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

vector<int> check_larger_value(int value_1, int value_2)
{
    /*
        This function compare two int input values, and returns the larger and smaller values
    */

   int smaller_value {0};
   int larger_value {0};

   if (value_1 > value_2)
   {
        larger_value = value_1;
        smaller_value = value_2;
   }
   else 
   {
        larger_value = value_2;
        smaller_value = value_1;
   }

   vector<int> values = {smaller_value, larger_value};
   
   return values;

}

int main()
{

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

            // Step 2: Check which input value is larger and which one is smaller

            int larger_value {0};
            int smaller_value {0};

            vector<int> values = check_larger_value(value_1, value_2); 

            
            cout << "\n---------------------------------------------------------------------------\n" << endl;
            cout << "Iteration: " << counter << endl;
            cout << "\t-R1: You have entered: " << value_1 << " and " << value_2 << endl;
            cout << "\t-R2: The smaller value is: " << values[0] << ", and the lasrger values is: " << values[1] << endl; 
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