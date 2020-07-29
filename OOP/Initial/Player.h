#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
using namespace std;

class Player
{
public:
    string name;
    int health;
    int xp;
    
public:
    Player();
    Player(string name);
    Player(string name, int health, int xp);
    Player(const Player &source); // Copy constructor
    ~Player();

};

#endif // _PLAYER_H_
