//
// Created by Amanda on 17/06/2025.
//

#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include "Book.h"
using namespace std;

/*Book: private:
  std::vector<Page> book_;                        // the pages
  std::map<std::string, std::set<size_t>> index_; // the index */

// Member function: builds the index of a book.
void Book::build_index(const set<string>& words) {
    // input: words to be indexed
    // index: map <word, set: number of pages word occurs>
    // no occurrences >> omitted from index

    // Read the book file: book_ vector<Page> OK
    // Read page by page: number of pages given by book_.size()
    for (size_t i = 0; i < book_.size(); i++) {
        const Page& page = book_[i];

        // Read line by line:
        for (size_t j = 0; j < page.get_num_lines(); j++) {
            // Read word by word for each line: use istringstream
            istringstream iss(page.get_line(j)); // line
            string word;

            while (iss >> word) {
                // check indexation
                auto it = words.find(word);
                if (it != words.end()) { // word needs to be in index_
                    index_[word].insert(i + 1); // insert number of page
                }
            }
        }
    }
}

int main () {
    Book b;
    if (!(b.import("book_01.txt"))) std::cout << "book not found! \n";
    set<string> words = { "C++", "linux", "computer" };
    b.build_index(words);
    b.show_index();
    return 0;
}