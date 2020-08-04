#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    char name[] = "abcd";
    int age = 30;
    
    Student s1(age, name);
    s1.display();
    
    name[3]= 'e';
    Student s2 (age, name);
    s2.display();
    
    s1.display();
    
    Student s3 = s1;
    s3.display();
    name[3] = 'k';
    s1.display();
    s3.display();
    
    cout << "total students: "<< Student::getTotalStudent()<< endl;
    return 0;
}