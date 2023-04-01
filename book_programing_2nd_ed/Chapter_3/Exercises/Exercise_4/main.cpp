/*
    Exercise 4: "Write a program that prompt the user to enter two integer values. Store these values in int variables named 
    val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values, 
    and return them to the user." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 86, 2014.
*/

#include "../../../Utils/headers/std_lib_facilities.h"

int main(){
    cout << "This program determines the smaller, larger, sum, difference, product, and ratio of two given interger values.\n" << endl;
    
    // Initialize variables
    int val1 {0};               // variable to store the first value
    int val2 {0};               // variable to store the second value 
    float user_input {0.0};     // variable to check the user input type

    // Prompt the user to enter two integer values 
    cout << "Please enter two integer values, and  press 'Enter' to confirm...\n" << endl;

    // Sequence for first user value
    cout << "Enter first integer value: ";
    cin >> user_input;
    // Check if the user entred an integer value:
    if (floor(user_input) == user_input) {
        val1 = static_cast<int>(user_input); // convert float to int
        cout << "The first integer value you entered is: " << val1 << "\n" << endl;
    } else {
        cerr << "Error: Invalid input. Please enter an integer value." << endl;
        return 1; // exit with error code
    }

    // Sequence for second user value:
    cout << "\nEnter second integer value: "; 
    cin >> user_input;
    // Check if the user entred an integer value:
    if (floor(user_input) == user_input) {
        val2 = static_cast<int>(user_input); // convert float to int
        cout << "The second integer value you entered is: " << val2 << "\n" << endl;
    } else {
        cerr << "Error: Invalid input. Please enter an integer value." << endl;
        return 1; // exit with error code
    }


    cout << "The results are as follows: \n" << endl;

    // Do the operations:
    // Operation 1: Determinte the smaller value 
    if (val1 > val2){           // if val1 > val2
        int val_larger = val1;
        int val_smaller = val2; 
        
        cout << "The smaller value is               : " << val_smaller << endl;
        cout << "The larger value is                : " << val_larger << endl; 

    } else if (val1 < val2){    // if val1 < val2
        int val_larger = val2;
        int val_smaller = val1; 

        cout << "The smaller value is               : " << val_smaller << endl;
        cout << "The larger value is                : " << val_larger << endl; 

    } else {                    // values are the same
        int val_equal = val1;

        cout << "The input values are the same      : " << val_equal << endl;
    }

    // Operation 2: Do the sum of the values
    int val_sum = val1 + val2;

    // Operation 3: Do the difference of the values
    int val_diff1 = val1 - val2;
    int val_diff2 = val2 - val1;

    // Operation 4: Do the product of the values
    int val_product = val1 * val2;

    // Operation 5: Do the ratio 
    double val_ratio1 = static_cast<double>(val1) / val2; // convert val1 to double to get a floating-point ratio
    double val_ratio2 = static_cast<double>(val2) / val1; // convert val2 to double to get a floating-point ratio

    // Return operations to the user
    cout << "The sum of the values is           : " << val1 << " + " << val2 << " = " << val_sum << endl;
    cout << "The difference of the values is    : " << val1 << " - " << val2 << " = " << val_diff1 << endl;
    cout << "The difference of the values is    : " << val2 << " - " << val1 << " = " << val_diff2 << endl;
    cout << "The ratio of the values is         : " << val1 << " / " << val2 << " = " << val_ratio1 << endl;
    cout << "The ratio of the values is         : " << val2 << " / " << val1 << " = " << val_ratio2 << endl;


    return 0;

}