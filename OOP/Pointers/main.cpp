#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    Student s1 {10, 100};
    
    
    Student s3 (s1); // Copy constructor
    s3.name = "Amit"; // It won't reflect in s1
    
    s1.display();
    s3.display();
    
    // creating object dynamically;
    Student *s2 = new Student{11, 101};
    s2 -> display();
    
    Student *s4 = new Student(*s2); // Copy constructor
    s4 ->display();
    
    Student *s5 = new Student(s1); // Copy constructor
    s5 -> display();
    
    Student s6 (*s4); // Copy constructor
    s6.display();
    
    delete s2;
    delete s4
    delete s5
    delete s6;
    
    return 0;
}