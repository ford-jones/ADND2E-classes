#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef CLERIC_H
#define CLERIC_H

class cleric {
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
        vector<string> spheres;
        vector<string> spells;

    cleric();
};

#endif