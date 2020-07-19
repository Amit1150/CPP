#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i {1};
    for (; i < 5; i++) {
        cout << "item is " << i<< endl;
    }
    
    cout << "===============================" << endl;
    vector<int> nums {10,20,30,40,50};
    for(unsigned i {0}; i < nums.size(); i++) {
        cout << nums[i]<< endl;
    }
    cout << "--- Other ways----"<< endl;
    for(auto num: nums){
        cout << num << endl;
    }
    
    cout << "==============================="<< endl;
    
    int scores [] {1,2,3,4,5};
    for(int score: scores){
        cout << score << endl;
    }
    
    cout << "==============================="<< endl;
    for(auto c: "Amit"){
        cout << c << endl;
    }
    cout << "==============================="<< endl;
    
    char input;
    int input_number {0};
    vector<int> numbers{};
    
    do{
        cout << "Enter P for print" << endl;
        cout << "Enter A for add" << endl;
        cout << "Enter M for mean" << endl;
        cout << "Enter S for smallest number" << endl;
        cout << "Enter Q for quit" << endl;
        
        cin >> input;
        
        if(input == 'p' || input == 'P') {
            if(numbers.size() == 0) {
                cout << "List is empty."<< endl;
            }else {
                cout << "[ ";
                for(auto it: numbers){
                    cout <<it << " ";
                }
                cout << "]"<< endl;
            }
            
        } else if(input == 'a' || input == 'A') {
            cout << "Enter number" << endl;
            cin>> input_number;
            numbers.push_back(input_number);
        } else if(input == 'm' || input == 'M') {
            if(numbers.size() == 0) {
                cout << "list is empty" << endl;
            } else {
                int sum {0};
                for(auto it: numbers){
                    sum += it;
                }
                cout<< "mean is : "<< static_cast<double>(sum)/numbers.size() << endl;
            }
        } else if(input == 's' || input == 'S') {
            if(numbers.size() == 0) {
                cout << "list is empty" << endl;
            } else {
                int smallest {numbers[0]};
                for(auto it: numbers) {
                    smallest = smallest < it? smallest : it;
                }
                
                cout << "smalest number is: "<< smallest << endl;
            }
        }
        
        
        
    }while(input != 'q' && input != 'Q');
    
    return 0;
}