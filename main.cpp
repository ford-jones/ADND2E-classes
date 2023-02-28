#include <iostream>
#include "races/dwarf.h"
#include "races/elf.h"
#include "races/gnome.h"
#include "races/half-elf.h"
#include "races/halfling.h"
#include "races/human.h"
#include "Classes/Priest/hdr/cleric.h"
#include "Classes/Priest/hdr/druid.h"
#include "Classes/Warrior/hdr/fighter.h"
#include "Classes/Warrior/hdr/paladin.h"
#include "Classes/Warrior/hdr/ranger.h"
#include "Classes/Rogue/hdr/bard.h"
#include "Classes/Rogue/hdr/thief.h"
#include "Classes/Wizard/hdr/mage.h"

    
int main() {
    dwarf dwarfObj;
    elf elfObj;
    gnome gnomeObj;
    halfElf halfElfObj;
    halfling halflingObj;
    human humanObj;

    cleric clericObj;
    druid druidObj;
    bard bardObj;
    thief thiefObj;
    fighter fighterObj;
    paladin paladinObj;
    ranger rangerObj;
    mage mageObj;

    //  RACES

    std::cout << "Dwarf Regions:" << "\n";
    for(auto i: dwarfObj.regions) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Elf Abilities:" << "\n";
    for(auto i: elfObj.abilities) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Gnome Constitution Score:" << "\n";
    std::cout << gnomeObj.con << "\n";

    std::cout << "" << "\n";

    std::cout << "Half-elf Allowed Classes:" << "\n";
    for(auto i: halfElfObj.classes) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Halfling Saving Throw (poison):" << "\n";
    std::cout << halflingObj.st_poison << "\n";

    std::cout << "" << "\n";

    std::cout << "Human Allowed Classes:" << "\n";
    for(auto i: humanObj.classes) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    // Classes

    std::cout << "Cleric Spheres:" << "\n";
    for(auto i: clericObj.spheres) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Druid spells (1st level):" << "\n";
    for(auto i: druidObj.spells) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Bard Allowed Allignments:" << "\n";
    for(auto i: bardObj.alignment) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Thief Abilities:" << "\n";
    for(auto i: thiefObj.abilities) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Fighter Health:" << "\n";
    std::cout << fighterObj.hp << "\n";

    std::cout << "" << "\n";

    std::cout << "Paladin Abilities:" << "\n";
    for(auto i: paladinObj.abilities) {
        std::cout << i << "\n";
    };

    std::cout << "" << "\n";

    std::cout << "Ranger Abilities:" << "\n";
    for(auto i: rangerObj.abilities) {
        std::cout << i << "\n";
    }

    std::cout << "" << "\n";

    std::cout << "Mage Abilities:" << "\n";
    for(auto i: mageObj.abilities) {
        std::cout << i << "\n";
    };

    return 0;
}