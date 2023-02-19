#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class elf {
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


    elf() {
        con = 7 - 1;
        str = 3;
        dex = 6 + 1;
        intel = 8;
        wis = 3;
        cha = 8;
        st_con = 0;
        st_magic = 0;
        st_poison = 0;
        // include spell failure and success

        age = 100 < 1200;
        height = 5;
        langs = { "Common", "Elven" };
        regions = { "Woodlands", "Forests", "Coastal", "Subterrania" };

        classes = { "Cleric", "Fighter", "Mage", "Thief", "Ranger" };
        abilities = { "Resist Charm", "Resist Sleep", "Detect Door", "Infravision" };
        proficiencies = { "Bows" };
        
        if(age >= 175) {
            str - 1;
            con -1;
            intel + 1;
            wis + 1;  
        } 
        else if(age >= 233) {
            str - 3;
            dex - 2;
            con - 2;
            intel + 1;
            wis + 2;
        }
        else if(age >= 350) {
            str - 4;
            dex - 2;
            con - 3;
            intel + 2;
            wis + 3;
        };
    }
};

int main() {
    elf elfObj;
    
    std::cout << elfObj.con << "\n";
    return 0;
}