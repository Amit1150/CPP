#ifndef _STUDENT_H_
#define _STUDENT_H_

class Student
{
private:
    static int totalStudents;
    int age;
    char *name;
public:
    Student(const Student &s);
    Student(int a, char *n);
    void display();
    static int getTotalStudent();
};

#endif // _STUDENT_H_
