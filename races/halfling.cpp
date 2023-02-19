#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

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


    halfling() {
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
    }
};

int main() {
    halfling halflingObj;
    
    std::cout << halflingObj.con << "\n";
    return 0;
}