/*
    This is an exmaple to detect repeated words

    "Try this:
    Get the "repeated word detection program" to run. Test it with the sentenece 

    She she laughed He He He beauce what he did did not look very very good good 

    How many repeated words were there? 
    Why? 
    What is the definition of word used here? 
    What is the definition of repeated word? (e.g., is She she a repetion?)" [1]

    REF: [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper Saddle River, Nj: Addison-Wesley, pp. 73, 2014.
*/

#include "../../Utils/headers/std_lib_facilities.h"

int main(){
    string previous = " ";      // previous word; initialized to "not a word"
    string current;             // current word

    while (cin >> current)      // read a statement of words
    {
        if (previous == current)    // check if the current word is the same as the last one
        {
            cout << "Repeated word: " << current << '\n';
        }
        previous = current;
    }


    return 0;

}
