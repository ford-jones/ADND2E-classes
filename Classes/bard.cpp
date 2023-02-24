#include <iostream>
#include <vector>
#include <string>
#include "bard.h"

using std::string;
using std::vector;

int d6() {
    srand(time((0)));
    int number = 1 + (rand() % 6);
    return number;
};

bard::bard() {
        weapons = {"Arquebus", "Battle Axe", "Belaying Pin", "Blowgun", "Bola", "Short Bow", "Long Bow", "Composite Bow", "Cestus", "Club", "Crossbow-light", "Crossbow-heavy", "Crossbow-hand", "Dagger", "Dart", "Flail", "Throwing Axe", "Harpoon", "Javelin", "Lance", "Mace", "Morning Star", "Polearm", "Glaive", "Halberd", "Quaterstaff", "Sickle", "Sling", "Long-Spear", "Broad Sword", "Bastard Sword", "Claymore", "Long Sword", "Rapier", "Sabre", "Short Sword", "Two-handed Sword", "Trident", "Warhammer", "Whip"};
        armor = {"Clothing", "Padded Armor", "Leather Armor", "Studded Leather Armor", "Hide Armor", "Scale Mail", "Brigandine Armor", "Chain Mail"};

        base_mods = {""};
        abilities = {"Pickpocket", "Detect Noise", "Read Language", "Climb Wall"};

        alignment = {"Lawful Neutral", "True Neutral", "Chaotic Neutral"};
        enemies = {""};

        level = 1;
        castingLevel = 0;
        xp = 0;
        hp = 0 + (level * d6());

        attacksPerRound = 1;
        numOfSpells = 0;
        
        magicSchools = {"Abjuration", "Alteration", "Conjuration", "Charm", "Lesser Divination", "Greater Divination", "Illusion", "Evocation", "Necromancy"};
        spheres = {""};
        spells = {""};
}

int main() {
    bard bardObj;
    return 0;
};