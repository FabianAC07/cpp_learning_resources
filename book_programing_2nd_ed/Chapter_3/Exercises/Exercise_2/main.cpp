/*
    Exercise 2: "Write a program that converts from miles to kilometers. Your program should have 
    a reasonable prompt to enter number of miles." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 85, 2014.
*/

#include "../../../Utils/headers/std_lib_facilities.h"

int main(){

    // Declaration of variables
    double input_miles {0.0};   // User input value in miles
    double output_km {0.0};     // Output, miles converted into km 

    cout << "This program converts miles to kilometers.\n" << endl;
    cout << "Please enter the amount of miles, and press 'Enter' to confirm...\n" << endl;
    cin >> input_miles;         // Store the input value 

    // Conversion of miles into km 

    if (input_miles <= 1){
        cout << "\nConverting " << input_miles << " mile into kilometers...\n" << endl;
    }
    else {
        cout << "\nConverting " << input_miles << " miles into kilometers...\n" << endl;
    }
    
    // 1 mile = 1.609 km
    output_km = input_miles * 1.609;

    // Prompt output to the user: 
    cout << "Conversion completed...\n" << endl;

    if (input_miles <= 1){
        cout << "\n" << input_miles << " mile is equal to " << output_km << " kilometers.\n" << endl;
        cout << input_miles << " mile = " << output_km << " km\n";
    }
    else {
        cout << "\n" << input_miles << " miles is equal to " << output_km << " kilometers.\n" << endl;
        cout << input_miles << " miles = " << output_km << " km\n";
    }
    

    
    return 0;

}