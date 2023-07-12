/*
    This is an exmaple demostrates Chapter 4 - Exercise 2.

    "If we define a median of a sequence as "a number so that exactly as 
    meny elements come before it in the sequence as come after it," fix the
    program in $4.6.3 so that it always prints out a median. Hint: A median
    need not be an element of the sequence." [1]

    REF:    [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper 
                Saddle River, Nj: Addison-Wesley, pp. 128, 2014.
            [2] Median Definition: https://en.wikipedia.org/wiki/Median
         
*/

#include "../../../Utils/headers/std_lib_facilities.h"

// Compute mean and median temperatures

int main()
{
    cout << "This program calculates the average and median temperatures of a given set of temperatures." << endl;
    cout << "Input the character '|' to terminate the program. \n" << endl;
    cout << "Input the temperature readings \n" << endl;

    vector<double> temps;               // temperatures 
    for (double temp; cin >> temp; )    // read into temp
    {
        temps.push_back(temp);          // put temp into vector
    }
    
    cout << "The size of the sample is: " << temps.size() << endl;

    // compute mean temperature:
    double sum = 0;
    for (double x : temps) 
    {
        sum += x;
    }
    cout << "Average temperature: " << sum / temps.size() << endl;

    // Compute the median temperature:
    sort(temps);
    if (temps.size() % 2 == 0)      // if size of the vector is even 
    {
        double median = (temps[(temps.size() / 2) - 1] + temps[(temps.size() / 2)]) / 2;
        cout << "Median temperature: " << median << endl;
    }
    else
    {
        double median = temps[temps.size() / 2];
        cout << "Median temperature: " << median << endl;
    }
}