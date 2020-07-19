#include <iostream>
using namespace std;


// Precedence
//   ! > && > ||

int main() {
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;
   // average = (double)total/count;  Old-Style
    
    
    cout << "The 3 numbers were: "<< num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;
    
    cout << "5/2 = "<< 5 / 2 << endl;
    cout << "5.0/2 = "<< 5.0 / 2 << endl;
    cout << "5/2.0 = "<< 5 / 2.0 << endl;
    
    bool result ;
    result = 10 == 10.0;
    cout << "10 == 10.0 : " << result << endl;
    
    cout << endl;
    return 0;
}