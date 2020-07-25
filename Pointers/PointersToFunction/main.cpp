#include <iostream>
#include <vector>
using namespace std;


void double_data(int *int_ptr){
    *int_ptr *= 2;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(const vector<string> *const names){
     // (*names).at(0) = "changing value";  This is not allowed as we have const vector<string> *names
    for(auto v : *names){
        cout << v << " ";
    }
    cout << endl;
    // names = nullptr; This is not allowed as we have vector<string> *const names
}

void display(int *array, int sentinel){
    while(*array != sentinel){
        cout << *array++ << " ";
    }
    cout << endl;
}

int main() {
    int x =20;
    cout << "x = "<< x<< endl;
    double_data(&x);
    cout<< "x = "<< x << endl;
    
    cout << "--------------"<<endl;
    int *int_ptr {nullptr};
    int_ptr = &x;
    double_data(int_ptr);
    cout<< "x = "<< x << endl;
    
    int a {10};
    int b {20};
    cout << "before swap a & b: "<< a <<" & "<< b << endl;
    swap(&a, &b);
    cout << "after swap a & b: "<< a <<" & "<< b << endl;
    
    cout << "--------------"<<endl;
    
    vector<string> names{"Amit", "kumar"};
    display(&names);
    
    int score[] {100, 95, 89, -1};
    display(score, -1);
    return 0;
}