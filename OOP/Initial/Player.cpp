#include "Player.h"
#include <iostream>
using namespace std;

Player::Player()
{
    name = "None";
    health = 100;
    xp = 0;
    cout<< "deafault con"<< endl;
}
Player::Player(string n)
{
    name = n;
    cout<< "1 param con"<< endl;
}
Player::Player(string n, int health, int xp)
{
    name = n;
    cout<< "3 param con"<< endl;
}

Player::~Player()
{
    cout<< "destructor con for: "<< name << endl;
}



