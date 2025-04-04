//
// Created by up202411286 on 04-04-2025.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "print.h"
using namespace std;

void normalise(const string& input_fname, const string& output_fname) {
    /* normalises the contents of input file named input_fname and
     * writes them onto an output file named output_fname */
    ifstream in(input_fname);   // Read the file
    string line;                // To be read
    ofstream out(output_fname); // Write in the output file

    // Read line by line
    while (getline(in, line)) {
        istringstream iss(line);// Creates string from line; allows operations

        // Clean the spaces before and after the content of the line
        line.erase(0, line.find_first_not_of(' '));
        line.erase(line.find_last_not_of(' ') +1);

        // If the line has char != blank spaces
        if (line.length() != 0) {
            for (char& c : line) { c = toupper(c); }
            out << line << "\n";
        }
    }
}

int main () {
    // normalise("p3_test1.txt", "p3_test1_out.txt");
    // print("p3_test1_out.txt");
    normalise("p3_test2.txt", "p3_test2_out.txt");
    print("p3_test2_out.txt");
    return 0;
}