#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>

class Student
{
private:
    int age;
    int roll;
    
public:
    std::string name;
    Student();
    Student(int age, int r);
    void display();
    int getAge();
    int getRoll();

};

#endif // _STUDENT_H_
