#include <iostream>
#include <string>
#include <vector>
#include "gnome.h"

using std::string;
using std::vector;

    gnome::gnome() {
        con = 8;
        str = 6;
        dex = 3;
        intel = 6 + 1;
        wis = 3- 1;
        cha = 3;
        st_con = con / 3.5;
        st_magic = con / 3.5;
        st_poison = 0;
        // include spell failure and success 20%

        age = 60 < 350;
        height = 2;
        langs = { "Common", "Gnomish", "Dwarven" };
        regions = { "Woodlands", "Rolling Hills" };

        classes = { "Fighter", "Thief", "Cleric", "Illusionist" };
        abilities = { "Infravision", "Detect Curse" };
        proficiencies = { "" };

        if(age >= 100) {
            str - 1;
            con -1;
            intel + 1;
            wis + 1;   
        } 
        else if(age >= 133) {
            str - 3;
            dex - 2;
            con - 2;
            intel + 1;
            wis + 2;
        }
        else if(age >= 200) {
            str - 4;
            dex - 2;
            con - 3;
            intel + 2;
            wis + 3;
        };
    };