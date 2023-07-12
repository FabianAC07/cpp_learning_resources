/*
    This is an exmaple demostrates Chapter 4 - Exercise 3.

    "Read a sequence of double values into a vector. Think of each value as 
    the distance between two cities along a given route. Compute and print
    the total distance (the sum of all distances). Find and print the samllest
    and greatest distance between two neighboring cities. Find and print the 
    mean distance between two neighboring cities" [1]

    REF:    [1] Bjarne Stroustrup, Programming : Principles and Practice Using C++. Upper 
                Saddle River, Nj: Addison-Wesley, pp. 128, 2014.
            [2] Definition of mean:  https://en.wikipedia.org/wiki/Average
         
*/

#include "../../../Utils/headers/std_lib_facilities.h"

// Compute mean and median temperatures

int main()
{
    cout << "This program reads in a sequence of distances between 2 cities, and returns:" << endl;
    cout << "\t1. The total amount of distances." << endl;
    cout << "\t2. The shortest distance bewteen the two cities." << endl;
    cout << "\t3. The largest distance bewteen the two cities." << endl;
    cout << "\t4. The mean distance bewteen the two cities.\n\n" << endl;
    
    cout << "Input the character '|' to terminate the program. \n" << endl;
    cout << "Input the distances between the two cities in kilometers (km): \n" << endl;

    vector<double> distances;                       // distances vector

    if (distances.empty())
    {
        for (double distance; cin >> distance;)     // read into distances
        {
            distances.push_back(distance);          // put distance into distances vector
        }
    }
        
    // 1. The sum of the distances
    double sum_distances = 0;
    for (double x : distances) 
    {
        sum_distances += x;
    }

    // 2. Find the shortest distance between the cities
    auto smallest_distance = min_element(distances.begin(), distances.end());

    // 3. Find the shortest distance between the cities
    auto largest_distance = max_element(distances.begin(), distances.end());
    
    // 4. Compute the mean of the distances 
    double mean_distance =  sum_distances / distances.size();


    // Print output 
    cout << "\n---------------------------------------------------------------\n" << endl;
    cout << "The total amount of distance samples is: " << distances.size() << endl;
    cout << "1. The total amount of kilometers in the sample is: " << sum_distances << " km" << endl;
    cout << "2. The shortest distance between the two cities is: " << *smallest_distance << " km" << endl;
    cout << "3. The largest distance between the two cities is:  " << *largest_distance << " km" << endl;
    cout << "4. The mean distance between the cities is:         " << mean_distance << endl;

}