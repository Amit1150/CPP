#include <iostream>
using namespace std;

int main() {
    char vowels[5] {'a', 'e', 'i', 'o', 'u'};
    
    cout << "first vowel is "<< vowels[0]<< endl;
    cout << "last vowel is "<< vowels[4]<< endl;
    
    cout << "==============================="<< endl;
    int scores[5] {1,2,3};
    
    scores[3]=4;
    
    cout << "at index 3: " << scores[3] << endl;
    cout << "at index 4: " << scores[4] << endl;
    
    cout << "==============================="<< endl;
    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols] {};
    cout << "at index 0: " << movie_rating[0][0] << endl;
    
    cout << "==============================="<< endl;
    return 0;
}