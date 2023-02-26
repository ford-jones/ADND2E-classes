#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

#ifndef DRUID_H
#define DRUID_H

class druid {
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
        
    druid();
};

#endif