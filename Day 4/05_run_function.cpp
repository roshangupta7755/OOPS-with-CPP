#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent show()" << endl;
    }
};

class Child : public Parent {
public:
    void show() {     // overriding
        cout << "Child show()" << endl;
    }
};

int main() {
    Child c;
    c.show();     // calls Child show()
    return 0;
}
