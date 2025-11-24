#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;

    void getInfo() {
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Roll  : " << rollno << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void getInfo() {
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Subject : " << subject << endl;
    }
};

int main() {

    Student s1;
    s1.name = "Roshan";
    s1.age = 20;
    s1.rollno = 123;
    s1.getInfo();

    cout << "-------------------" << endl;

    Teacher t1;
    t1.name = "Rahul";
    t1.age = 35;
    t1.subject = "Maths";
    t1.getInfo();

    return 0;
}
