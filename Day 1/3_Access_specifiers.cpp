// Access specifiers (public, private, protected)
#include <iostream>
using namespace std;

class Student
{
private:
    string name; // private data
    int age;

public:
    // Setter functions
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    // Getter functions
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s;

    // Using setters
    s.setName("Roshan");
    s.setAge(20);

    // Using getters
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    return 0;
}
