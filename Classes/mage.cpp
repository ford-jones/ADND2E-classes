#include <iostream>
#include <vector>
#include <string>
#include "mage.h"

using std::string;
using std::vector;

int d4() {
    srand(time((0)));
    int number = 1 + (rand() % 4);
    return number;
};

mage::mage() {
    
    alignment = {"Lawful Good", "Neutral Good", "Chaotic Good", "Lawful Neutral", "True Neutral", "Chaotic Neutral", "Lawful Evil", "Neutral Evil", "Chaotic Evil"};
    enemies = {""};

    weapons = {"Dagger", "Staff", "Dart", "Sling"};
    armor = {"Clothing"};

    base_mods = {""};
    abilities = {"Create Spell", "Enchant Item"};

    level = 1;
    castingLevel = 0;
    xp = 0;
    hp = 0 + (level * d4());

    attacksPerRound = 1;
    numOfSpells = 1;


    magicSchools = {"Abjuration", "Alteration", "Conjuration", "Charm", "Lesser Divination", "Greater Divination", "Illusion", "Evocation", "Necromancy"};
    spheres = {""};
    spells = {"Conjure Spell Component", "Fireburst", "Fist of Stone", "Hornungs guess", "Metamorphose Liquids", "Murdochs Feathery Flyer", "Nahals Reckless Dweomer", "Patternweave", "Affect Normal Fires", "Alarm", "Armor", "Audible Glamer", "Burning Hands", "Cantrip", "Change Self", "Charm Person", "Chill Touch", "Color Spray", "Comprehend Languages", "Dancing Lights", "Detect Undead", "Enlarge", "Erase", "Feather Fall", "Find Familiar", "Friends", "Gaze Reflection", "Grease", "Hold Portal", "Hypnotism", "Identify", "Jump", "Light", "Magic Missile", "Mending", "Message", "Mount", "Nystuls Magical Aura", "Phantasmal Force", "Protection From Evil", "Read Magic", "Shield", "Shocking Grasp", "Sleep", "Spider Climb", "Spook", "Taunt", "Tensers Floating Disc", "Unseen Servant", "Ventriloquism", "Wall of Fog", "Wizard Mark"};
};

int main() {
    mage mageObj;

    std::cout << "Mage Abilities:" << "\n";
        for(auto i: mageObj.abilities) {
            std::cout << i << "\n";
        };
        
    return 0;
};