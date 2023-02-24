#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef PALADIN_H
#define PALADIN_H

class paladin {
    public:
        vector<string> weapons;
        vector<string> armor;

        vector<string> base_mods;
        vector<string> abilities;

        vector<string> alignment;

        int level;
        double xp;
        double hp;

        double attacksPerRound;
        vector<string> spells;

    paladin();
};

#endif