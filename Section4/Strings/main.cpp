#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char name[80];
    char full_name[100];
    // cout << name << endl;  // should print garbage
    cout << "Enter your name"<< endl;
    cin >> name;
    cout << "Hello "<< name << endl;
    
    strcpy(name, "Amit");
    cout << "Total Len= "<< strlen(name) << endl;
    strcat(name, " Kumar");
    cout << "Total Len= "<< strlen(name) << endl;
    cout << "name comp with another: "<< strcmp(name, "Amit Kumar") << endl;
    
    cout << "Enter full name" << endl;
    cin.clear();
    cin.sync();
    cin.getline(full_name, 100);
    cout << "your full name: "<< full_name << endl;
    
    for(size_t i {0}; i < strlen(full_name); i++) {
        if(isalpha(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }
    
    cout << "fullname in upper case as: "<< full_name<<endl;
    cout << "==============================================="<< endl;
    char first_name [50] {"Amit"};
    char last_name [50] {"Kumar"};
    char whole_name [100];
    size_t first_name_length {strlen(first_name)};
    size_t last_name_length {strlen(last_name)};
    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);
    size_t whole_name_length {strlen(whole_name)};
    cout << whole_name << endl;
    return 0;
}