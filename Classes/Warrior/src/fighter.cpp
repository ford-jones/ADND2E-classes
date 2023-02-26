#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <time.h>
#include "../hdr/fighter.h"

using std::string;
using std::vector;

int d10() {
    srand(time((0)));
    int number = 1 + (rand() % 10);
    return number;
};

fighter::fighter() {

    alignment = {"Lawful Good", "Neutral Good", "Chaotic Good", "Lawful Neutral", "True Neutral", "Chaotic Neutral", "Lawful Evil", "Neutral Evil", "Chaotic Evil"};
    enemies = {""};

    weapons = {"Arquebus", "Battle Axe", "Belaying Pin", "Blowgun", "Bola", "Short Bow", "Long Bow", "Composite Bow", "Cestus", "Club", "Crossbow-light", "Crossbow-heavy", "Crossbow-hand", "Dagger", "Dart", "Flail", "Throwing Axe", "Harpoon", "Javelin", "Lance", "Mace", "Morning Star", "Polearm", "Glaive", "Halberd", "Quaterstaff", "Sickle", "Sling", "Long-Spear", "Broad Sword", "Bastard Sword", "Claymore", "Long Sword", "Rapier", "Sabre", "Short Sword", "Two-handed Sword", "Trident", "Warhammer", "Whip"};
    armor = {"Clothing", "Padded Armor", "Leather Armor", "Studded Leather Armor", "Hide Armor", "Scale Mail", "Brigandine Armor", "Chain Mail", "Banded Mail", "Bronze Plate Mail", "Plate Mail", "Field Plate Armor", "Full Plate Armor", "Elven Chain"};

    base_mods = {""};
    abilities = {""};

    level = 1;

    xp = 0;
    hp = 10 + (level * d10());

    attacksPerRound = 1;
    numOfSpells = 0;


    magicSchools = {""};
    spheres = {""};
    spells = {""};

    if(level > 6 && level < 13) {
        attacksPerRound = 1.5;
    }
    else if(level >= 13) {
        attacksPerRound = 2;
    }

};
    //  cannot use magic
    //  if a player has 16 or more strength they recieve xp * 0.1


int main() {
    fighter fighterObj;
        std::cout << "Fighter Health:" << "\n";
        std::cout << fighterObj.hp << "\n";
    return 0;
};