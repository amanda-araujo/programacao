//
// Created by up202411286 on 16-05-2025.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

// Function for printing the vector
void show_vector(const vector<pair<string, size_t>>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
        std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}

bool compare_str(pair<string, size_t> a, pair<string, size_t> b) {
    return a.first < b.first;
}

void count_words(const string& str, vector<pair<string, size_t>>& count) {
    // Input: string, vector
    // Add to the vector pair (w , n); w: word in string, n: occurences

    // Case insensitive!
    string copystr;
    for (auto& c : str) { copystr.push_back(tolower(c)); }

    istringstream iss(copystr); // Sequence of strings, allows operations
    string w;

    while (iss >> w) { // pass a word to w

        bool in = false;
        for (auto& p : count) {
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

    // alphabetic order!
    sort(count.begin(), count.end(), compare_str);
}

int main () {
    string s = "If you want to buy  buy  if you don't want to buy  bye bye";
    vector<pair<string, size_t>> count;
    count_words(s, count);
    show_vector(count);
    cout << "hey count-words";
    return 0;
}

// 1 - Separate words
// 2 - Add words to the vector (w, 0)
// 3 - Count words