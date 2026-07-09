#include "calculator.h"
#include "wordlist.h"
#include "rule.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

calculator::calculator() {
    string data(
        reinterpret_cast<char*>(wordlist_txt),
        wordlist_txt_len
    );
    stringstream ss(data);
    string word;
    while (getline(ss, word)) {
        if (!word.empty()) {
            wordlist.push_back(word);
        }
    }
}