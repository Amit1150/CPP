#include "Player.h"
#include <iostream>
using namespace std;

Player::Player() 
    : Player("None",0, 0)
{
    cout<< "deafault constructor"<< endl;
}
Player::Player(string n)
    :Player(n, 0, 0)
{
    cout<< "1 param constructor"<< endl;
}
Player::Player(string n, int h, int x)
    : name {n}, health {h}, xp{x}
{
    cout<< "3 param constructor"<< endl;
}

// Copy constructor
Player:: Player(const Player &source) 
    :Player(source.name, source.health, source.xp)
{
    cout << "copy constructor made copy of: "<< source.name << endl;
}

Player::~Player()
{
    cout<< "destructor for: "<< name << endl;
}



