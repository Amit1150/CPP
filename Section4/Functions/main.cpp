#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

// Function prototypes
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name,  string prefix = "Mr.", string suffix = "");


int main() {
    cout << "square root for 10: " << sqrt(10)<<endl;
    
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    cout << endl;
    
    cout<< "============================== "<<endl;
    double cost{ 0 };
    cost = calc_cost(100.0, 0.08, 4.25);        // will use no defaults  100 + 8 + 4.25 
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;    // 112.25
    
    cost = calc_cost(100.0, 0.08);                  // will use default shipping  100 + 8 + 3.50 
    cout << "Cost is: " << cost << endl;    // 111.50

    cost = calc_cost(200.0);                         // will use default tax and shipping   200 + 12 + 3.50
    cout << "Cost is: " << cost << endl;    // 215.50
    
    cost = calc_cost();
    cout << "Cost is: " << cost << endl;    // 100 + 6 + 3.50
    
    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");

    cout << endl;
    
    return 0;
}

// Function definations
void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v) 
        cout << s << " ";
    cout << endl;
}

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name,  string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}