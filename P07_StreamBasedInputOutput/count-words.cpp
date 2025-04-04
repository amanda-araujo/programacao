//
// Created by up202411286 on 04-04-2025.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int count(const string& fname, const string& word) {
    // returns the number of occurrences of the word in the file named fname
    // word count should be case insensitive (e.g. "string" = "STRING"
    int counter = 0;

    ifstream in(fname); // Read the file
    string line;        // To be read

    // Case insensitive
    //for (char& w : word) { w = tolower(w); } // Case insentive
    // word is const! cannot be altered
    string targetword = word;
    for (char& w : targetword) { w = tolower(w); }

    // Reading line by line
    while (getline(in, line)) {
        istringstream iss(line);// Creates string from line; allows operations
        string s;

        // Searches for the word inside the line
        while (iss >> s) { // Read and save its value in s
            // Case insensitive
            for (char& c : s) { c = tolower(c); } // char!
            if (s == targetword) counter++;
        }
    }
    return counter;
}

int main () {
    cout << count("p1_test_a.txt", "THE") << '\n'; // 4
    std::cout << count("p1_test_b.txt", "you") << '\n'; // 21 ok!
    std::cout << count("p1_test_b.txt", "Collider") << '\n'; // 6
    return 0;
}

/* fstream
 *
 * ifstream::in(fname); // Read the file
 * ofstream::out(fname); // Write in the file
 *
 * Remember: string here is an OBJECT
 * Thus, we must use the class METHODS to deal with it
 */