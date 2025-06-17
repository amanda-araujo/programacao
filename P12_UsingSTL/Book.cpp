#include "Book.h"
#include "Page.h"

#include <iostream>
#include <string>
#include <fstream>
 
using std::string;
using std::ifstream;

Book::Book() { }

//! Imports book contents from text file ‘filename’
bool Book::import(const string& filename) {
  ifstream f(filename);
  if (f.fail()) {
    return false;
  } else {
    string line;
    Page page;
    while (getline(f, line)) {
      if (line == "<PAGE>") {
        this->book_.push_back(page);
        page.clear();
      } else
        page.add_line(line);
    }
    return true;
  }
}

//! Builds ‘index’ for the ‘words’ received as parameter
//void Book::build_index(const set<string>& words) {
//}

//! Shows book
void Book::show_book() const {
  size_t page_num = 0;
  for (const Page& page : book_) {
    std::cout << "PAGE " << ++page_num << std::endl;
    page.show();
  }
  std::cout << std::endl;
}

//! Shows book index
void Book::show_index() const {
  std::cout << "/ ";
  for (const auto& i : index_) {
    std::cout << i.first << ": ";
    for (const auto& p : i.second)
      std::cout << p << " ";
    std::cout << "/ ";
  }
  std::cout << std::endl;
}
