//
// Created by Amanda on 17/06/2025.
//

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const pair<string, double>& a, const pair<string, double>& b) {
    return a.second > b.second; // descending order (default: <)
}

string student_highest_avg(map<string, list<int>> m) {
    // map: (st_name, grades)
    string namemax; // highest avg grade
    vector<pair<string, double>> avgrades; // st_name, double grade;

    for (auto it = m.begin(); it != m.end(); it++) {
        // for each student

        // calculates avg grade
        double avgrade = 0.0;
        for (auto g : it->second) { avgrade += g; }
        avgrade /= it->second.size();

        // add in new map (st_name, avgrade)
        avgrades.push_back(make_pair(it->first, avgrade));
    }

    // sort avg grade >>> vector can be sorted!
    sort(avgrades.begin(), avgrades.end(), compare);
    namemax = avgrades.front().first;

    return namemax;
}

int main() {
    map<string, list<int>> m1 = {
        {"Jerry", {10, 20, 15}}};
    std::cout << student_highest_avg(m1) << std::endl;

    map<string, list<int>> m2 = {
        {"Elaine", {15, 18, 14, 16}}, {"Newman", {18, 12, 19}}};
    std::cout << student_highest_avg(m2) << std::endl;

    map<string, list<int>> m3 = {
        {"Whatley", {10, 10}}, {"Kramer", {11, 12, 14}}, {"Cosmo", { 15, 10, 13}}};
    std::cout << student_highest_avg(m3) << std::endl;
    return 0;
}