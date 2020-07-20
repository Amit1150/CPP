#include <iostream>
using namespace std;

// function prototype
int add(int a, int b);
double add(double a, double b);

int main() {
    cout << "int 1 & 3: " << add(1,3) << endl;
    cout << "double 1.0 & 3.0: " << add(1.0,3.0) << endl;
    cout << "char A & B: " << add('A', 'B') << endl;
    //cout << "double 1.0 & 3: " << add(1.0,3);  // won't compile
    //cout << "mixed 1 & 3.0: " << add(1,3.0);   // won't compile
    return 0;
}

// function defination
int add(int a, int b){
    cout <<endl << "inside int func: ";
    return a + b;
}
double add(double a, double b){
    cout <<endl <<"inside double func: ";
    return a + b;
}