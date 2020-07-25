#include <iostream>
using namespace std;

int main() {
    int scores[] {100, 95, 150, -1};
    
    cout<< "name of array is address of first element of array: "<< scores<< endl;
    int *scores_ptr {scores};
    cout << "scores_ptr: "<< scores_ptr << endl;
    cout << "*score_ptr: "<< *scores_ptr << endl;
    
    cout << "Array subscription notation"<< endl;
    cout << "scores[0] "<< scores[0] << endl;
    cout << "scores[1] "<< scores[1] << endl;
    cout << "scores[2] "<< scores[2] << endl;
    
    cout << "pointer subscription notation" << endl;
    cout << "scores_ptr[0] "<< scores_ptr[0] << endl;
    cout << "scores_ptr[1] "<< scores_ptr[1] << endl;
    cout << "scores_ptr[2] "<< scores_ptr[2] << endl;
    
    cout << "pointer offset notation" << endl;
    cout << "*scores_ptr "<< *scores_ptr << endl;
    cout << "*(scores_ptr + 1) "<< *(scores_ptr + 1) << endl;
    cout << "*(scores_ptr + 2) "<< *(scores_ptr + 2) << endl;
    
    cout << "array offset notation" << endl;
    cout << "*scores "<< *scores << endl;
    cout << "*(scores + 1) "<< *(scores + 1) << endl;
    cout << "*(scores + 2) "<< *(scores + 2) << endl;
    
    cout << "==============================="<< endl;
    while(*scores_ptr != -1){
        cout << *scores_ptr++ << endl;  // first dereference the pointer then increament the pointer (scores_ptr++)
    }
    
    cout << "==============================="<< endl;
    
    return 0;
}