//
// Created by Amanda on 20/04/2025.
//
#include <iostream>
#include "show_file.h"
#include <string>
using namespace std;


/* reads double values with variable number of decimal places,
 * stored one per line in an input file named input_fname,
 * and outputs to a file named output_fname the corresponding values,
 * one per line, rounded to 3 decimal places.*/
void maximum(const string& input_fname, const string& output_fname) {

    // Open Input/output files
    ifstream in(input_fname);   // Read the file
    ofstream out(output_fname); // Write in the output file

    int count = 0;      // Number of numbers read
    double max = -1001; // Maximum value read
    double numline;     // To be read

    out << fixed << setprecision(3); // 3 decimals

    // Read line by line (number by number)
    while (in >> numline) {
        out << numline << setprecision(3) << endl;
        if (numline > max) max = numline;
        count++;
    }

    // Maximum value and number of lines
    out << "count=" << count << "/max=" << max << endl;

    // Close Input/output files
    in.close();
    out.close();
}

int main () {
    return 0;
}
