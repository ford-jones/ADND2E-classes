#include <iostream>
#include <string>
#include <vector>
#include "half-elf.h"

using std::string;
using std::vector;

    halfElf::halfElf() {
        con = 6;
        str = 3;
        dex = 6;
        intel = 4;
        wis = 3;
        cha = 3;
        st_con = 0;
        st_magic = 0;
        st_poison = 0;
        // include spell failure and success

        age = 20 < 160;
        height = 5;
        langs = { "Common", "Elven" };
        regions = { "Grassy Plains", "Rolling Hills", "Tundra", "Desert", "Mountains" };

        classes = { "Cleric", "Druid", "Fighter", "Ranger", "Mage", "Illusionist", "Thief", "Bard" };
        abilities = { "Infravision", "Resist Sleep", "Resist Charm", "Detect Door" };
        proficiencies = { "" };
        
        if(age >= 62) {
            str - 1;
            con -1;
            intel + 1;
            wis + 1;   
        } 
        else if(age >= 83) {
            str - 3;
            dex - 2;
            con - 2;
            intel + 1;
            wis + 2;
        }
        else if(age >= 125) {
            str - 4;
            dex - 2;
            con - 3;
            intel + 2;
            wis + 3;
        };
    };