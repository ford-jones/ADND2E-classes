#include <iostream>
#include <string>
#include <vector>
#include "halfling.h"

using std::string;
using std::vector;

#ifndef HUMAN_H
#define HUMAN_H
 
class human {
    public:
        double con;
        double str;
        double dex;
        double intel;
        double wis;
        double cha;
        double st_con;
        double st_magic;

        int age;
        int height;
        vector<string> langs;
        vector<string> regions;
        
        vector<string> classes;
        vector<string> abilities;
        vector<string> proficiencies;


    human();
};

#endif