#pragma once

#include <string>
#include <vector>
#include "rule.h"

class calculator {
public:
    calculator();
    std::string nextguess(const std::vector<rule&>& data);
private:
    std::vector<rule&> totalrules;
    std::vector<std::string> wordlist;
};