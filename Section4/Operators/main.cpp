#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
     
// Example 1 - simple increment
    cout << "Counter : " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
  
    counter++;
    cout << "Counter : " << counter << endl;

    ++counter; 
    cout << "Counter : " << counter << endl;

// Example 2 - preincrement
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    
    result = ++counter; // Note the pre increment
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

// Example 3 - post-increment
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    
    result = counter++; // Note the post increment
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

// Example 4
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = ++counter + 10;  // Note the pre increment
        
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

// Example 5
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;

    result = counter++ + 10;  // Note the post increment
        
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;

    cout << endl;
    
// Example 6
    cout << "Enter no of cents. ";
    int num_of_cents {0};
    cin>> num_of_cents;
    
    int remender {0};
    
    int dollers = num_of_cents / 100;
    num_of_cents = num_of_cents % 100;
    
    int quaters = num_of_cents / 25;
    num_of_cents = num_of_cents % 25;
    
    int dimes = num_of_cents / 10;
    num_of_cents = num_of_cents % 10;
    
    int nickels = num_of_cents / 5;
    num_of_cents = num_of_cents % 5;
    
    
    
    cout<< "dollers: "<< dollers << endl;
    cout<< "quaters: "<< quaters << endl;
    cout<< "dimes: "<< dimes << endl;
    cout<< "nickels: "<< nickels << endl;
    cout<< "pennies: "<< num_of_cents << endl; 
    return 0;
}