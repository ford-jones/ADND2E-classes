#include <iostream>
#include <string>
#include <vector>
#include "playerTemplate.h"

using std::string;
using std::vector;

playerTemplate::playerTemplate() {
    playerName = "";
    playerAge = 0;
    alignment = "";

    con = 0;
    dex = 0;
    str = 0;
    intel = 0;
    wis = 0;
    cha = 0;

    playerRace = "";
    playerClass = "";
    langs = {""};

    level = 1;
    hp = 0;
    xp = 0;
    spellsPerDay = 0;

    gold = 0;
    inventory = {""};
    encumberance = 0;
    spells = {""};

    abilities = {""};
    profficiencies = {""};
    magicSchools = {""};
    sphere = {""};
};