#include <iostream>
#include "races/dwarf.h"
#include "races/elf.h"
#include "races/gnome.h"
#include "races/half-elf.h"
#include "races/halfling.h"
#include "races/human.h"

    
int main() {
    dwarf dwarfObj;
    elf elfObj;
    gnome gnomeObj;
    halfElf halfElfObj;
    halfling halflingObj;
    human humanObj;

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


    return 0;
}