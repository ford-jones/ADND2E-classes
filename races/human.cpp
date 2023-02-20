#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

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


    human() {
        con = 8;
        str = 9;
        dex = 9;
        intel = 8;
        wis = 6;
        cha = 6;
        st_con = 0;
        st_magic = 0;
        // include spell failure and success

        age = 20 < 80;
        height = 6;
        langs = { "Common" };
        regions = { "Grassy Plains", "Rolling Hills", "Tundra", "Desert", "Mountains" };

        classes = { "Cleric", "Druid", "Fighter", "Ranger", "Mage", "Illusionist", "Thief", "Bard", "Paladin" };
        abilities = { "" };
        proficiencies = { "" };
        
        if(age >= 35) {
            str - 1;
            con -1;
            intel + 1;
            wis + 1;   
        } 
        else if(age >= 45) {
            str - 3;
            dex - 2;
            con - 2;
            intel + 1;
            wis + 2;
        }
        else if(age >= 60) {
            str - 4;
            dex - 2;
            con - 3;
            intel + 2;
            wis + 3;
        };
    }
};

int main() {
    human humanObj;
    
    std::cout << humanObj.con << "\n";
    return 0;
}