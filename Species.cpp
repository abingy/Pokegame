#include "Species.h"

Species::Species(int n, Type t1, Type t2, Rarity r, int steps, bool b, double maleper) {
    dexNum = n;
    type1 = t1;
    type2 = t2;
    rarity = r;
    eggSteps = steps;
    isBasic = b;
    
    if ((maleper >= 0.0) && (maleper <= 1.0)) {
        malePercentage = maleper;
        femalePercentage = 1.0 - maleper;
        genderlessPercentage = 0.0;
    }
    
    else {
        malePercentage = 0.0;
        femalePercentage = 0.0;
        genderlessPercentage = 0.0;
    }
}

void Species::setDexNum(int n) {
    dexNum = n;
}

int Species::getDexNum() {
    return dexNum;
}

void Species::setType1(Type t) {
    type1 = t;
}

Type Species::getType1() {
    return type1;
}

void Species::setType2(Type t) {
    type2 = t;
}

Type Species::getType2() {
    return type2;
}

void Species::setRarity(Rarity r) {
    rarity = r;
}

Rarity Species::getRarity() {
    return rarity;
}

void Species::setEggSteps(int n) {
    eggSteps = n;
}

int Species::getEggSteps() {
    return eggSteps;
}

void Species::setIsBasic(bool b) {
    isBasic = b;
}

bool Species::getIsBasic() {
    return isBasic;
}

void Species::setGenderPercentage(double percent) {
    if ((percent >= 0.0) && (percent <= 1.0)) {
        malePercentage = percent;
        femalePercentage = 1.0 - percent;
        genderlessPercentage = 0.0;
    }
    
    else {
        malePercentage = 0.0;
        femalePercentage = 0.0;
        genderlessPercentage = 0.0;
    }
}

double Species::getMalePercentage() {
    return malePercentage;
}

double Species::getFemalePercentage() {
    return femalePercentage;
}

double Species::getGenderlessPercentage() {
    return genderlessPercentage;
}
