#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base display()" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {   // overriding
        cout << "Derived display()" << endl;
    }
};

int main() {
    Base *ptr;
    Derived d;

    ptr = &d;
    ptr->display();    // Runtime Polymorphism: calls Derived display()

    return 0;
}
