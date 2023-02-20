#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class halfElf {
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


    halfElf() {
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
        regions = { "" };

        classes = { "Cleric", "Druid", "Fighter", "Ranger", "Mage", "Illusionist", "Thief", "Bard" };
        abilities = { "Infravision", "Resist Sleep", "Resist Charm", "Detect Door" };
        proficiencies = { "Grassy Plains", "Rolling Hills", "Tundra", "Desert", "Mountains" };
        
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
    }
};

int main() {
    halfElf halfElfObj;
    
    std::cout << halfElfObj.con << "\n";
    return 0;
}