#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;
};

// Derived from Person (1st child)
class Student : public Person {
public:
    int rollno;
};

// Derived from Person (2nd child)
class Teacher : public Person {
public:
    string subject;
};

// Hybrid: TA inherits from BOTH Student and Teacher
class TA : public Student, public Teacher {
public:
    string researchArea;

    void getInfo() {
        cout << "--- TA Information ---" << endl;

        // ⚠ Name & Age exist in BOTH Student and Teacher → Ambiguity!
        // We must specify: Student::name or Teacher::name

        cout << "Name (from Student) : " << Student::name << endl;
        cout << "Age  (from Student) : " << Student::age << endl;

        cout << "Roll No             : " << rollno << endl;

        cout << "Subject (Teacher)   : " << Teacher::subject << endl;
        cout << "Age (from Teacher)  : " << Teacher::age << endl;

        cout << "Research Area       : " << researchArea << endl;
    }
};

int main() {

    TA t1;

    // Assigning values to Student part
    t1.Student::name = "Tony Stark";
    t1.Student::age = 21;
    t1.rollno = 1234;

    // Assigning values to Teacher part
    t1.Teacher::subject = "Engineering";
    t1.Teacher::age = 35;

    t1.researchArea = "AI Robotics";

    t1.getInfo();

    return 0;
}
