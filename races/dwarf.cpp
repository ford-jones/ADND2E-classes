#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class dwarf {
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


    dwarf() {
        con = 11 + 1;
        str = 8;
        dex = 3;
        intel = 3;
        wis = 3;
        cha = 3 - 1;
        st_con = con / 3.5;
        st_magic = con / 3.5;
        st_poison = 0;
        // include spell failure and success 20%

        age = 40 < 350;
        height = 4;
        langs = { "Common", "Dwarven" };
        regions = {"Mountains", "Subterrania"};

        classes = { "Fighter", "Cleric", "Thief" };
        abilities = { "Detect Curse", "Detect Trap", "Infravision" };
        proficiencies = { "" };
        
        if(age >= 125) {
            str - 1;
            con -1;
            intel + 1;
            wis + 1; 
        } 
        else if(age >= 167) {
            str - 3;
            dex - 2;
            con - 2;
            intel + 1;
            wis + 2;
        }
        else if(age >= 250) {
            str - 4;
            dex - 2;
            con - 3;
            intel + 2;
            wis + 3;
        };
    }
};

int main() {
    dwarf dwarfObj;
    
    std::cout << dwarfObj.con << "\n";
    return 0;
}