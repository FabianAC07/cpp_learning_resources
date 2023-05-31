/*
    This is an exmaple demostrates ...

    "Try this:
    Write a program that "bleeps" out words that you don't like; that is, you
    read in words using cin and print them again on cout. If a word is among a
    few you have defined, you write out BLEEP instead of that word. Start with 
    one "disliked word" such as
    
            string dislike = "Broccoli" 
    
    When that works, ass a few more." [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 116, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){

    vector<string> dislike_words = {"carrot", "broccoli", "cabbage", "potato", "tomato", "spinach", "zucchini", "eggplant"};

    cout << "Enter words to check if they are in the black list." << endl;
    cout << "NOTE: Enter the word 'exit' to quit the program..." << endl;

    bool found = false;                                 // This is used to check if we have a matching word with the dislike vector

    for (string temp_word; cin >> temp_word;){          // read withespace-separated words

        // If the user enters 'exit', the program will be terminated
        if (temp_word == "exit") {
            break;
            return 0;
        }

        for (const auto& word : dislike_words){         // Loop into the dislike_words vector and check if the entered word matches any 
            if (temp_word != word){                     // if the word does not match any 
                continue;                               // continue
            }
            else {                                      // else, we have a BLEEP!
                found = true;
            }
        }

        // Print whether we have a word or a BLEEP
        if (found){
            cout << "BLEEP" << endl;
        }
        else {
            cout << "You entered: " << temp_word << endl;
        }

        found = false;                                  // set the found variable to false and repeat... 
            
    }

}