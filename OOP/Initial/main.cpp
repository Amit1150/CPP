#include <iostream>
#include <string>
#include "Account.h"
#include "Player.h"

using namespace std;

// It will create copy of p by calling copy constructor.
void display_player(Player p) {
    cout << "Name: "<< p.name << endl;
    cout << "Health: "<< p.health << endl;
    cout << "Xp: "<< p.xp << endl;
}

// It will not call copy constructor.
void display_player2(Player *p) {
    cout << "Name: "<< p -> name << endl;
    cout << "Health: "<< p -> health << endl;
    cout << "Xp: "<< p->xp << endl;
}

int main() {
//    {
//     Player amit;
//     Player test("Test");
//     Player sample("Sample", 12, 100);   
//    }
//    
//    Player *enemy{nullptr};
//    enemy = new Player("pointer 1");
//    
//    Player *enemy2 = new Player("enemy2");
    
    cout << "====================="<< endl;
    
    Player empty {"xxx", 100, 0};
    Player empty2 {empty};
    cout << "------ calling display---" << endl;
    display_player(empty);
    
    cout << "------ calling display 2---" << endl;
    display_player2(&empty);
    
    cout << "====================="<< endl;
//    delete enemy;
//    delete enemy2;
//    
    cout << "====================="<< endl;
    
    Account amit_account;
    amit_account.set_name("Amit");
    cout << "Name: "<< amit_account.get_name()<< endl;
    
    amit_account.set_balance(100);
    amit_account.deposit(500);
    amit_account.withdraw(200);
    cout<< "Balance: "<< amit_account.get_balance() << endl;
    
    cout << "====================="<< endl;
    
    return 0;
}