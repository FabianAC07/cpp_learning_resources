/*
    This is an exmaple demostrates ...

    "Try this:
    Use the example above as a model for a prohram that converts yen ('y'), kroner ('k'), 
    and pounds ('p') into dollars. If you like realisim, you can find conversion rates on the web." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 105, 2014.

    The currency values used on this script are dated on Saturday April 15th, 2023:

    1. 1 USD = 133.81 Yens
    2. 1 USD = 10.30 Krones
    3. 1 USD = 0.80 Pound
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){


    /*
    Conver from Yen, Kroner, and Pounds to American Dollars.
    A suffix 'y', 'k', or 'p' indicates the currency to exchange into USD
    any other suffix is an error
    */

    // Currency exchange values as of  2023-04-27
    constexpr double yens_per_usd = 134.08;      // yens to usd 
    constexpr double krones_per_usd = 10.63;     // krones to usd
    constexpr double pounds_per_usd = 0.80;      // pounds to usd

    double amount = 1;                           // amount in usd 
    char currency = ' ';                         // a space is not a currency
   
    cout << "Please enter the amount of money to convert into USD followed by the currency" << endl;
    cout << "Enter y for Yens, k for Krones, or p for Pounds" << endl;
    cin >> amount >> currency;

    cout << "Entered amount: " << amount << " " << currency << endl; 

    // Make the conversion 

    if(currency == 'y') 
        cout << amount << " Yens = " << amount / yens_per_usd << " USD\n";
    else if(currency == 'k')
        cout << amount << " Krones = " << amount / krones_per_usd << " USD\n";
    else if(currency == 'p')
        cout << amount << " Pounds = " << amount / pounds_per_usd << " USD\n";
    else
        cout << "Sorry, I am currently not supporting the currency '" << currency << "'\n" << endl;

    return 0;

}