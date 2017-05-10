#ifndef _POKEMON_H_
#define _POKEMON_H_

#include "Species.h"

const Species Bulbasaur(1, Grass, Poison, Rare, 5120, true, 0.875);
const Species Ivysaur(2, Grass, Poison, Rare, 5120, false, 0.875);
const Species Venusaur(3, Grass, Poison, Rare, 5120, false, 0.875);
const Species VenusaurMega(3, Grass, Poison, Rare, 5120, false, 0.875);

const Species Charmander(4, Fire, None, Rare, 5120, true, 0.875);
const Species Charmeleon(5, Fire, None, Rare, 5120, false, 0.875);
const Species Charizard(6, Fire, Flying, Rare, 5120, false, 0.875);
const Species CharizardMegaX(6, Fire, Dragon, Rare, 5120, false, 0.875);
const Species CharizardMegaY(6, Fire, Flying, Rare, 5120, false, 0.875);

const Species Squirtle(7, Water, None, Rare, 5120, true, 0.875);
const Species Wartortle(8, Water, None, Rare, 5120, false, 0.875);
const Species Blastoise(9, Water, None, Rare, 5120, false, 0.875);
const Species BlastoiseMega(9, Water, None, Rare, 5120, false, 0.875);

const Species Caterpie(10, Bug, None, Common, 3840, true, 0.5);
const Species Metapod(11, Bug, None, Common, 3840, false, 0.5);
const Species Butterfree(12, Bug, Flying, Common, 3840, false, 0.5);

const Species Weedle(13, Bug, Poison, Common, 3840, true, 0.5);
const Species Kakuna(14, Bug, Poison, Common, 3840, false, 0.5);
const Species Beedrill(15, Bug, Poison, Common, 3840, false, 0.5);
const Species BeedrillMega(15, Bug, Poison, Common, 3840, false, 0.5);

const Species Pidgey(16, Normal, Flying, Common, 3840, true, 0.5);
const Species Pidgeotto(17, Normal, Flying, Common, 3840, false, 0.5);
const Species Pidgeot(18, Normal, Flying, Common, 3840, false, 0.5);
const Species PidgeotMega(18, Normal, Flying, Common, 3840, false, 0.5);

class Pokemon {
    Pokemon();
};

#endif //_POKEMON_H_
