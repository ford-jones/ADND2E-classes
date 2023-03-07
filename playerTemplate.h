#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef PLAYER_H
#define PLAYER_H

class playerTemplate {
    public: 
        string playerName;
        int playerAge;
        string alignment;

        int con;
        int dex;
        int str;
        int intel;
        int wis;
        int cha;

        string playerRace;
        string playerClass;
        vector<string> langs;

        int level;
        double hp;
        double xp;
        int spellsPerDay;

        int gold;
        int encumberance;
        vector<string> inventory;
        double encumberance;
        vector<string> spells;

        vector<string> abilities;
        vector<string> profficiencies;
        vector<string> magicSchools;
        string sphere;
    playerTemplate();
};

#endif