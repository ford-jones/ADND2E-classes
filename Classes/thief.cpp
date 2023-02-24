#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <cstdlib>
#include "thief.h"

using std::string;
using std::vector;

int d6() {
    srand(time((0)));
    int number = 1 + (rand() % 6);
    return number;
};

thief::thief() {
        weapons = {"Club", "Dagger", "Dart", "Hand Crossbow", "Short Bow", "Long Bow", "Sling", "Broadsword", "Longsword", "Short Sword", "Quaterstaff"};
        armor = {"Leather Armor", "Studded Leather Armor", "Padded Armor", "Elven Chain"};

        base_mods = {""};
        abilities = {"Pickpocket", "Detect Noise", "Move Silently", "Lockpicking", "Detect Trap", "Disarm Trap", "Hide in Shadows", "Read Languages", "Backstab", "Thieves Cant", "Use Scrolls"};

        alignment = {"Neutral Good", "Chaotic Good", "Lawful Neutral", "True Neutral", "Chaotic Neutral", "Lawful Evil", "Neutral Evil", "Chaotic Evil"};
        enemies = {""};

        level = 1;
        castingLevel = 0;
        xp = 0;
        hp = 0 + (level * d6());

        attacksPerRound = 1;
        numOfSpells = 0;
        
        magicSchools = {""};
        spheres = {""};
        spells = {""};
};

//   A player with 16 dex recieves xp * 0.1


int main() {
    thief thiefObj;
    return 0;
};