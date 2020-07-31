#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLastWord(string s)
{
    int count { 0 };
    for(auto c : s) {
        if(c == ' '){
            count = 0;
            continue;
        }
        count++;
    }
    return count;
}

int main()
{
    cout <<  lengthOfLastWord("Amit Kum") << endl;
    cout <<  lengthOfLastWord("Hello World") << endl;
    cout <<  lengthOfLastWord("hello") << endl;
    cout <<  lengthOfLastWord("hi helo getge") << endl;
    return 0;
}