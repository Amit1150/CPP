#include <iostream>
using namespace std;

int *create_array(size_t size, int initial_value =0){
    int *storage{nullptr};
    storage = new int [size];
    for(size_t i{0}; i < size; i++){
        *(storage + i) = initial_value;
    }
    return storage;
}

void display(const int *const my_array, size_t size){
    for(size_t i {0}; i < size; i++){
         cout << my_array[i] << " ";  // or we can do it like below
        //cout << * (my_array + i) << " ";
    }
    
    
    cout << endl;
}

int main() {
    int *my_array {nullptr};
    size_t size = 10;
    int intial_val = 5;
    my_array = create_array(size, intial_val);
    display(my_array, size);
    
    delete [] my_array;
    cout << endl;
    return 0;
}