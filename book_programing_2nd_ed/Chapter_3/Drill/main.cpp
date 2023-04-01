/*
    This script is follows the drill at the end of chapter 3 from [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 83-84, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){
    // Step 1
    string first_name;   
    cout << "Welcome! Please enter your name, and press 'Enter' to confirm... \n" << endl;
    getline(cin, first_name);
    cout << "\nHello, " << first_name << "! Nice to meet you!\n" << endl; 

    string friend1_first_name;
    cout << "Please enter the name of the person you want to write to, and press 'Enter' to confirm... \n" << endl;
    getline(cin, friend1_first_name);

    // Step 2
    cout << "\nDear " << friend1_first_name << ", how have you been? It's been such a long time since the last time we spoke. I miss you!" << endl; 
    cout << "I wanted to let you know that things are going well in here, the winter is almost over! You know, 6 moths of winter is enough..." << endl;
    cout << "I have to say that it has been a great time to start learing C++. I ordered this book that is really well explained and easy to follow." << endl;
    cout << "You told me once you wanted to leard to program, and I think this book will be great for you. The book is called " << endl;
    cout << "Programming, Principles and Practice Using C++, by Bjarne Stroustrup. He's the creator of C++ :P ...\n" << endl;

    // Step 3
    string friend2_first_name;   
    cout << "Please enter the name of a friend the person you are writting to and yourself know, and press 'Enter' to confirm... \n" << endl;
    getline(cin, friend2_first_name);
    cout << "\nHave you seen " << friend2_first_name << " lately?\n" << endl; 

    // Step 4
    char friend2_sex {0};
    cout << "Please enter the sex of " << friend2_first_name << ". Enter m if they are male or f if they are female, and press 'Enter' to confirm... \n" << endl;
    cin >> friend2_sex;

    if (friend2_sex == 'm'){
        cout << "\nIf you see " << friend2_first_name << " please ask him to call me.\n" << endl;
    }
    else if(friend2_sex == 'f'){
        cout << "\nIf you see " << friend2_first_name << " please ask her to call me.\n" << endl;
    }

    // Step 5
    int friend1_age;
    cout << "Please enter " << friend1_first_name << " age, and press 'Enter' to confirm... \n" << endl;
    cin >> friend1_age;

    if (friend1_age <= 0 || friend1_age >= 110){
        simple_error("You're kidding!");
    }

    cout << "\nI hear you just had a birthday and you are " << friend1_age << " years old." << endl;

    // Step 6 

    if (friend1_age < 12){
        cout << "Next year you will be " << friend1_age+1 << "!\n" << endl;
    }
    else if (friend1_age == 17){
        cout << "Next year you will be able to vote!\n" << endl;
    }
    else if (friend1_age > 70){
        cout << "I hope you are enjoying your retirement.\n" << endl;
    }
    else {
        cout << "Well, there is still time to do a lot of things...\n" << endl;
    }

    // Step 7
    cout << "Your sincerely, \n\n\n" << first_name << "\n" << endl;

    return 0;

}