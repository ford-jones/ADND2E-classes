#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <time.h>
#include "druid.h"

using std::string;
using std::vector;

int d8() {
    srand(time((0)));
    int number = 1 + (rand() % 8);
    return number;
};

druid::druid() {
        weapons = {"Club", "Sickle", "Spear", "Dart", "Sabre", "Dagger", "Sling", "Quaterstaff"};
        armor = {"Clothing", "Padded Armor", "Leather Armor", "Studded Leather Armor", "Hide Armor"};

        base_mods = {""};
        abilities = {"Druid Speak", "Beast speak", "Charm Immunity", "Shapeshift"};

        alignment = {"Lawful Neutral", "True Neutral", "Chaotic Neutral"};
        enemies = {""};

        level = 1;
        castingLevel = 0;
        xp = 0;
        hp = 0 + (level * d8());

        attacksPerRound = 1;
        numOfSpells = 1;
        
        magicSchools = {"Priest Spells"};
        spheres = {"All", "Animal", "Elemental", "Healing", "Plant", "Weather"};
        spells = {"Bless", "Combine", "Detect Evil", "Animal Friendship", "Invisibility to Animals", "Locate Animal/Plant", "Create Water", "Cure Light Wounds", "Entangle", "Pass Without Trace", "Shillelagh", "Faerie Fire"};
}

    //  +2 st against fire / lightning magic (evocation)
    //  druid speak** druids have a secret language they can speak to one another
int main() {
    druid druidObj;
    return 0;
};