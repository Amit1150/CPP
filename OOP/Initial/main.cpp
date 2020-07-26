#include <iostream>
#include <string>
#include "Account.h"
#include "Player.h"

using namespace std;


int main() {
    {
     Player amit;
     Player test("Test");
     Player sample("Sample", 12, 100);   
    }
    
    Player *enemy{nullptr};
    enemy = new Player("pointer 1");
    
    Player *enemy2 = new Player("enemy2");
    
    
    delete enemy;
    delete enemy2;
    
    cout << "====================="<< endl;
    
    Account amit_account;
    amit_account.set_name("Amit");
    cout << "Name: "<< amit_account.get_name()<< endl;
    
    amit_account.set_balance(100);
    amit_account.deposit(500);
    amit_account.withdraw(200);
    cout<< "Balance: "<< amit_account.get_balance() << endl;
    return 0;
}