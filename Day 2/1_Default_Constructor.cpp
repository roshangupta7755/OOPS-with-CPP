#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    // Default Constructor
    Student() {
        roll = 1;
    }
};

int main() {
    Student s;
    cout << "Roll = " << s.roll;
    return 0;
}
