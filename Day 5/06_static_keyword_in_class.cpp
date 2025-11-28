#include <iostream>
using namespace std;

class Demo {
public:
    static int x;     // static data member
};

int Demo::x = 50;      // definition

int main() {
    cout << Demo::x;
    return 0;
}
