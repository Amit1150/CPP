#include <iostream>
using namespace std;

int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2){
    int *array {nullptr};
    
    array = new int [size1 * size2];
    
    int index {0};
    for(size_t i{0}; i < size1; i++){
        for(size_t j {0}; j < size2; j++){
            array[index] = array1[i] * array2[j];
            index++;
        }
    }
    
    return array;
}

void print(const int *const array, size_t size){
    for(size_t i{0}; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array1[] {1,2,3,4,5};
    int array2[] {10, 20, 30};
    
    print(array1, 5);
    print(array2, 3);
    
    int *new_array{nullptr};
    
    new_array = apply_all(array1, 5, array2, 3);
    print(new_array, 15);
    delete [] new_array;
    
    return 0;
}