#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int num {10};
    cout << "value of num is: "<< num << endl;
    cout << "address of num is: "<< &num << endl;
    
    int *p;
    cout << "value of p is: "<< p << endl;
    cout << "address of p is: "<< &p << endl;
    
    p = nullptr;
    cout << "value of p is: "<< p << endl;
    cout << "address of p is: "<< &p << endl;
    
    p = &num;
    cout << "value of p is: "<< p << endl;
    
    cout << "value at p is: "<< *p << endl;
    
    cout<< "-------- changing value at p to 20 ---------" << endl;
    *p = 20;
    cout << "value at p is: "<< *p << endl;
    cout << "value pf num is: "<< num << endl;
    
    cout<< "-------- changing value of num to 30 ---------" << endl;
    num = 30;
    cout << "value at p is: "<< *p << endl;
    cout << "value pf num is: "<< num << endl;
    
    cout << "============================"<< endl;
    
    vector<string> names {"Amit", "Kumar"};
    
    vector<string> *namePtr {nullptr};
    
    namePtr = &names;
    
    cout << "value at o from vector pointer: "<< (*namePtr).at(0) << endl;
    
    for(auto name : *namePtr){
        cout << name << endl;
    }
    
    cout << "==========================" << endl;
    
    int sample {100};
    int *sample_ptr {&sample};
    cout << "sample = "<< sample << endl;
    cout << "*sample = "<< *sample_ptr << endl;
    cout << "sample_ptr[0] = "<< sample_ptr[0] << endl;
    
    return 0;
}