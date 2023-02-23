#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef BARD_H
#define BARD_H

class bard {
    public:
        vector<string> abilities;
        vector<string> proficiencies;
        vector<string> base_mods;

    bard();
};

#endif