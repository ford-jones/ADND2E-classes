#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <time.h>
#include "../hdr/cleric.h"

using std::string;
using std::vector;

int d8() {
    srand(time((0)));
    int number = 1 + (rand() % 8);
    return number;
};


cleric::cleric() {
        weapons = { "Club", "Dagger", "Dart", "Flail", "Mace", "Morning Star", "Quaterstaff", "Sickle", "Sling", "Warhammer"};
        armor = {"Clothing", "Padded Armor", "Leather Armor", "Studded Leather Armor", "Hide Armor", "Scale Mail", "Brigandine Armor", "Chain Mail", "Banded Mail", "Bronze Plate Mail", "Plate Mail", "Field Plate Armor", "Full Plate Armor"};

        base_mods = {""};
        abilities = {"Turn Undead"};

        alignment = {"Lawful Good", "Neutral Good", "Chaotic Good", "Lawful Evil", "Neutral Evil", "Chaotic Evil"};
        enemies = {""};

        level = 1;
        castingLevel = 0;
        xp = 0;
        hp = 8 + (level * d8());

        attacksPerRound = 1;
        numOfSpells = 1;

        magicSchools = {"Priest Spells"};
        spheres = {"All", "Animals", "Astral", "Charm", "Combat", "Creation", "Divination", "Elemental", "Gaurdian", "Healing", "Necromantic", "Plant", "Protection", "Summoning", "Sun", "Weather"};
        spells = {"Animal Friendship", "Bless", "Combine", "Command", "Create Water", "Cure Light Wounds", "Detect Evil", "Detect Trap", "Detect Magic", "Detect Poison", "Endure Heat/Cold", "Entangle", "Faerie Fire", "Invisibility to Animals", "Invisibility to Undead", "Light", "Locate Animals/Plants", "Magical Stone", "Pass Without Trace", "Protection from Evil", "Purify Food/Drink", "Dispell Fear", "Sanctuary", "Shillelagh"};
};

//  weapons are conditional depending on sphere / deity

int main() {
    cleric clericObj;

    std::cout << "Cleric Spheres:" << "\n";
    for(auto i: clericObj.spheres) {
        std::cout << i << "\n";
    };

    return 0;
};