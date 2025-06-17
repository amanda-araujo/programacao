//
// Created by Amanda on 17/06/2025.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

void show_map(const map<string, size_t>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
        std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}

void count_words(const string& str, map<string, size_t>& count) {

    istringstream iss(str);
    string w;

    while (iss >> w) { // for each word

        // case insensitive: tolower
        for (auto& c : w) { c = tolower(c); }

        auto it = count.find(w);

        if (it != count.end()) {
            // already there, update counter
            it->second++;
        } else { // it == count.end(): not there; new
            count.insert(make_pair(w, 1));
        }
    }
}

int main() {
    string s = "If you want to buy  buy  if you don't want to buy  bye bye";
    map<string, size_t> count;
    count_words(s, count);
    show_map(count);
    return 0;
}