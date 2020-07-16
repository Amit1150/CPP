#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    vector <int> test_scores {100, 8, 98, 76};
    vector <int> sample; // empty
    vector <char> vowels (5);  // 5 elements all initilized to zero
    vector <double> hi_temp (3, 80.0); // 3 elements all initlized to 80.0
    
    cout<< "score size is : "<< test_scores.size() << endl;
    
    cout<< "score of 1 is: "<< test_scores[1]<<endl;
    cout<< "score at 1: "<< test_scores.at(1)<<endl;
    
    test_scores.at(2) = 20;
    test_scores.push_back(40);
    test_scores.push_back(20);
    cout<< "score size is : "<< test_scores.size() << endl;
    
    cout << "========================================="<<endl;
    
    vector<vector<int>> ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5},
    };
    
    cout<< "Movie rating using array syntex"<<endl;
    cout<< ratings[0][0] << endl;
    cout<< ratings[0][3] << endl;
    cout<< "Movie rating using vector syntex"<<endl;
    cout<< ratings.at(0).at(0) << endl;
    cout<< ratings.at(0).at(3) << endl;
    
    cout << "========================================="<<endl;
    
    vector<int> vec1;
    vector<int> vec2;
    
    vec1.push_back(10);
    vec1.push_back(20);
    
    vec2.push_back(100);
    vec2.push_back(200);
    
    vector<vector<int>> vec_2d;
    
    vec_2d.push_back(vec1);
    vec_2d.push_back(vec2);
    
    cout<< "size of 2d vector is: "<< vec_2d.size() << endl;
    
    cout<< "element at 0,0 in 2d vec: "<< vec_2d[0][0]<< endl;
    cout<< "element at 0,1 in 2d vec: "<< vec_2d[0][1]<< endl;
    return 0;
}