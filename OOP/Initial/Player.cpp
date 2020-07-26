#include "Player.h"
#include <iostream>
using namespace std;

Player::Player() : name {"None"}, health{0}, xp{0}
{
    cout<< "deafault con"<< endl;
}
Player::Player(string n)
{
    name = n;
    health = 100;
    xp = 0;
    cout<< "1 param con"<< endl;
}
Player::Player(string n, int h, int x)
    : name {n}, health {h}, xp{x}
{
    cout<< "3 param con"<< endl;
}

Player::~Player()
{
    cout<< "destructor con for: "<< name << endl;
}



