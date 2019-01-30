#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include <vector>

class Player
{

private:
    int gold{0}, exp{0}, level{0}, hp{0}, mana{0};
    vector <vector<int>> inventory(10, 0); // tab 0: use items, tab 1: equips, tab 2: quest items/upgrade mats.
    int armour{0}, helmet{0}, weapon{0}, offhand{0}, trinket{0}, pet{0};
    vector<int> map_unlocked(0);
    int map_location{0};
public:
    bool check_exp(const Player &ref);
    int sell_item(const Player &ref);
    bool check_hp(const Player &ref);
    bool check_mana(const Player &ref);
    bool equip_armour(const Player &ref, std::string armour);
    bool equip_helmet(const Player &ref, std::string helmet);
    bool equip_weaponconst Player &ref, std::string weapon);
    bool equip_offhand(const Player &ref, std::string offhand);
    bool equip_trinket(const Player &ref, std::string trinket);
    bool equip_pet(const Player &ref, std::string pet);
    bool add_item(const Player &ref, std::string item); // check if inventory is full and add item according to the tabs
    int check_location(const Player &ref);
    Player();
    ~Player();

};

#endif // PLAYER_H
