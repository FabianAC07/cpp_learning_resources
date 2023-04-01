/*
    This script explains the usage of objectes and data types 

    "Try this:
    Get the "name and age" example to run. Then, modifiy it to write 
    the age in moths: read the input in years and multiply (using 
    the * operator) by 12. Read the age into a double to allow children
    who can be very proud of being five and half years old ranther than 
    just five." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 65, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){
    // Let's start by declaring our variables 
    string name = "???";    // "???" means that we do not know the name 
    double age {0.0};       // 0.0 means we do not know the age 

    // Then let's ask the user for their full name 
    cout << "Hello! Please enter your name, and press 'Enter' to confirm... \n" << endl;

    // Grab the line for the full name and store it in the name variable 
    getline(cin, name);
    
    cout << "\nPlease enter your age, and press 'Enter' to confirm... \n" << endl;
    // Grab the age and store it in the age variable 
    cin >> age;

    // Now let's get the age in months, days, minutes, and seconds 
    double age_months {age * 12};
    
    // Print out the name and age 
    cout << "\n------------------------------------------------------------------------\n" << endl;
    cout << "Your name is " << name << ", and you are " << age << " years old, or " << age_months << " months old!" << endl; 


    return 0;

}