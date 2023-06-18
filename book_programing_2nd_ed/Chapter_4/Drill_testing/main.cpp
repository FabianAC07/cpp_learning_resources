/*
    This is testing code for the Drill excersise.

    Partial code from [1].

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 103, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

using namespace std;

int main() {
    
    constexpr double cm_per_inch = 2.54;
    
    double lenght = 0.0; 
    string unit;
    string input;

    cout << "Please enter a length followed by a unit (cm or in):\n" << endl;
    getline(cin, input);

    if (input == "|") {
        cout << "\n\t-User entered '|'. Exiting the program...\n" << endl;
        return 0;
    }

    stringstream iss(input);
    iss >> lenght;
    iss >> unit;

    cout << "Entered amount: " << lenght << " " << unit << endl;

    if(unit == "in")
    {
        cout << lenght << "in == " << cm_per_inch * lenght << "cm\n";
    }   
    else
    {
        cout << lenght << "cm = " << lenght / cm_per_inch << "in\n";
    }

    return 0;

}