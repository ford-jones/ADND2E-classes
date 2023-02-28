#include <iostream>
#include <string>
#include <vector>
#include "halfling.h"

using std::string;
using std::vector;

    halfling::halfling() {
        con = 6;
        str = 3 - 1;
        dex = 6 + 1;
        intel = 4;
        wis = 3;
        cha = 3;
        st_con = 0;
        st_magic = con / 3.5;
        st_poison = con / 3.5;
        // include spell failure and success

        age = 20 < 150;
        height = 4;
        langs = { "Common", "Halfling" };
        regions = { "Rolling Hills" };

        classes = { "Cleric", "Fighter", "Thief" };
        abilities = { "" };
        proficiencies = { "Throw", "Sling" };
        
        if(age >= 0) {
            str - 1;
            con -1;
            intel + 1;
            wis + 1;   
        } 
        else if(age >= 0) {
            str - 3;
            dex - 2;
            con - 2;
            intel + 1;
            wis + 2;
        }
        else if(age >= 0) {
            str - 4;
            dex - 2;
            con - 3;
            intel + 2;
            wis + 3;
        };
    };