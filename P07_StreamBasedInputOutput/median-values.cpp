//
// Created by Amanda on 20/04/2025.
//
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
#include "show_file.h"
using namespace std;

/* reads several series of double values, one series per line,
 * stored in input file named input_fname,
 * and outputs to file name output_fname corresponding lines with
 * the median value of the series.*/
void calc_medians(const string& input_fname, const string& output_fname) {

    // Open Input/output files
    ifstream in(input_fname);   // Read the file
    ofstream out(output_fname); // Write in the output file

    string line; // To be read
    out << fixed << setprecision(1); // 1 decimal: output file

    // Read line by line (series by series)
    while (getline(in, line)) {

        // Ignore comments
        if (line[0] == '#') continue;

        // Read series
        istringstream iss(line);

        // Id series
        string id;
        iss >> id;

        // Numbers of the series
        vector<double> numbers;
        double num;

        while (iss >> num) numbers.push_back(num); // Read all doubles
        sort(numbers.begin(), numbers.end()); // Sort small to big

        // Take the median
        double median;
        size_t n = numbers.size();
        if (n % 2 == 0) median = (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
        else median = numbers[n/2];

        // Write in the ouput file
        out << id << " " << median << endl;
    }

    // Close Input/output files
    in.close();
    out.close();
}

int main () {
    return 0;
}