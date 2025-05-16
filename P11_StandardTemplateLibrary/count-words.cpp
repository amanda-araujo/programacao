//
// Created by up202411286 on 16-05-2025.
//

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// Function for printing the vector
void show_vector(const vector<pair<string, size_t>>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
        std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}

void count_words(const string& str, vector<pair<string, size_t>>& count) {
    // Input: string, vector
    // Add to the vector pair (w , n); w: word in string, n: occurences

    // Case insensitive!
    for (auto& c : str) c = tolower(c)

    istringstream iss(str); // Sequence of strings, allows operations
    string w;

    while (iss >> w) { // pass a word to w

        bool in = false;
        for (auto p : count) {
            if (p.first == w) { // already in the vector
                p.second++;
                in = true;
                break;
            }
        }

        if (in == false) {
            // add word to count
            count.push_back(make_pair(w, 1));
        }
    }

}

int main () {
    string s = "If you want to buy  buy  if you don't want to buy  bye bye";
    vector<pair<string, size_t>> count;
    count_words(s, count);
    show_vector(count);
    return 0;
}

// 1 - Separate words
// 2 - Add words to the vector (w, 0)
// 3 - Count words