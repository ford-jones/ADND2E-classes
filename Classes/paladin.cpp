#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <time.h>
#include "paladin.h"

using std::string;
using std::vector;

int rng() {
    srand(time((0)));
    int number = 1 + (rand() % 10);
    return number;
};

paladin::paladin() {
    alignment = {"Lawful Good"};

    weapons = {"Arquebus", "Battle Axe", "Belaying Pin", "Blowgun", "Bola", "Short Bow", "Long Bow", "Composite Bow", "Cestus", "Club", "Crossbow-light", "Crossbow-heavy", "Crossbow-hand", "Dagger", "Dart", "Flail", "Throwing Axe", "Harpoon", "Javelin", "Lance", "Mace", "Morning Star", "Polearm", "Glaive", "Halberd", "Quaterstaff", "Sickle", "Sling", "Long-Spear", "Broad Sword", "Bastard Sword", "Claymore", "Long Sword", "Rapier", "Sabre", "Short Sword", "Two-handed Sword", "Trident", "Warhammer", "Whip"};
    armor = {"Padded Armor", "Leather Armor", "Studded Leather Armor", "Hide Armor", "Scale Mail", "Brigandine Armor", "Chain Mail", "Banded Mail", "Bronze Plate Mail", "Plate Mail", "Field Plate Armor", "Full Plate Armor"};

    base_mods = {"player.st_con + 2, player.st_magic + 2, player.st_poison +2"};
    abilities = {"Detect Evil", "Disease Immunity", "Lay On Hands", "Cure Disease", "Aura of Protection", "Turn Undead", "Circle of Power", "Call War Horse"};

    level = 1;
    xp = 0;
    hp = 0 + (level * rng());

    attacksPerRound = 1;
    spells = {"Priest Spells"};

    if(level > 6 && level < 13) {
        attacksPerRound = 1.5;
    }
    else if(level >= 13) {
        attacksPerRound = 2;
    }
};

//  if a player has 16 or more strength AND charisma they recieve xp * 0.1
//  loses powers and becomes a fighter if breaks alignment
//  cannot retain wealth
//  cannot have followers
//  cannot have more than 10 magic items


int main() {
    paladin paladinObj;

        std::cout << "Paladin Abilities:" << "\n";
        for(auto i: paladinObj.abilities) {
            std::cout << i << "\n";
        };

    return 0;
};