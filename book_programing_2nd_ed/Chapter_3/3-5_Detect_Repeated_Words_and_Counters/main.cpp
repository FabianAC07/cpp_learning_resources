/*
    This is an exmaple to detect repeated words

    "Try this:
    Get the "repeated word detection program" to run. Test it with the sentenece 

    She she laughed He He He beauce what he did did not look very very good good 

    How many repeated words were there? 
    Why? 
    What is the definition of word used here? 
    What is the definition of repeated word? (e.g., is She she a repetion?)" [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 75, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){
    int number_of_words = 0;            // initialize counter for words in input text
    int number_of_repeated_words = 0;   // initialize a counter for repeated words
    string previous = " ";              // previous word; initialized to "not a word"
    string current;                     // current word

    cout << "Please type a series of words or text to analyze it: \n" << endl;

    while (cin >> current)              // read a statement of words
    {
        ++number_of_words;              // increase the word counter by 1
        if (previous == current)        // check if the current word is the same as the last one
        {
            ++number_of_repeated_words; // increase the repeated word counter by 1
            cout << "The word number " << number_of_words << " is a repeated word: " << current << '\n';
        }
        previous = current;
    }

    cout << "The total amount of repeated words in your input text is: " << number_of_repeated_words << endl;

    cout << "Please insert another text or word. To terminate this program press Ctrl + D in your keyboard." << endl; 

    return 0;

}

/*
    How many repeated words were there? Five words were repeated words
    Why? 
    What is the definition of word used here? 
    What is the definition of repeated word? (e.g., is She she a repetion?)

*/