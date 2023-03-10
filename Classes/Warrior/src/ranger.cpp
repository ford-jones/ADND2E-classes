#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <time.h>
#include "../hdr/ranger.h"

using std::string;
using std::vector;

int d10R() {
    srand(time((0)));
    int number = 1 + (rand() % 10);
    return number;
};

ranger::ranger() {

        alignment = {"Lawful Good", "Neutral Good", "Chaotic Good"};
        enemies = {"Giant", "Orc", "Lizard Man", "Troll", "Ghoul"};

        weapons = {"Arquebus", "Battle Axe", "Belaying Pin", "Blowgun", "Bola", "Short Bow", "Long Bow", "Composite Bow", "Cestus", "Club", "Crossbow-light", "Crossbow-heavy", "Crossbow-hand", "Dagger", "Dart", "Flail", "Throwing Axe", "Harpoon", "Javelin", "Lance", "Mace", "Morning Star", "Polearm", "Glaive", "Halberd", "Quaterstaff", "Sickle", "Sling", "Long-Spear", "Broad Sword", "Bastard Sword", "Claymore", "Long Sword", "Rapier", "Sabre", "Short Sword", "Two-handed Sword", "Trident", "Warhammer", "Whip"};
        armor = {"Clothing", "Padded Armor", "Leather Armor", "Studded Leather Armor", "Hide Armor", "Scale Mail", "Brigandine Armor", "Chain Mail", "Banded Mail", "Bronze Plate Mail", "Plate Mail", "Field Plate Armor", "Full Plate Armor", "Elven Chain"};

        base_mods = {""};
        abilities = {"Hide in Shadows", "Move Silently", "Tracking", "Dual Wield", "Pacify Beast"};

        level = 1;
        castingLevel = 0;
        xp = 0;
        hp = 10 + (level * d10R());

        attacksPerRound = 1;
        numOfSpells = 0;

        magicSchools = {"Priest Spells"};
        spheres = {""};
        spells = {""};

    if(level > 6 && level < 13) {
        attacksPerRound = 1.5;
    }
    else if(level >= 13) {
        attacksPerRound = 2;
    }
};

//  if a player has 16 or more strength AND dexterity AND wisdom they recieve xp * 0.1
//  player becomes a fighter if allignment is broken
//  None of the rangers abilities are usable in armor heavier than studded leather (except for dual wield, which just becomes penalised cth like every other class)
//  At 10th level the ranger attracts 2d6 followers, all of which are animals
