#include <iostream>

using namespace std;

int main() {
    int * int_ptr {nullptr};
    
    int_ptr =new int;
    
    cout << "Address: " <<int_ptr << endl;
    cout << "vaue : "<< *int_ptr << endl;
    delete int_ptr;
    cout << "====================="<< endl;
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps"<< endl;
    cin >> size;
    
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    
    delete [] temp_ptr;
    cout << endl;
    
    return 0;
}