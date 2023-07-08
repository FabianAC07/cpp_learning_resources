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

    7.  Add a unit to each double entered; that is, enter values such as 10cm, 5ft, or 3.33m. 
        Accept the four units: cm, m, in, ft. Asumme conversion factors 1m == 100cm, 
        1in == 2.54cm, 1ft = 12in. Read the unit indicator into a string. You may consider 12 m 
        (with a space between the number and the unit) equivalent to 12m (without a space).

    " [1]

    REF: [1]    Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper 
                Saddle River, Nj: Addison-Wesley, pp. 126, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

using namespace std;

// Function declaration
double cm2m(double number_in_centimeters)
{
    constexpr double centimeter_per_meter = 100;
    
    double number_in_meters = number_in_centimeters / centimeter_per_meter;

    return number_in_meters;
}

double m2cm(double number_in_meters)
{
    constexpr double centimeter_per_meter = 100;
    
    double number_in_centimeters = number_in_meters * centimeter_per_meter;

    return number_in_centimeters;
}

double m2in(double number_in_meters)
{
    constexpr double inches_per_meter = 39.3701;
    
    double number_in_inches = number_in_meters * inches_per_meter;

    return number_in_inches;
}

double in2m(double number_in_inches)
{
    constexpr double inches_per_meter = 39.3701;
    
    double number_in_meters = number_in_inches / inches_per_meter;

    return number_in_meters;
}

double m2ft(double number_in_meters)
{
    constexpr double feet_per_meter = 3.28048;
    
    double number_in_feet = number_in_meters * feet_per_meter;

    return number_in_feet;
}

double ft2m(double number_in_feet)
{
    constexpr double feet_per_meter = 3.28048;
    
    double number_in_meters = number_in_feet / feet_per_meter;

    return number_in_meters;
}

// Main function. Here is where the program starts

int main()
{
    
    cout << "This program request the user to enter a number with the following units:\n"
            "\n\t-'cm' == centimeters"
            "\n\t-'m' == meters"
            "\n\t-'in' == inches"
            "\n\t-'ft' == feet"
            "\nThe program will track the smallest and the larger numebr entered by the user"
            "converted into meters."
            << endl;

    string input = " ";                 // input
    string unit;                        // unit

    double current_value {0.0};         // current value
    double smallest_value {0.0};        // smallest value 
    double largest_value {0.0};         // largest value

    double current_value_cm     {0.0};
    double current_value_meters {0.0};
    double current_value_inches {0.0};
    double current_value_feet   {0.0};

    string smallest_unit;               // smallest unit value
    string largest_unit;                // largest unit value

    bool valid_input = true;            // condition to verify input

    int counter {1};                    // iterations counter   

    // Request the input number to the user and check if it's '|'. If so, exit... 
    cout << "Enter a number followed by a valid unit (or '|' to exit): "; 
    cin >> input;
    if (input == "|")
    {
        cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
        return 0; 
    }

    while (true)
    {
        // Grab the value and 
        // stringstream iss(input);
        // iss >> current_value;
        // iss >> unit;

        // // Try to convert the input string into double types
        // try
        // {
        //     // current_value = stod(input);
        //     iss >> current_value;
        //     iss >> unit;
        // }
        // // If the inputs can't be converted into double type, then raise an excpetion... 
        // catch (const std::exception& e)
        // {
        //     // This will only work if the input was not converted into double types
        //     valid_input = false; 
        // }

        // if (iss >> current_value)
        // {
        //     iss >> unit;
        //     valid_input = true;
        // }
        // else
        // {
        //     valid_input = false;
        // }

        stringstream iss(input);

        if (iss >> current_value) {
            // Check if there's a unit following the number
            size_t unit_pos = input.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
            if (unit_pos != string::npos) {
                // Extract the unit from the input string
                unit = input.substr(unit_pos);

                // Trim any leading/trailing whitespace from the unit
                size_t first_non_space = unit.find_first_not_of(" \t");
                size_t last_non_space = unit.find_last_not_of(" \t");
                unit = unit.substr(first_non_space, last_non_space - first_non_space + 1);

                // Check the valid units
                if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft") {
                    // Valid input
                    cout << "Number: " << current_value << endl;
                    cout << "Unit: " << unit << endl;
                } else {
                    cout << "Invalid unit" << endl;
                }
            } else {
                cout << "No unit provided" << endl;
            }
        } else {
            cout << "Invalid input or not a number" << endl;
        }
            

        // If the input was indeed converted into double types, print the values 
        if (valid_input)
        {
            // Do the conversions
            if (unit == "cm")
            {
                cout << "cm 2 m" << endl;
                current_value_cm     = current_value;
                current_value_meters = cm2m(current_value_cm);
                current_value_inches = m2in(current_value_meters);
                current_value_feet   = m2ft(current_value_meters);
            }
            else if (unit == "m")
            {
                cout << "m 2 cm" << endl;
                current_value_meters = current_value;
                current_value_cm     = m2cm(current_value_meters);
                current_value_inches = m2in(current_value_meters);
                current_value_feet   = m2ft(current_value_meters);
            }
            else if (unit == "in")
            {
                cout << "in 2 m" << endl;
                current_value_inches = current_value;
                current_value_meters = in2m(current_value_inches);
                current_value_cm     = m2cm(current_value_meters);
                current_value_feet   = m2ft(current_value_meters);
            }
            else if (unit == "ft")
            {
                cout << "ft 2 cm" << endl;
                current_value_feet = current_value;
                current_value_meters = ft2m(current_value_feet);
                current_value_cm     = m2cm(current_value_meters);
                current_value_inches = m2in(current_value_meters);
            }
            else
            {
                cout << "No unit, do nothing... " << endl;
                // Do nothing 
            }
            
                  
            if (counter == 1) 
            {
                cout << "\n-------------------------------------------------------------\n" << endl;
                cout << "Iteration: " << counter << endl;
                cout << "\t-R7: You have entered: " << current_value << unit << endl;
                cout << "\n\t-Your input is equivalent to: " << endl;
                cout << "\t\t 1. " << current_value_meters << " meters" << endl;
                cout << "\t\t 2. " << current_value_cm << " centimeters" << endl;
                cout << "\t\t 3. " << current_value_inches << " inches" << endl;
                cout << "\t\t 4. " << current_value_feet << " feet" << endl;
                cout << "\n-------------------------------------------------------------\n" << endl;

                // Store the current value as the smallest and larger value 
                smallest_value = current_value;
                largest_value = current_value;
            }
            else 
            {
                // The smallest and largest value is tracked in meters
                if (current_value_meters < smallest_value)
                {
                    // replace smallest value with current value
                    smallest_value = current_value_meters;

                    // print the value
                    cout << "\n-------------------------------------------------------------\n" << endl;
                    cout << "Iteration: " << counter << endl;
                    cout << "\t-R7: You have entered: " << current_value << unit << ", the samllest number so far!!!" << endl;
                }
                else if (current_value_meters > largest_value)
                {
                    // replace largest value with current value
                    largest_value = current_value_meters;

                    // print the value
                    cout << "\n-------------------------------------------------------------\n" << endl;
                    cout << "Iteration: " << counter << endl;
                    cout << "\t-R7: You have entered: " << current_value << unit << ", the largest number so far..." << endl;
                }

                cout << "\n\t-Your input is equivalent to: " << endl;
                cout << "\t\t 1. " << current_value_meters << " meters" << endl;
                cout << "\t\t 2. " << current_value_cm << " centimeters" << endl;
                cout << "\t\t 3. " << current_value_inches << " inches" << endl;
                cout << "\t\t 4. " << current_value_feet << " feet" << endl;
                cout << "\n-------------------------------------------------------------\n" << endl;
                
                
            }
            
            
            counter++;              // increment the counter      
        }
        else // Print the invalid input message
        {
            cout << "\nInvalid input. Please enter a number along with one of the valid units:" 
            "\n\t-'cm' == centimeters"
            "\n\t-'m' == meters"
            "\n\t-'in' == inches"
            "\n\t-'ft' == feet\n\n" << endl;
            valid_input = true;     // set the valid input to true 
        }

        // Start the loop again by requesting another 2 values to the user...

        // Request the first input value to the user and check if it's '|'. If so, exit...
        cout << "Enter a number followed by a valid unit (or '|' to exit): "; 
        cin >> input;
        if (input == "|")
        {
            cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
            return 0; 
        }

    }
    
    return 0;

}