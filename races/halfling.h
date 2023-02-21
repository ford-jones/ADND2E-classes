#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef HALFLING_H
#define HALFLING_H

class halfling {
    public:
        double con;
        double str;
        double dex;
        double intel;
        double wis;
        double cha;
        double st_con;
        double st_magic;
        double st_poison;

        int age;
        int height;
        vector<string> langs;
        vector<string> regions;
        
        vector<string> classes;
        vector<string> abilities;
        vector<string> proficiencies;


    halfling();
};

#endif