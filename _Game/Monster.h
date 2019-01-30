#ifndef MONSTER_H
#define MONSTER_H

class Monster
{
private:
    int hp{0}, mana{0}, level{0},drops{0};

public:
    Monster(int ID); //declare monster by ID which corresponds to a specific set of hp, mp etc.
    Monster();
    ~Monster();
    bool check_hp(const Monster &ref);
    bool check_mana(const Monster &ref);
    int drops(const Monster &ref);
    
    

};

#endif // MONSTER_H
