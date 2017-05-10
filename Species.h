#ifndef _SPECIES_H_
#define _SPECIES_H_

#endif // _SPECIES_H_

enum Type {
    None, Normal, Fighting, Flying, Poison, Ground, Rock, Bug, Ghost, Steel,
    Fire, Water, Grass, Electric, Psychic, Ice, Dragon, Dark, Fairy
};

enum Rarity {
    Common, Uncommon, Rare, Legendary
};

class Species
{
public:
    Species();
    
    Species(int n, Type t1, Type t2, Rarity r, int steps, bool b, double maleper);
    
    void setDexNum(int n);
    
    int getDexNum();
    
    void setType1(Type t);
    
    Type getType1();
    
    void setType2(Type t);
    
    Type getType2();
    
    void setRarity(Rarity r);
    
    Rarity getRarity();
    
    void setEggSteps(int n);
    
    int getEggSteps();
    
    void setIsBasic(bool b);
    
    bool getIsBasic();
    
    void setGenderPercentage(double percent);
    
    double getMalePercentage();
    
    double getFemalePercentage();
    
    double getGenderlessPercentage();
    
private:
    int dexNum;
    Type type1;
    Type type2;
    Rarity rarity;
    int eggSteps;
    bool isBasic;
    double malePercentage;
    double femalePercentage;
    double genderlessPercentage;
};
