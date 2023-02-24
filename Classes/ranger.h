#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef RANGER_H
#define RANGER_H

class ranger {
    public:
        vector<string> weapons;
        vector<string> armor;

        vector<string> base_mods;
        vector<string> abilities;

        vector<string> alignment;
        vector<string> enemies;

        int level;
        int castingLevel;
        double xp;
        double hp;

        double attacksPerRound;
        int numOfSpells;
        vector<string> magicSchools;        
        vector<string> spells;

    ranger();
};

#endif