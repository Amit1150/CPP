#include <iostream>
#include "Student.h"

using namespace std;

Student:: Student() {
    cout << "default con"<< endl;
}

Student:: Student(int age, int r) {
    cout << "param con"<< endl;
    this -> age = age;
    roll = r;
}

void Student:: display() {
    cout <<name <<" " << age << " "<< roll<< endl;
}

int Student:: getAge(){
    return age;
}

int Student:: getRoll() {
    return roll;
}
