#include <iostream>
using namespace std;

// ---------------------------------------------
// 1. static keyword (global)
// ---------------------------------------------
static int gcount = 10;   // static global variable

// ---------------------------------------------
// 3. static variable inside a function
// ---------------------------------------------
void counterFunction() {
    static int count = 0;   // keeps value between calls
    count++;
    cout << "Function static count = " << count << endl;
}

// ---------------------------------------------
// 4. static keyword in a class
// ---------------------------------------------
class Demo {
public:
    static int x;        // static data member
    int y;

    Demo() { 
        y = 100;
    }

    static void showX() {   // static member function
        cout << "Static x = " << x << endl;
    }
};

// define static member outside class
int Demo::x = 50;

// ---------------------------------------------
// 5. static object
// ---------------------------------------------
void createObject() {
    static Demo obj;      // static object (created only once)
    obj.showX();
}

int main() {

    // -----------------------------------------
    // 2. static variable (global)
    // -----------------------------------------
    cout << "Global static variable gcount = " << gcount << endl;

    // Function static variable test
    counterFunction();
    counterFunction();
    counterFunction();

    // Class static members
    Demo::showX();      // calling static function
    cout << "Access static x using class: " << Demo::x << endl;

    // Static object
    createObject();
    createObject();
    createObject();

    return 0;
}
