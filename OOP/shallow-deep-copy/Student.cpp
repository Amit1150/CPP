#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

int Student::totalStudents = 0;

// inbuild copy contructor always made shallow copy. We can change to deep copy by implementing our own copy ctr.
Student:: Student(const Student &s){
    cout<< "copy const"<< endl;
    totalStudents++;
    this ->age = s.age;
    this -> name = new char[strlen(s.name) + 1];
    strcpy(this->name, s.name);
}

Student::Student(int a, char *n)
{
    totalStudents++;
    this -> age = a;
    
    // Shallow copy, we should avoid it
    // this -> name = n;
    
    // Deep copy: It says make a new array of same size, and copy the contents
    this -> name = new char[strlen(n)+1];
    strcpy(this -> name, n);
}

void Student:: display() {
    cout << name << " " << age << " total:"<< totalStudents << endl;
}

int Student:: getTotalStudent() {
    return totalStudents;
}

