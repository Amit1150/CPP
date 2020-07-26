#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;
    
public:
    Player();
    Player(string name);
    Player(string name, int health, int xp);
    ~Player();

};

#endif // _PLAYER_H_
