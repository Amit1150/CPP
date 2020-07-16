#include <iostream>
using namespace std;

int main() {
    int favNumber;
    cout << "Enter your fav number between 1 and 100: " << endl;
    cin >> favNumber;
    cout << "yes it's me " << favNumber << "ok."<< endl;
    cout << "======================================"<< endl;
    const int months_in_year {12};
    cout << months_in_year << endl;
    cout << "======================================"<< endl;
    return 0;
}