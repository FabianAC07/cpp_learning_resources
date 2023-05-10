/*
    This is an exmaple demostrates ...

    "Try this:
    Rewirte your currency converter program from the previous Try this to to use a switch-statement. 
    Add conversions from yuan and korener. Which version of the program is easier to write, understand, and modify." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 109, 2014.

    The currency values used on this script are dated on Saturday April 15th, 2023:

    1. 1 USD = 133.81 Yens
    2. 1 USD = 10.30 Krones
    3. 1 USD = 0.80 Pound
    4. 1 USD = 6.91 Yuans
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){


    /*
    Conver from Yen, Kroner, and Pounds to American Dollars.
    A suffix 'y', 'k', or 'p' indicates the currency to exchange into USD
    any other suffix is an error
    */

    /*
        TODO: Find a way to set only two decimals on the conversions, as double and float are unsatble:
        https://stackoverflow.com/questions/3730019/why-not-use-double-or-float-to-represent-currency
    */ 


    // Currency exchange values as of  2023-05-09
    constexpr double yens_per_usd = 135.16;      // yens to usd 
    constexpr double krones_per_usd = 10.56;     // krones to usd
    constexpr double pounds_per_usd = 0.79;      // pounds to usd
    constexpr double yuan_per_usd = 6.93;        // yuan to usd

    double input_amount = 1;                     // user input amount
    string input_currency;                       // a space is not a currency
    string input_currency_check;
    string output_currency;
    int conversion_check {};
    int conversion_case {};
   
    cout << "Please enter the amount of money to you want to convert into another currency: " << endl;
    cin >> input_amount; 
    cout << "\nEnter the currency for your money amount: Yen for Yens, Krone for Krones, Pound for Pounds, Yuan for Yauns or USD for USD: " << endl;
    cin >> input_currency_check;

    if (input_currency_check == "Yen" || input_currency_check == "Krone" || input_currency_check == "Pound" || input_currency_check == "Yuan" || input_currency_check == "USD" ) {
        input_currency = input_currency_check;
    }
    else {
        cout << "Sorry, I am currently not supporting the currency '" << input_currency_check << "'\n" << endl;
        exit(0);
    }

    // Yen 
    if (input_currency == "Yen"){
        cout << "Please select one of the following conversions: \n1: Krones \n2: Pounds \n3: Yuan \n4. USD\n" << endl;
        cin >> conversion_check;
        if (conversion_check == 1) {
            conversion_case = 1; // Yen to Krones
            output_currency = "Krones";
        } 
        else if (conversion_check == 2) {
            conversion_case = 2; // Yen to Pounds
            output_currency = "Pounds";
        }
        else if (conversion_check == 3) {
            conversion_case = 3; // Yen to Yuan
            output_currency = "Yuan";
        }
        else if (conversion_check == 4) {
            conversion_case = 4; // Yen to USD
            output_currency = "USD";
        }
    }

    // Krones 
    else if (input_currency == "Krone"){
        cout << "Please select one of the following conversions: \n1: Yen \n2: Pounds \n3: Yuan \n4. USD\n" << endl;
        cin >> conversion_check;
        if (conversion_check == 1) {
            conversion_case = 4; // Krone to Yen
            output_currency = "Yen";
        } 
        else if (conversion_check == 2) {
            conversion_case = 5; // Krone to Pounds
            output_currency = "Pounds";
        }
        else if (conversion_check == 3) {
            conversion_case = 7; // Krone to Yuan
            output_currency = "Yuan";
        }
        else if (conversion_check == 4) {
            conversion_case = 8; // Krone to USD
            output_currency = "USD";
        }
    }

    // Pound
    else if (input_currency == "Pound"){
        cout << "Please select one of the following conversions: \n1: Krones \n2: Yen \n3: Yuan \n4. USD\n" << endl;
        cin >> conversion_check;
        if (conversion_check == 1) {
            conversion_case = 9; // Pound to Krones
            output_currency = "Krones";
        } 
        else if (conversion_check == 2) {
            conversion_case = 10; // Pound to Yen
            output_currency = "Yen";
        }
        else if (conversion_check == 3) {
            conversion_case = 11; // Pound to Yuan
            output_currency = "Yuan";
        }
        else if (conversion_check == 4) {
            conversion_case = 12; // Pound to USD
            output_currency = "USD";
        }
    }

    // Yuan 
    else if (input_currency == "Yuan"){
        cout << "Please select one of the following conversions: \n1: Krones \n2: Pounds \n3: Yen \n4. USD\n" << endl;
        cin >> conversion_check;
        if (conversion_check == 1) {
            conversion_case = 13; // Yuan to Krones
            output_currency = "Krones";
        } 
        else if (conversion_check == 2) {
            conversion_case = 14; // Yuan to Pounds
            output_currency = "Pounds";
        }
        else if (conversion_check == 3) {
            conversion_case = 15; // Yuan to Yen
            output_currency = "Yen";
        }
        else if (conversion_check == 4) {
            conversion_case = 16; // Yuan to USD
            output_currency = "USD";
        }
    }

    // USD 
    if (input_currency == "USD"){
        cout << "Please select one of the following conversions: \n1: Krones \n2: Pounds \n3: Yuan \n4. Yen\n" << endl;
        cin >> conversion_check;
        if (conversion_check == 1) {
            conversion_case = 17; // USD to Krones
            output_currency = "Krones";
        } 
        else if (conversion_check == 2) {
            conversion_case = 18; // USD to Pounds
            output_currency = "Pounds";
        }
        else if (conversion_check == 3) {
            conversion_case = 19; // USD to Yuan
            output_currency = "Yuan";
        }
        else if (conversion_check == 4) {
            conversion_case = 20; // USD to Yen
            output_currency = "Yen";
        }
    }


    cout << "\n\nEntered amount: " << input_amount << " | Currency: " << input_currency << endl; 
    cout << "\nDesired Currency: " << output_currency << endl;


    // Make the conversion 

    /*
    1. 1 USD = 133.81 Yens
    2. 1 USD = 10.30 Krones
    3. 1 USD = 0.80 Pound
    4. 1 USD = 6.91 Yuans
    */

    double conversion {};
    double conversion_2 {};

    cout << fixed;
    cout << setprecision(2);
    switch (conversion_case)
    {
    case 1:     // Yen to Krones
        conversion = (input_amount / yens_per_usd) * krones_per_usd;
        cout <<"\nConversion: " << input_amount << " Yens = " << conversion << " Krones\n" << endl;
        break;
    case 2:     // Yen to Pounds
        conversion = (input_amount / yens_per_usd) * pounds_per_usd;
        cout <<"\nConversion: " << input_amount << " Yens = " << conversion << " Pounds\n" << endl;
        break;
    case 3:     // Yen to Yuan
        conversion = (input_amount / yens_per_usd) * yuan_per_usd;
        cout <<"\nConversion: " << input_amount << " Yens = " << conversion << " Yuans\n" << endl;
        break;
    case 4:     // Yen to USD
        conversion = (input_amount / yens_per_usd);
        cout <<"\nConversion: " << input_amount << " Yens = " << conversion << " USD\n" << endl;
        break;
    case 5:     // Krone to Yen
        conversion = (input_amount / krones_per_usd) * yens_per_usd;
        cout <<"\nConversion: " << input_amount << " Krone = " << conversion << " Yens\n" << endl;
        break;
    case 6:     // Krone to Pounds
        conversion = (input_amount / krones_per_usd) * pounds_per_usd;
        cout <<"\nConversion: " << input_amount << " Krone = " << conversion << " Pounds\n" << endl;
        break;
    case 7:     // Krone to Yuan
        conversion = (input_amount / krones_per_usd) * yuan_per_usd;
        cout <<"\nConversion: " << input_amount << " Krone = " << conversion << " Yuans\n" << endl;
        break;
    case 8:     // Krone to USD
        conversion = (input_amount / krones_per_usd);
        cout <<"\nConversion: " << input_amount << " Krone = " << conversion << " USD\n" << endl;
        break;
    case 9:     // Pound to Krones
        conversion = (input_amount / pounds_per_usd) * krones_per_usd;
        cout <<"\nConversion: " << input_amount << " Pound = " << conversion << " Krones\n" << endl;
        break;
    case 10:     // Pound to Yen
        conversion = (input_amount / pounds_per_usd) * yens_per_usd;
        cout <<"\nConversion: " << input_amount << " Pound = " << conversion << " Yen\n" << endl;
        break;
    case 11:     // Pound to Yuan
        conversion = (input_amount / pounds_per_usd) * yuan_per_usd;
        cout <<"\nConversion: " << input_amount << " Pound = " << conversion << " Yuans\n" << endl;
        break;
    case 12:     // Pound to USD
        conversion = (input_amount / pounds_per_usd);
        cout <<"\nConversion: " << input_amount << " Pound = " << conversion << " USD\n" << endl;
        break;
    case 13:     // Yuan to Krones
        conversion = (input_amount / yuan_per_usd) * krones_per_usd;
        cout <<"\nConversion: " << input_amount << " Yuan = " << conversion << " Krones\n" << endl;
        break;
    case 14:     // Yuan to Pounds
        conversion = (input_amount / yuan_per_usd) * pounds_per_usd;
        cout <<"\nConversion: " << input_amount << " Yuan = " << conversion << " Pounds\n" << endl;
        break;
    case 15:     // Yuan to Yen
        conversion = (input_amount / yuan_per_usd) * yens_per_usd;
        cout <<"\nConversion: " << input_amount << " Yuan = " << conversion << " Yens\n" << endl;
        break;
    case 16:     // Yuan to USD
        conversion = (input_amount / yuan_per_usd);
        cout <<"\nConversion: " << input_amount << " Yuan = " << conversion << " USD\n" << endl;
        break;
    case 17:     // USD to Krones
        conversion = (input_amount * krones_per_usd);
        cout <<"\nConversion: " << input_amount << " USD = " << conversion << " Krones\n" << endl;
        break;
    case 18:     // USD to Pounds
        conversion = (input_amount * pounds_per_usd);
        cout <<"\nConversion: " << input_amount << " USD = " << conversion << " Pounds\n" << endl;
        break;
    case 19:     // USD to Yuan
        conversion = (input_amount * yuan_per_usd);
        cout <<"\nConversion: " << input_amount << " USD = " << conversion << " Yuans\n" << endl;
        break;
    case 20:     // USD to Yen
        conversion = (input_amount * yens_per_usd);
        cout <<"\nConversion: " << input_amount << " USD = " << conversion << " Yens\n" << endl;
        break;
    default:
        break;
    }


    return 0;

}