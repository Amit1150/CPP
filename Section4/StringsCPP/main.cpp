#include <iostream>
#include <string>

using namespace std;

int main() {
    string temp;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi", 3};
    string s4 {"apple", 1,3};
    string s5 {s1};
    string s6 (3, 'X');
    
    cout << s1 <<endl;
    cout << s2 <<endl;
    cout << s3 <<endl;
    cout << s4 <<endl;
    cout << s5 <<endl;
    
    cout << "========================================="<< endl;
    
    cout << "s1 == s5 : " << (s1 == s5) << endl;
    cout << "s1 == s2 : " << (s1 == s2 )<< endl;
    cout << "s1 != s2 : " << (s1 != s2) << endl;
    cout << "s1 < s2 : " << (s1 < s2) << endl;
    cout << "s2 > s1 : " << (s2 > s1) << endl;
    cout << "s4 < s5 : " << (s4 < s5) << endl;
    cout << "s1 == Apple : " << (s1 == "Apple") << endl;
    
    
    cout << "========================================="<< endl;
    
    temp = "AmitK";
    temp = s1;
    cout << temp << endl;
    
    // temp = "C++" + "is powerful";   // It is illigle
    temp = string("C++") + "is powerful";   // It is valid now
    temp = "c++" + s1;
    cout << temp << endl;
    cout << "at index 4: "<< temp[4] << endl;
    cout << "at index 4 using at function: "<< temp.at(4) << endl;
    
    for(auto c: temp){
        cout << c << endl;
    }
    
    cout << "========================================="<< endl;
    temp = "AmitAmitkAmit" + temp;
    
    cout << temp << endl;
    cout << "substr(1, 3): "<< temp.substr(1,3) << endl;
    cout << "find(Ap): "<< temp.find("Ap") << endl;
    cout << "find(Am): "<< temp.find("Am") << endl;
    cout << "find(Am, 1) from index 1: "<< temp.find("Am", 1) << endl;
    cout << "find(XXXXX): "<< temp.find("XXXXX") << endl;  // should print some garbage value
    cout << "erase(startindex, length): "<< temp.erase(1, 3) << endl;
    
    string full_name;
    cout << "Enter full name" << endl;
    getline(cin, full_name);
    cout << "your fullname: "<< full_name<< endl;
    cout << "total char: "<< full_name.length()<< endl;
    
    cout<< "before swap s1 with s3: "<< s1 << " && "<< s3 << endl;
    s1.swap(s3);
    cout<< "after swap s1 with s3: "<< s1 << " && "<< s3 <<endl;
    
    
    cout << "===================================";
    string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string key {"jYZabcIikULlmWnMxyzNOPQdeAWBCDXHfghopRSTVqrsEuFGtvJK"};
    string input;
    cout << "Enter your message"<<endl;
    getline(cin, input);
    string output;
    size_t index;
    for(auto c: input){
        index = alphabet.find(c);
        if(index != string::npos) {
            output.push_back(key.at(index));
        }else {
            output.push_back(c);
        }
    }
    
    cout << output << endl;
    
    string decrypt;
    
    for(auto c: output) {
        index = key.find(c);
        if(index != string::npos){
            decrypt.push_back(alphabet.at(index));
        } else {
            decrypt.push_back(c);
        }
    }
    
    cout<< decrypt<<endl;
    return 0;
}