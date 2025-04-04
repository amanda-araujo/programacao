//
// Created by up202411286 on 04-04-2025.
//

#include <iostream>
#include "wc.h"
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

/* struct wcresult {
  unsigned int lines;
  unsigned int words;
  unsigned int bytes;
};*/

wcresult wc(const std::string& filename) {
    // reads a file and computes statistics
    // the total number of lines, total number of words, and number of bytes
    wcresult res; // Creates object
    int nlines = 0, nwords = 0, nbytes = 0;

    ifstream in(filename); // Open the file
    string line;           // To be read

    // Read line by line
    while (getline(in, line)) {
        nlines++;
        //cout << line <<endl;

        istringstream iss(line);// Creates string from line; allows operations
        string s;

        // Counting bytes: number of chars = 1 byte
        nbytes += line.length();

        // Reading word by word inside a line
        while (iss >> s) {
            nwords++;
        }

        nbytes++; // '\n' counts
    }

    // Modifies the object fields
    res.lines = nlines;
    res.words = nwords; // OK
    res.bytes = nbytes;
    return res;
}

int main () {
    // wcresult r = wc("p2_test1.txt");
    wcresult r = wc("p2_test2.txt");
    // wcresult r = wc("p2_test3.txt"); // 1 9 44
    std::cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n';
    return 0;
}

/* Hints: You should use an ifstream object to read a file and
 * getline to read entire lines onto string objects.
 * Employing istringstream may also be useful to break a line into words. */